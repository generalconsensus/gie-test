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
      'bid' => 'panels_mini_delta_dashboard_recommendations',
      'hide_title' => 0,
      'title' => 'Recommended',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'panels_mini_delta_dashboard_follow',
      'hide_title' => 0,
      'title' => 'Content You Follow',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Content You Follow');
  t('Dashboard');
  t('Recommended');

  $export['dashboard'] = $quicktabs;

  return $export;
}
