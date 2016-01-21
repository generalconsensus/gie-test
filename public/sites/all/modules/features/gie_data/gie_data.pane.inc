<?php
/**
 * @file
 * gie_data.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_data_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'data_welcome';
  $template->title = 'Data Welcome';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['data_welcome'] = $template;

  return $export;
}
