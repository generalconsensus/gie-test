<?php
/**
 * @file
 * gie_long_form_content.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_long_form_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_full_width';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_full_width';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_image|paragraphs_full_width'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_left_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_left_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_image|paragraphs_left_align'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|long_form_image|paragraphs_right_align';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'long_form_image';
  $ds_layout->view_mode = 'paragraphs_right_align';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_paragraphs_image',
        1 => 'field_paragraphs_caption',
      ),
    ),
    'fields' => array(
      'field_paragraphs_image' => 'ds_content',
      'field_paragraphs_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|long_form_image|paragraphs_right_align'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_long_form_content_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_full_width';
  $ds_view_mode->label = 'Paragraphs full width';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_full_width'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_left_align';
  $ds_view_mode->label = 'Paragraphs left align';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_left_align'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'paragraphs_right_align';
  $ds_view_mode->label = 'Paragraphs right align';
  $ds_view_mode->entities = array(
    'paragraphs_item' => 'paragraphs_item',
  );
  $export['paragraphs_right_align'] = $ds_view_mode;

  return $export;
}
