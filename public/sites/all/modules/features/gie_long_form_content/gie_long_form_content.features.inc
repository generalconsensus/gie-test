<?php
/**
 * @file
 * gie_long_form_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_long_form_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gie_long_form_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gie_long_form_content_image_default_styles() {
  $styles = array();

  // Exported image style: footer_logo.
  $styles['footer_logo'] = array(
    'label' => 'Footer Logo',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 160,
          'height' => 55,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: long_form_image.
  $styles['long_form_image'] = array(
    'label' => 'Long form image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 850,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: long_form_section_header.
  $styles['long_form_section_header'] = array(
    'label' => 'Long Form Section Header',
    'effects' => array(
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 2000,
          'height' => 1600,
          'anchor' => 'center-center',
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: pdf_screenshot.
  $styles['pdf_screenshot'] = array(
    'label' => 'PDF Screenshot',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gie_long_form_content_node_info() {
  $items = array(
    'long_form_page' => array(
      'name' => t('Long-form page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function gie_long_form_content_paragraphs_info() {
  $items = array(
    'long_form_aside' => array(
      'name' => 'Long Form Aside',
      'bundle' => 'long_form_aside',
      'locked' => '1',
    ),
    'long_form_background_video' => array(
      'name' => 'Long Form Background Video',
      'bundle' => 'long_form_background_video',
      'locked' => '1',
    ),
    'long_form_callout_card' => array(
      'name' => 'Long Form Callout Card',
      'bundle' => 'long_form_callout_card',
      'locked' => '1',
    ),
    'long_form_image' => array(
      'name' => 'Long Form Image',
      'bundle' => 'long_form_image',
      'locked' => '1',
    ),
    'long_form_key_figure' => array(
      'name' => 'Long Form Key Figure',
      'bundle' => 'long_form_key_figure',
      'locked' => '1',
    ),
    'long_form_pullquote' => array(
      'name' => 'Long Form Pullquote',
      'bundle' => 'long_form_pullquote',
      'locked' => '1',
    ),
    'long_form_section_break_image' => array(
      'name' => 'Long Form Section Break Image',
      'bundle' => 'long_form_section_break_image',
      'locked' => '1',
    ),
    'long_form_section_header_image' => array(
      'name' => 'Long Form Section Header Image',
      'bundle' => 'long_form_section_header_image',
      'locked' => '1',
    ),
    'long_form_text' => array(
      'name' => 'Long Form Text',
      'bundle' => 'long_form_text',
      'locked' => '1',
    ),
    'long_form_video' => array(
      'name' => 'Long Form Video',
      'bundle' => 'long_form_video',
      'locked' => '1',
    ),
  );
  return $items;
}
