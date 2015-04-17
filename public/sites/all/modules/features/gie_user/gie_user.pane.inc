<?php
/**
 * @file
 * gie_user.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_user_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'members_directory_introduction';
  $template->title = 'Members directory introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['members_directory_introduction'] = $template;

  return $export;
}
