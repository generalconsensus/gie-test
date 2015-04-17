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
  $template->name = 'locations_introduction';
  $template->title = 'Locations Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['locations_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'sectors_introduction';
  $template->title = 'Sectors introduction';
  $template->plugin = 'text';
  $template->description = 'Introduction for the sectors listing page.';
  $template->configuration = '';
  $export['sectors_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'topics_introduction';
  $template->title = 'Topics Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['topics_introduction'] = $template;

  return $export;
}
