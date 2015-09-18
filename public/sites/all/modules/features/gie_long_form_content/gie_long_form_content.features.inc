<?php
/**
 * @file
 * gie_long_form_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_long_form_content_ctools_plugin_api($module = NULL, $api = NULL) {
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

  // Exported image style: long_from_section_header.
  $styles['long_from_section_header'] = array(
    'label' => 'Long From Section Header',
    'effects' => array(
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1440,
          'height' => 550,
          'anchor' => 'center-center',
        ),
        'weight' => -10,
      ),
      6 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#000000',
          ),
          'under' => 0,
          'exact' => array(
            'width' => 1440,
            'height' => 550,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => -9,
      ),
      8 => array(
        'name' => 'canvasactions_source2canvas',
        'data' => array(
          'xpos' => 'center',
          'ypos' => 'center',
          'alpha' => 50,
        ),
        'weight' => 3,
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
    'long_form_callout_card' => array(
      'name' => 'Long Form Callout Card',
      'bundle' => 'long_form_callout_card',
      'locked' => '1',
    ),
    'long_form_image' => array(
      'name' => 'Long form image',
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
