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
function gie_dashboard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}