<?php
/**
 * @file
 * gie_taxonomies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_taxonomies_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'region';
  $page->task = 'page';
  $page->admin_title = 'Region';
  $page->admin_description = 'region listing page';
  $page->path = 'locations';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_region__panel_context_f53f24c2-54ed-40e7-a502-642e91187077';
  $handler->task = 'page';
  $handler->subtask = 'region';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = 'e3d0e9d8-243d-4b17-9cb3-03dd04761c85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5707eb7e-b1c6-42a4-9a02-fc1b44f0fc6b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'region_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5707eb7e-b1c6-42a4-9a02-fc1b44f0fc6b';
    $display->content['new-5707eb7e-b1c6-42a4-9a02-fc1b44f0fc6b'] = $pane;
    $display->panels['center'][0] = 'new-5707eb7e-b1c6-42a4-9a02-fc1b44f0fc6b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5707eb7e-b1c6-42a4-9a02-fc1b44f0fc6b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['region'] = $page;

  return $pages;

}