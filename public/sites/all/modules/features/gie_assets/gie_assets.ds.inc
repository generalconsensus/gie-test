<?php
/**
 * @file
 * gie_assets.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_assets_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'asset|image|image_teaser';
  $ds_fieldsetting->entity_type = 'asset';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'image_teaser';
  $ds_fieldsetting->settings = array(
    'field_asset_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['asset|image|image_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_assets_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|image|default';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_image',
      ),
    ),
    'fields' => array(
      'field_asset_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['asset|image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|image|featured';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_image',
      ),
    ),
    'fields' => array(
      'field_asset_image' => 'ds_content',
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
  $export['asset|image|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|image|image_teaser';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'image_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_image',
      ),
    ),
    'fields' => array(
      'field_asset_image' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['asset|image|image_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|image|org_teaser';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'org_teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_image',
      ),
    ),
    'fields' => array(
      'field_asset_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['asset|image|org_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'asset|video|featured';
  $ds_layout->entity_type = 'asset';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_asset_video_file',
      ),
    ),
    'fields' => array(
      'field_asset_video_file' => 'ds_content',
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
  $export['asset|video|featured'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_assets_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'featured';
  $ds_view_mode->label = 'Featured';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_teaser';
  $ds_view_mode->label = 'Image teaser';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['image_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'org_teaser';
  $ds_view_mode->label = 'Org Teaser';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['org_teaser'] = $ds_view_mode;

  return $export;
}
