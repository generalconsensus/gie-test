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
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
    'long_form_image' => array(
      'name' => 'Long form image',
      'bundle' => 'long_form_image',
      'locked' => '1',
    ),
    'long_form_text' => array(
      'name' => 'Long Form Text',
      'bundle' => 'long_form_text',
      'locked' => '1',
    ),
  );
  return $items;
}
