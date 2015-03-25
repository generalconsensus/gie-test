<?php
/**
 * @file
 * gie_taxonomies.features.inc
 */

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
    'api_version' => 3,
    'module' => 'gie_taxonomies',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
