<?php
/**
 * @file
 * gie_general.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gie_general_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'assets_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full',
    'cache' => 0,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'assets_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}