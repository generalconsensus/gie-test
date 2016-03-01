<?php
/**
 * @file
 * gie_dashboard.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function gie_dashboard_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'dashboard';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Dashboard';
  $quicktabs->tabs = array(
    0 => array(
      'path' => 'gie_dashboard/notification_center',
      'title' => 'What\'s New?',
      'weight' => '-100',
      'type' => 'callback',
    ),
    1 => array(
      'vid' => 'user_innovations',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Innovation Impacts',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'dashboard',
      'display' => 'user_funding_opportunities',
      'args' => '',
      'title' => 'Funding Status',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'bid' => 'panels_mini_delta_dashboard_follow',
      'hide_title' => 0,
      'title' => 'Network',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('Funding Status');
  t('Innovation Impacts');
  t('Network');
  t('What\'s New?');

  $export['dashboard'] = $quicktabs;

  return $export;
}
