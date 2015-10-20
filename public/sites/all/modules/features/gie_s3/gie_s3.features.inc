<?php
/**
 * @file
 * gie_s3.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_s3_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
