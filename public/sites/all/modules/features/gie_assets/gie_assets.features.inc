<?php
/**
 * @file
 * gie_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gie_assets_image_default_styles() {
  $styles = array();

  // Exported image style: org_teaser.
  $styles['org_teaser'] = array(
    'label' => 'Org Teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
