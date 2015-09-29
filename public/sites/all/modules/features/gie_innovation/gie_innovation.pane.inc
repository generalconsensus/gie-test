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

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'sdg_landing_page';
  $template->title = 'SDG Landing Page';
  $template->plugin = 'entity_reference';
  $template->description = 'Selection of SDG Action Cards. ';
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
    'display_view' => 'sdg_landing_page:sdg_landing',
  );
  $export['sdg_landing_page'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'sdg_landing_page_title';
  $template->title = 'SDG Landing Page Title';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['sdg_landing_page_title'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'sdg_listing_page_introduction';
  $template->title = 'SDG Listing Page Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['sdg_listing_page_introduction'] = $template;

  return $export;
}
