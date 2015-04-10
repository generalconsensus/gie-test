<?php
/**
 * @file
 * gie_discussion.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_discussion_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'discussions_introduction';
  $template->title = 'Discussions introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['discussions_introduction'] = $template;

  return $export;
}
