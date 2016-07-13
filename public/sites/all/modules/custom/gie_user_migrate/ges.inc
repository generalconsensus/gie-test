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

    return TRUE;
  }
}