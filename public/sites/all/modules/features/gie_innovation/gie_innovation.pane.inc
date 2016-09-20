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
  $template->name = 'grants_introduction';
  $template->title = 'Grants Introduction';
  $template->plugin = 'text';
  $template->description = 'This is the introduction for the Grants page';
  $template->configuration = '';
  $export['grants_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'grants_organizations';
  $template->title = 'Grants Organizations';
  $template->plugin = 'entity_reference';
  $template->description = 'This pane selects the grants organization to which the list should be filtered for. ';
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
    'display_view' => 'grants_listing_page:grants_list',
  );
  $export['grants_organizations'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'grants_partners';
  $template->title = 'Grants Partners';
  $template->plugin = 'entity_reference';
  $template->description = 'This pane selects the Grants partners at the top of the Grants page.';
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
    'display_view' => 'grants_organization_list:grants_organizations',
  );
  $export['grants_partners'] = $template;

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
  $template->name = 'multistep_help_innovation';
  $template->title = 'Multistep Help Innovation';
  $template->plugin = 'text';
  $template->description = 'Help text block for the Innovation multistep form';
  $template->configuration = '';
  $export['multistep_help_innovation'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'multistep_help_funding';
  $template->title = 'Multistep Help Funding';
  $template->plugin = 'text';
  $template->description = 'Help text block for the Funding multistep form';
  $template->configuration = '';
  $export['multistep_help_funding'] = $template;

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
