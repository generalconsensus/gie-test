<?php
/**
 * @file
 * gie_general.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function gie_general_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'node_abuse_form';
  $pm_existing_page->label = 'Node Abuse Form';
  $pm_existing_page->context = 'entity|node|nid';
  $pm_existing_page->paths = 'flag/confirm/%/%flag/%';
  $export['node_abuse_form'] = $pm_existing_page;

  return $export;
}
