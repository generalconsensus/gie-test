<?php
/**
 * @file
 * gie_data.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_data_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'data';
  $page->task = 'page';
  $page->admin_title = 'Data';
  $page->admin_description = 'This is the page for the Exchange Data page.';
  $page->path = 'data';
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
  $handler->name = 'page_data__panel';
  $handler->task = 'page';
  $handler->subtask = 'data';
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
    'name' => 'panel',
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
  $display->title = 'Data';
  $display->uuid = 'a5dab807-c611-416f-af15-2581f30e545e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-054b1e21-6600-4b7a-a0c1-1405e4f0b534';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_page_views-data_counts';
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
    $pane->uuid = '054b1e21-6600-4b7a-a0c1-1405e4f0b534';
    $display->content['new-054b1e21-6600-4b7a-a0c1-1405e4f0b534'] = $pane;
    $display->panels['main'][0] = 'new-054b1e21-6600-4b7a-a0c1-1405e4f0b534';
    $pane = new stdClass();
    $pane->pid = 'new-d7aceaca-2bcc-465f-b93b-711c88904a49';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_page_views-data_tagline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd7aceaca-2bcc-465f-b93b-711c88904a49';
    $display->content['new-d7aceaca-2bcc-465f-b93b-711c88904a49'] = $pane;
    $display->panels['main'][1] = 'new-d7aceaca-2bcc-465f-b93b-711c88904a49';
    $pane = new stdClass();
    $pane->pid = 'new-7705bc1c-b27a-4815-b98e-51f69bcad5ae';
    $pane->panel = 'main';
    $pane->type = 'panels_mini';
    $pane->subtype = 'data_analytics_blocks';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7705bc1c-b27a-4815-b98e-51f69bcad5ae';
    $display->content['new-7705bc1c-b27a-4815-b98e-51f69bcad5ae'] = $pane;
    $display->panels['main'][2] = 'new-7705bc1c-b27a-4815-b98e-51f69bcad5ae';
    $pane = new stdClass();
    $pane->pid = 'new-0b867aa4-2d6e-4b83-b483-ee238e0bba2a';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '0b867aa4-2d6e-4b83-b483-ee238e0bba2a';
    $display->content['new-0b867aa4-2d6e-4b83-b483-ee238e0bba2a'] = $pane;
    $display->panels['title'][0] = 'new-0b867aa4-2d6e-4b83-b483-ee238e0bba2a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b867aa4-2d6e-4b83-b483-ee238e0bba2a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['data'] = $page;

  return $pages;

}
