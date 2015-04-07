<?php
/**
 * @file
 * gie_general.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_general_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'about_the_exchange';
  $template->title = 'About The Exchange';
  $template->plugin = 'text';
  $template->description = 'About the Exchange';
  $template->configuration = '';
  $export['about_the_exchange'] = $template;

  return $export;
}
