<?php
/**
 * @file
 * gie_funding.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_funding_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gie_funding_node_info() {
  $items = array(
    'funding' => array(
      'name' => t('Funding Ops'),
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
