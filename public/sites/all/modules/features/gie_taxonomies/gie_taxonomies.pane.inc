<?php
/**
 * @file
 * gie_taxonomies.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_taxonomies_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'sectors_introduction';
  $template->title = 'Sectors introduction';
  $template->plugin = 'text';
  $template->description = 'Introduction for the sectors listing page.';
  $template->configuration = '';
  $export['sectors_introduction'] = $template;

  return $export;
}
