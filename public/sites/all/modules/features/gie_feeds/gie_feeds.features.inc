<?php
/**
 * @file
 * gie_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_feeds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gie_feeds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}