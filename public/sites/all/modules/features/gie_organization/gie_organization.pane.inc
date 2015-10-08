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

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'partner_introduction';
  $template->title = 'Partner Introduction';
  $template->plugin = 'text';
  $template->description = 'This is the introduction page for the partners listing page. /partners';
  $template->configuration = '';
  $export['partner_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'partners_listing_page';
  $template->title = 'Partners Listing Page';
  $template->plugin = 'entity_reference';
  $template->description = '';
  $template->configuration = array(
    'mode' => 'bundle',
    'entity' => 'node',
    'target_bundles' => array(
      'organization' => 'organization',
    ),
    'multiplicity' => 0,
    'more_link' => '',
    'more_link_text' => '',
    'output_mode' => 'view',
    'display_view' => 'admin_views_node:default',
  );
  $export['partners_listing_page'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'partners_listing_page_all';
  $template->title = 'Partners Listing Page - All';
  $template->plugin = 'entity_reference';
  $template->description = '';
  $template->configuration = array(
    'mode' => 'bundle',
    'entity' => 'node',
    'target_bundles' => array(
      'organization' => 'organization',
    ),
    'multiplicity' => 0,
    'more_link' => '',
    'more_link_text' => '',
    'output_mode' => 'view',
    'display_view' => 'admin_views_node:default',
  );
  $export['partners_listing_page_all'] = $template;

  return $export;
}
