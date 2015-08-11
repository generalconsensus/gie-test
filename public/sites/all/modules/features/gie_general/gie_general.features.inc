<?php
/**
 * @file
 * gie_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_general_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function gie_general_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function gie_general_flag_default_flags() {
  $flags = array();
  // Exported flag: "Node Abuse".
  $flags['abuse_node'] = array(
    'entity_type' => 'node',
    'title' => 'Node Abuse',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'funding',
      2 => 'innovation',
      3 => 'needs',
      4 => 'resource',
    ),
    'flag_short' => 'Report',
    'flag_long' => 'Flag this content as offensive.',
    'flag_message' => '',
    'unflag_short' => 'Flag as non-offensive',
    'unflag_long' => 'Flag this content as non-offensive.',
    'unflag_message' => '',
    'unflag_denied_text' => 'Thank you for submitting your request. Exchange administrators will review this content.',
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
      'teaser_date' => 0,
      'at_a_glance' => 0,
      'contact' => 0,
      'logo' => 0,
      'details' => 0,
      'search_listing' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'gie_general',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Node Whitelist".
  $flags['abuse_whitelist_node'] = array(
    'entity_type' => 'node',
    'title' => 'Node Whitelist',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Whitelist this content.',
    'flag_long' => 'Remove abuse flags from this node, whitelist.',
    'flag_message' => '',
    'unflag_short' => 'Un-whitelist this content.',
    'unflag_long' => 'Allow abuse reports on this node, un-whitelist',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'confirm',
    'weight' => 1,
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
      'teaser_date' => 0,
      'at_a_glance' => 0,
      'contact' => 0,
      'logo' => 0,
      'details' => 0,
      'search_listing' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Are you sure you want to whitelist this content?',
    'unflag_confirmation' => 'Are you sure you want to un-whitelist this content?',
    'module' => 'gie_general',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Favorite".
  $flags['favorite'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite',
    'global' => 0,
    'types' => array(
      0 => 'event',
      1 => 'funding',
      2 => 'innovation',
      3 => 'needs',
      4 => 'organization',
      5 => 'program',
      6 => 'resource',
    ),
    'flag_short' => 'Follow',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unfollow',
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
      'teaser_date' => 0,
      'needs_list' => 0,
      'at_a_glance' => 0,
      'contact' => 0,
      'logo' => 0,
      'details' => 0,
      'search_listing' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'gie_general',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function gie_general_node_info() {
  $items = array(
    'error_page' => array(
      'name' => t('Error page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
