<?php
/**
 * @file
 * gie_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gie_groups_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Microsite'),
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
