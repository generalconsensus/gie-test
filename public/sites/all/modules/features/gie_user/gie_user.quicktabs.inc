<?php
/**
 * @file
 * gie_user.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function gie_user_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'user_profile_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'User profile tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'panels_mini_delta_user_overview',
      'hide_title' => 1,
      'title' => 'Overview',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'vid' => 'user_resources',
      'display' => 'resources',
      'args' => '',
      'title' => 'Resources',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'user_innovations',
      'display' => 'innovations',
      'args' => '',
      'title' => 'Innovations',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'user_connections',
      'display' => 'connections',
      'args' => '',
      'title' => 'Conections',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Conections');
  t('Innovations');
  t('Overview');
  t('Resources');
  t('User profile tabs');

  $export['user_profile_tabs'] = $quicktabs;

  return $export;
}