<?php
/**
 * @file
 * gie_program.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_program_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'field_program_poc' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|program|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|program|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'program';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|program|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_program_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_program_address',
      ),
      'right' => array(
        1 => 'field_program_poc',
      ),
    ),
    'fields' => array(
      'field_program_address' => 'left',
      'field_program_poc' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|program|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'program';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_program_logo',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_program_link',
        3 => 'field_program_desc',
      ),
    ),
    'fields' => array(
      'field_program_logo' => 'left',
      'title_field' => 'right',
      'field_program_link' => 'right',
      'field_program_desc' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|program|full'] = $ds_layout;

  return $export;
}
