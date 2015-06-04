<?php
/**
 * @file
 * gie_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = 'This is the user dashboard page.';
  $page->path = 'dashboard';
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
  $handler->name = 'page_dashboard__panel_context_a3e0954a-1a7c-4287-aac4-51d9b80b165d';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
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
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'center' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Your Exchange Dashboard';
  $display->uuid = '799e2e49-ae94-42c2-8683-945a930849fa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc873759-f953-459a-9ba2-c94aff11b86d';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-dashboard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc873759-f953-459a-9ba2-c94aff11b86d';
    $display->content['new-cc873759-f953-459a-9ba2-c94aff11b86d'] = $pane;
    $display->panels['main'][0] = 'new-cc873759-f953-459a-9ba2-c94aff11b86d';
    $pane = new stdClass();
    $pane->pid = 'new-580cb31e-5a70-489b-98e7-e701b204c0b4';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '580cb31e-5a70-489b-98e7-e701b204c0b4';
    $display->content['new-580cb31e-5a70-489b-98e7-e701b204c0b4'] = $pane;
    $display->panels['title'][0] = 'new-580cb31e-5a70-489b-98e7-e701b204c0b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-580cb31e-5a70-489b-98e7-e701b204c0b4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  return $pages;

}
