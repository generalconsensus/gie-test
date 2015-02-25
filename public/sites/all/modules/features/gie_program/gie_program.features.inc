<?php
/**
 * @file
 * gie_program.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_program_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gie_program_node_info() {
  $items = array(
    'program' => array(
      'name' => t('Project (Program)'),
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
