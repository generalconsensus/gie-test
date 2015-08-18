<?php
/**
 * @file
 * gie_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gie_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_path';
  $strongarm->value = '';
  $export['contact_plus_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_copy';
  $strongarm->value = 1;
  $export['contact_plus_user_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_mail';
  $strongarm->value = 'hset';
  $export['contact_plus_user_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_name';
  $strongarm->value = 'hset';
  $export['contact_plus_user_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_path';
  $strongarm->value = '';
  $export['contact_plus_user_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_subj';
  $strongarm->value = 0;
  $export['contact_plus_user_subj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_text';
  $strongarm->value = array(
    'value' => '',
    'format' => 'filtered_html',
  );
  $export['contact_plus_user_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_title';
  $strongarm->value = '';
  $export['contact_plus_user_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_plus_user_to';
  $strongarm->value = 1;
  $export['contact_plus_user_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'user_teaser_summary' => array(
        'custom_settings' => TRUE,
      ),
      'title' => array(
        'custom_settings' => TRUE,
      ),
      'resource_user' => array(
        'custom_settings' => TRUE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'user_teaser_with_motto' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '7',
        ),
        'account' => array(
          'weight' => '3',
        ),
        'timezone' => array(
          'weight' => '18',
        ),
        'googleanalytics' => array(
          'weight' => '4',
        ),
        'mimemail' => array(
          'weight' => '0',
        ),
        'contact' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'user_teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'user_teaser_summary' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'title' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'resource_user' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'user_teaser_with_motto' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'flag_follow' => array(
          'full' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'user_teaser_summary' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'user_teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'title' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'resource_user' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'listing' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'user_teaser_with_motto' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailchimp_api_key';
  $strongarm->value = 'b6c2f74e5dae88e87e00d95bea1669c6-us10';
  $export['mailchimp_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_contact_user_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_contact_user_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'substitute' => '',
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'listing' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'user_teaser_with_motto' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'resource_user' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'title' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'user_teaser' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'user_teaser_summary' => array(
        'status' => 0,
        'substitute' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_user:user:default_selection';
  $strongarm->value = 0;
  $export['panelizer_user:user:default_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_user:user:full_selection';
  $strongarm->value = 'user:user:default:full';
  $export['panelizer_user:user:full_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_user:user:page_manager_selection';
  $strongarm->value = 'user:user:default';
  $export['panelizer_user:user:page_manager_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_user_registration';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_user_registration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
