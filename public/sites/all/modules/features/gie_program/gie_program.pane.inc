<?php
/**
 * @file
 * gie_program.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_program_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'programs_introduction';
  $template->title = 'Programs Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['programs_introduction'] = $template;

  return $export;
}
