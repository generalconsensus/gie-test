<?php
/**
 * @file
 * gie_general.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_general_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_homepage__panel_context_873f69de-06a6-4c4b-b4ce-cb480cd64d9a';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fe24f77a-a769-418b-8645-378830deaf27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'homepage_views-personas_pane';
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
    $pane->uuid = 'ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
    $display->content['new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c'] = $pane;
    $display->panels['middle'][0] = 'new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
    $pane = new stdClass();
    $pane->pid = 'new-dfaebac8-8ecd-42ec-90a5-d1433717aecb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'homepage_views-action_card_panes';
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
    $pane->uuid = 'dfaebac8-8ecd-42ec-90a5-d1433717aecb';
    $display->content['new-dfaebac8-8ecd-42ec-90a5-d1433717aecb'] = $pane;
    $display->panels['middle'][1] = 'new-dfaebac8-8ecd-42ec-90a5-d1433717aecb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
