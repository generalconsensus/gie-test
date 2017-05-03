<?php
/**
 * @file
 * gie_resource.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_resource_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'resources_introduction';
  $template->title = 'Resources Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['resources_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'resources_introduction_suggest';
  $template->title = 'Resources introduction (suggest)';
  $template->plugin = 'text';
  $template->description = 'Resources introduction block with "suggest a resource" language';
  $template->configuration = '';
  $export['resources_introduction_suggest'] = $template;

  return $export;
}
