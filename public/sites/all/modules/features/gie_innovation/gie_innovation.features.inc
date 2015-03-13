<?php
/**
 * @file
 * gie_innovation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_innovation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gie_innovation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gie_innovation_node_info() {
  $items = array(
    'innovation' => array(
      'name' => t('Innovation'),
      'base' => 'node_content',
      'description' => t('Use this page for creating Innovations'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
