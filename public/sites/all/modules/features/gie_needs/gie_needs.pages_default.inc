<?php
/**
 * @file
 * gie_needs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_needs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'indemand_landing_page';
  $page->task = 'page';
  $page->admin_title = 'InDemand Landing Page';
  $page->admin_description = 'This is the landing page for Indemand';
  $page->path = 'wanteds';
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
  $handler->name = 'page_indemand_landing_page__panel_context_57516ba2-8e6c-47e2-8e7d-7695e927dea7';
  $handler->task = 'page';
  $handler->subtask = 'indemand_landing_page';
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
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
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
  $display->title = 'Exchange InDemand';
  $display->uuid = '2405cb67-b1de-494d-8a77-dd5f0208e449';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8418d2e7-1a12-4bdc-ad30-78197f048ae5';
    $pane->panel = 'main';
    $pane->type = 'pane';
    $pane->subtype = 'indemand_intro';
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
    $pane->uuid = '8418d2e7-1a12-4bdc-ad30-78197f048ae5';
    $display->content['new-8418d2e7-1a12-4bdc-ad30-78197f048ae5'] = $pane;
    $display->panels['main'][0] = 'new-8418d2e7-1a12-4bdc-ad30-78197f048ae5';
    $pane = new stdClass();
    $pane->pid = 'new-e78e1e05-45c0-4c83-9204-2be8ccd0cf60';
    $pane->panel = 'main';
    $pane->type = 'pane';
    $pane->subtype = 'indemand_landing';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e78e1e05-45c0-4c83-9204-2be8ccd0cf60';
    $display->content['new-e78e1e05-45c0-4c83-9204-2be8ccd0cf60'] = $pane;
    $display->panels['main'][1] = 'new-e78e1e05-45c0-4c83-9204-2be8ccd0cf60';
    $pane = new stdClass();
    $pane->pid = 'new-84efb7e5-bfc3-4353-aa8a-3f2d29a0f265';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'wanteds_introduction';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--landing-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84efb7e5-bfc3-4353-aa8a-3f2d29a0f265';
    $display->content['new-84efb7e5-bfc3-4353-aa8a-3f2d29a0f265'] = $pane;
    $display->panels['title'][0] = 'new-84efb7e5-bfc3-4353-aa8a-3f2d29a0f265';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['indemand_landing_page'] = $page;

  return $pages;

}
