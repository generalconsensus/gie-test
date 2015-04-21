<?php
/**
 * @file
 * gie_funding.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_funding_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'funding_introduction';
  $template->title = 'Funding Introduction';
  $template->plugin = 'text';
  $template->description = 'Funding Introduction';
  $template->configuration = '';
  $export['funding_introduction'] = $template;

  return $export;
}
