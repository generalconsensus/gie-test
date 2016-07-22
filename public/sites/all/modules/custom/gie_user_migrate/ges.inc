<?php

/**
 * GES User Migration class
 */
class GesUserMigration extends Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    // Create a MigrateSource object, which manages retrieving the input data.
    // TODO: place csv elsewhere (maybe?). also rename CSV to actual filename.
    $csv_path = DRUPAL_ROOT . '/' . drupal_get_path('module', 'gie_user_migrate') . '/assets/ges_user_sample.csv';
    $csv_options = array(
      'header_rows' => 1, // columns are denoted on top line of csv
      'embedded_newlines' => TRUE,
    );
    $csv_fields = array(
      'password' => t('Random password'),
    );

    $this->source = new MigrateSourceCSV($csv_path, array(), $csv_options, $csv_fields);

    $this->destination = new MigrateDestinationUser();

    $this->description = t('Migrate users from CSV to GIE user');

    $this->map = new MigrateSQLMap(
        $this->machineName,
        array(
          'csv_id' => array(
            'type' => 'int',
            'not null' => TRUE,
            'description' => t('CSV Row ID'),
          )
        ),
        MigrateDestinationUser::getKeySchema()
    );

    // set data based off of source
    $this->addFieldMapping('name', 'field_ges_email')
         ->dedupe('users', 'name');
    $this->addFieldMapping('mail', 'field_ges_email');
    $this->addFieldMapping('field_user_firstname','field_ges_firstname');
    $this->addFieldMapping('field_user_lastname','field_ges_lastname');
    $this->addFieldMapping('pass', 'password');
    // text and URL fields
    $this->addFieldMapping('field_user_twitter', 'field_ges_twitter');
    $this->addFieldMapping('field_user_linkedin', 'field_ges_linkedin');
    $this->addFieldMapping('field_user_facebook', 'field_ges_facebook');
    $this->addFieldMapping('field_user_summary', 'field_ges_bio');
    // address field
    $this->addFieldMapping('field_user_address', 'field_ges_residence');
    $this->addFieldMapping('field_user_address:locality', 'field_ges_city');
    $this->addFieldMapping('field_user_address:administrative_area', 'field_ges_state');
    // term fields
    $this->addFieldMapping('field_user_company', 'field_ges_businessname');
    $this->addFieldMapping('field_user_company:source_type')
         ->defaultValue('tid');
    $this->addFieldMapping('field_term_sector', 'field_ges_socialchallenge');
    $this->addFieldMapping('field_term_sector:source_type')
         ->defaultValue('tid');

    // set some default values
    $this->addFieldMapping('roles')
         ->defaultValue(DRUPAL_AUTHENTICATED_RID);
    $this->addFieldMapping('status')
         ->defaultValue(1);
    $this->addFieldMapping('field_user_notifications')
         ->defaultValue('immediate');
    $this->addFieldMapping('signature_format')
         ->defaultValue('filtered_html');

  }

  public function prepareRow($row)
  {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // ignore row if a GIE account is already using the email
    $user = user_load_by_mail($row->field_ges_email);
    if (!empty($user)) {
      return FALSE;
    }

    // set a random password and add to row as a new field
    $password = user_password(12);
    $row->password = $password;

    // set country code based on country name (field_ges_residence)
    $country_code = _gie_user_migrate_convert_country_name_to_country_code($row->field_ges_residence);
    $row->field_ges_residence = $country_code;

    // set company term ID
    $terms = taxonomy_get_term_by_name($row->field_ges_businessname, 'company');
    $row->field_ges_businessname = key($terms);

    // set sector term ID
    $sector_terms = taxonomy_get_term_by_name($row->field_ges_socialchallenge, 'sector');
    $row->field_ges_socialchallenge = key($sector_terms);

    return TRUE;
  }
}

/**
 * Convert country name to ISO country code
 *
 * @param $country - country name. Can be of any case
 */
function _gie_user_migrate_convert_country_name_to_country_code($country) {
  // Necessary for country_get_list().
  require_once DRUPAL_ROOT . '/includes/locale.inc';
  $countries = country_get_list();
  return array_search(strtolower($country), array_map('strtolower', $countries));
}