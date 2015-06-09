<?php
/**
 * @file
 * gie_dashboard.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_dashboard_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'dashboard_action_cards';
  $template->title = 'Dashboard Action Cards';
  $template->plugin = 'entity_reference';
  $template->description = 'Set the action cards to be displayed on the Dashboard ';
  $template->configuration = array(
    'mode' => 'bundle',
    'entity' => 'node',
    'target_bundles' => array(
      'action_card' => 'action_card',
    ),
    'multiplicity' => 8,
    'more_link' => '',
    'more_link_text' => '',
    'output_mode' => 'view',
    'display_view' => 'dashboard:dashboard_actions',
  );
  $export['dashboard_action_cards'] = $template;

  return $export;
}
