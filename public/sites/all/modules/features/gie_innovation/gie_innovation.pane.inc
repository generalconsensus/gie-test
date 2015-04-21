<?php
/**
 * @file
 * gie_innovation.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_innovation_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'facet_pane';
  $template->title = 'Facet Pane';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['facet_pane'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'innovations_introduction';
  $template->title = 'Innovations Introduction';
  $template->plugin = 'text';
  $template->description = 'Innovations Introduction';
  $template->configuration = '';
  $export['innovations_introduction'] = $template;

  return $export;
}
