<?php
/**
 * @file
 * gie_homepage.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_homepage_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_header';
  $template->title = 'Homepage Header';
  $template->plugin = 'text';
  $template->description = 'header area on homepage';
  $template->configuration = '';
  $export['homepage_header'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_join_callout';
  $template->title = 'Homepage Join callout';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['homepage_join_callout'] = $template;

  return $export;
}
