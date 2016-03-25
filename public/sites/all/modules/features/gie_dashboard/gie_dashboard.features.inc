<?php
/**
 * @file
 * gie_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_dashboard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gie_dashboard_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function gie_dashboard_image_default_styles() {
  $styles = array();

  // Exported image style: dashboard_profile_image.
  $styles['dashboard_profile_image'] = array(
    'label' => 'dashboard_profile_image',
    'effects' => array(
      4 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
