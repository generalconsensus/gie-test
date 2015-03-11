<?php
/**
 * @file
 * gie_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_general_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_general_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite".
  $flags['favorite'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite',
    'global' => 0,
    'types' => array(
      0 => 'funding',
      1 => 'innovation',
      2 => 'resource',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfavorite',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'gie_general',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
