<?php
/**
 * @file
 * gie_resource.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_resource_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_resource|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_resource';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['comment|comment_node_resource|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|resource|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|resource|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'resource';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'View',
        'wrapper' => '',
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
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|resource|listing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_resource_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_resource|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'author',
      ),
      'main_content' => array(
        1 => 'post_date',
        2 => 'comment_body',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'author' => 'media',
      'post_date' => 'main_content',
      'comment_body' => 'main_content',
      'links' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_resource|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_resource|form';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_resource';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author',
        1 => 'comment_body',
      ),
      'hidden' => array(
        2 => 'subject_field',
        3 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'author' => 'ds_content',
      'comment_body' => 'ds_content',
      'subject_field' => 'hidden',
      '_add_existing_field' => 'hidden',
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
  $export['comment|comment_node_resource|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_resource_date',
        1 => 'field_resource_source',
        2 => 'field_resource_author',
        3 => 'sharethis',
        4 => 'field_resource_assets',
        5 => 'field_resource_link',
        6 => 'field_resource_desc',
        7 => 'comments',
      ),
    ),
    'fields' => array(
      'field_resource_date' => 'ds_content',
      'field_resource_source' => 'ds_content',
      'field_resource_author' => 'ds_content',
      'sharethis' => 'ds_content',
      'field_resource_assets' => 'ds_content',
      'field_resource_link' => 'ds_content',
      'field_resource_desc' => 'ds_content',
      'comments' => 'ds_content',
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
  $export['node|resource|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_resource_type',
        1 => 'title_field',
        2 => 'author',
        3 => 'field_resource_date',
        4 => 'field_resource_sector',
        5 => 'node_link',
        6 => 'resource_counters_comment_count',
        7 => 'resource_counters_favorite_count',
      ),
    ),
    'fields' => array(
      'field_resource_type' => 'ds_content',
      'title_field' => 'ds_content',
      'author' => 'ds_content',
      'field_resource_date' => 'ds_content',
      'field_resource_sector' => 'ds_content',
      'node_link' => 'ds_content',
      'resource_counters_comment_count' => 'ds_content',
      'resource_counters_favorite_count' => 'ds_content',
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
  $export['node|resource|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|resource|teaser_date';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'resource';
  $ds_layout->view_mode = 'teaser_date';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_resource_date',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_resource_date' => 'ds_content',
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
  $export['node|resource|teaser_date'] = $ds_layout;

  return $export;
}
