<?php
/**
 * @file
 * gie_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
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
function gie_organization_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gie_organization_image_default_styles() {
  $styles = array();

  // Exported image style: org_and_program_detail.
  $styles['org_and_program_detail'] = array(
    'label' => 'Org and Program Detail page',
    'effects' => array(
      12 => array(
        'name' => 'imagefield_focus_scale_and_crop',
        'data' => array(
          'width' => 259,
          'height' => 155,
          'strength' => 'high',
          'fallback' => 'smartcrop',
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
function gie_organization_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
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
