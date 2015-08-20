<?php
/**
 * @file
 * gie_general.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_general_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'flagging|abuse_node|form';
  $ds_layout->entity_type = 'flagging';
  $ds_layout->bundle = 'abuse_node';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_abuse_type',
      ),
      'right' => array(
        1 => 'field_abuse_description',
      ),
      'hidden' => array(
        2 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_abuse_type' => 'left',
      'field_abuse_description' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['flagging|abuse_node|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_general_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'highlights';
  $ds_view_mode->label = 'Highlights';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['highlights'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'listing';
  $ds_view_mode->label = 'Listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['listing'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'page_header';
  $ds_view_mode->label = 'Page Header';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['page_header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_date';
  $ds_view_mode->label = 'Teaser with date';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_date'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser_with_motto';
  $ds_view_mode->label = 'User Teaser with Motto';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser_with_motto'] = $ds_view_mode;

  return $export;
}
