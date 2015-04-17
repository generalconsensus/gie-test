<?php
/**
 * @file
 * gie_taxonomies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_taxonomies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
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
function gie_taxonomies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_taxonomies_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow (taxonomy)".
  $flags['follow_taxonomy'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Follow (taxonomy)',
    'global' => 0,
    'types' => array(
      0 => 'region',
      1 => 'topic',
      2 => 'sector',
    ),
    'flag_short' => 'Follow',
    'flag_long' => 'Follow this term',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'Unfollow this term',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'gie_taxonomies',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
