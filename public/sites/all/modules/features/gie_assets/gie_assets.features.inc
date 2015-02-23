<?php
/**
 * @file
 * gie_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
