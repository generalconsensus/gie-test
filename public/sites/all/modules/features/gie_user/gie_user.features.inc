<?php
/**
 * @file
 * gie_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "pm_existing_pages" && $api == "pm_existing_pages") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_user_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow".
  $flags['follow'] = array(
    'entity_type' => 'user',
    'title' => 'Follow',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Follow',
    'flag_long' => 'Follow this user',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'Unfollow this user',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'token' => 0,
      'user_teaser' => 0,
      'user_teaser_summary' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'api_version' => 3,
    'module' => 'gie_user',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
