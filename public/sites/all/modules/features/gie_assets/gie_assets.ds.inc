<?php
/**
 * @file
 * gie_assets.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_assets_ds_layout_settings_info() {
  $export = array();

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
  $export['asset|image|image_teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_assets_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_teaser';
  $ds_view_mode->label = 'Image teaser';
  $ds_view_mode->entities = array(
    'asset' => 'asset',
  );
  $export['image_teaser'] = $ds_view_mode;

  return $export;
}
