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
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '8',
        ),
        'account' => array(
          'weight' => '0',
        ),
        'timezone' => array(
          'weight' => '6',
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
            'weight' => '11',
            'visible' => FALSE,
          ),
          'title' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'flag_follow' => array(
          'full' => array(
            'weight' => '7',
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
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

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
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  return $export;
}
