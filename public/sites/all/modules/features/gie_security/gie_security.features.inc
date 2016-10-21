<?php
/**
 * @file
 * gie_security.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_security_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_security_flag_default_flags() {
  $flags = array();
  // Exported flag: "GIE User Whitelist".
  $flags['gie_user_whitelist'] = array(
    'entity_type' => 'user',
    'title' => 'GIE User Whitelist',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Whitelist user',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Whitelist user',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'token' => 0,
      'listing' => 0,
      'spotlight' => 0,
      'user_teaser_with_motto' => 0,
      'resource_user' => 0,
      'title' => 0,
      'user_teaser' => 0,
      'user_teaser_summary' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 0,
    'access_uid' => '',
    'api_version' => 3,
    'module' => 'gie_security',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

/**
 * Implements hook_views_api().
 */
function gie_security_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
