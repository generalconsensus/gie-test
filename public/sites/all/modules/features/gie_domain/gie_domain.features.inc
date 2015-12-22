<?php
/**
 * @file
 * gie_domain.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_domain_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
