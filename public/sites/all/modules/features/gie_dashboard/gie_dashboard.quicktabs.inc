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
      'bid' => 'panels_mini_delta_whats_new_tab',
      'hide_title' => 1,
      'title' => 'What\'s New?',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'user_innovations',
      'display' => 'default',
      'args' => '',
      'title' => 'My Portfolio',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'user_innovations',
      'display' => 'default',
      'args' => '',
      'title' => 'Innovation',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'dashboard',
      'display' => 'default',
      'args' => '',
      'title' => 'Funding',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'bid' => 'panels_mini_delta_dashboard_follow',
      'hide_title' => 0,
      'title' => 'My Network',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('Funding');
  t('Innovation');
  t('My Network');
  t('My Portfolio');
  t('What\'s New?');

  $export['dashboard'] = $quicktabs;

  return $export;
}
