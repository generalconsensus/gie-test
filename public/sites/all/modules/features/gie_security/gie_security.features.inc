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
 * Implements hook_views_api().
 */
function gie_security_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_security_flag_default_flags() {
  $flags = array();
  // Exported flag: "GIE Node Spam".
  $flags['gie_node_spam'] = array(
    'entity_type' => 'node',
    'title' => 'GIE Node Spam',
    'global' => 1,
    'types' => array(
      0 => 'discussion',
      1 => 'event',
      2 => 'funding',
      3 => 'innovation',
      4 => 'needs',
      5 => 'organization',
      6 => 'resource',
    ),
    'flag_short' => 'Spam content',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Spam content',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'token' => 0,
      'highlights' => 0,
      'listing' => 0,
      'page_header' => 0,
      'spotlight' => 0,
      'teaser_date' => 0,
      'data' => 0,
      'microsite_content_slider' => 0,
      'needs_list' => 0,
      'at_a_glance' => 0,
      'contact' => 0,
      'logo' => 0,
      'long_form_footer_logo' => 0,
      'details' => 0,
      'search_listing' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'gie_security',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
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
    'module' => 'gie_security',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;
}
