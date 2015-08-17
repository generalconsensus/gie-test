<?php
/**
 * @file
 * gie_needs.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_needs_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'indemand_intro';
  $template->title = 'InDemand Intro';
  $template->plugin = 'text';
  $template->description = 'The intro block for the Indemand landing page';
  $template->configuration = '';
  $export['indemand_intro'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'indemand_landing';
  $template->title = 'InDemand Landing';
  $template->plugin = 'entity_reference';
  $template->description = 'This is the landing page for Indemand';
  $template->configuration = array(
    'mode' => 'bundle',
    'entity' => 'node',
    'target_bundles' => array(
      'action_card' => 'action_card',
    ),
    'multiplicity' => 0,
    'more_link' => '',
    'more_link_text' => '',
    'output_mode' => 'view',
    'display_view' => 'needs_listing:exchange_indemand_landing',
  );
  $export['indemand_landing'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'wanted_type_landing_page';
  $template->title = 'Wanted Type Landing Page';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['wanted_type_landing_page'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'wanteds_introduction';
  $template->title = 'Wanteds Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['wanteds_introduction'] = $template;

  return $export;
}
