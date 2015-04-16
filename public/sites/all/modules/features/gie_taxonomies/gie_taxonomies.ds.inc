<?php
/**
 * @file
 * gie_taxonomies.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_taxonomies_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|region|listing';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'region';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'field_region_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|region|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|sector|listing';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'sector';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'field_sector_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|sector|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_taxonomies_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|region|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'region';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description_field',
      ),
    ),
    'fields' => array(
      'description_field' => 'ds_content',
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
  $export['taxonomy_term|region|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|region|listing';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'region';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_region_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_region_image' => 'ds_content',
      'title' => 'ds_content',
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
  $export['taxonomy_term|region|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|sector|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'sector';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description_field',
      ),
    ),
    'fields' => array(
      'description_field' => 'ds_content',
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
  $export['taxonomy_term|sector|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|sector|listing';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'sector';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sector_image',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_sector_image' => 'ds_content',
      'title' => 'ds_content',
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
  $export['taxonomy_term|sector|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|topic|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'topic';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description_field',
      ),
    ),
    'fields' => array(
      'description_field' => 'ds_content',
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
  $export['taxonomy_term|topic|full'] = $ds_layout;

  return $export;
}
