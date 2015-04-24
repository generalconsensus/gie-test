<?php
/**
 * @file
 * gie_organization.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_organization_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'organizations_introduction';
  $template->title = 'Organizations Introduction';
  $template->plugin = 'text';
  $template->description = 'Organizations Introduction';
  $template->configuration = '';
  $export['organizations_introduction'] = $template;

  return $export;
}
