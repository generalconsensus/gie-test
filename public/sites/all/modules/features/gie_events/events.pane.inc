<?php
/**
 * @file
 * events.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function events_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'events_introduction';
  $template->title = 'Events Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['events_introduction'] = $template;

  return $export;
}
