<?php
/**
 * @file
 * gie_homepage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_homepage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|action_card|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'action_card';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_action_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|action_card|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|persona|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'persona';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_persona_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'button',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|persona|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_homepage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|action_card|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'action_card';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_action_image',
        2 => 'field_action_description',
        3 => 'field_action_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_action_image' => 'ds_content',
      'field_action_description' => 'ds_content',
      'field_action_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|action_card|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|persona|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'persona';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_persona_image',
        1 => 'title',
        2 => 'field_persona_description',
        3 => 'field_persona_link',
      ),
    ),
    'fields' => array(
      'field_persona_image' => 'ds_content',
      'title' => 'ds_content',
      'field_persona_description' => 'ds_content',
      'field_persona_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|persona|listing'] = $ds_layout;

  return $export;
}
