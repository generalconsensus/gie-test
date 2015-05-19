<?php
/**
 * @file
 * events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = 'Events Landing Page';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_4e49f5e3-4b49-44b8-b927-e48f77b9c66d';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events',
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
      'sidebar' => NULL,
      'main' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '61dbe43a-75fe-43bc-a855-90bbfe646f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f051a61e-8fec-4c84-a0ec-681d19d44a49';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_listing-funding_listing';
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
    $pane->uuid = 'f051a61e-8fec-4c84-a0ec-681d19d44a49';
    $display->content['new-f051a61e-8fec-4c84-a0ec-681d19d44a49'] = $pane;
    $display->panels['main'][0] = 'new-f051a61e-8fec-4c84-a0ec-681d19d44a49';
    $pane = new stdClass();
    $pane->pid = 'new-f8f0332f-5f2c-4e82-bbc9-5813aabbad55';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-7agkrpJSmLA0AUAWiFyPTn51dEa0Tgfv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related Regions',
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
    $pane->uuid = 'f8f0332f-5f2c-4e82-bbc9-5813aabbad55';
    $display->content['new-f8f0332f-5f2c-4e82-bbc9-5813aabbad55'] = $pane;
    $display->panels['sidebar'][0] = 'new-f8f0332f-5f2c-4e82-bbc9-5813aabbad55';
    $pane = new stdClass();
    $pane->pid = 'new-59524a33-3f51-4868-8054-99668dc4626a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-eathVF1ycdCqo6DtNNcwpLPKM1d7Ho1H';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related Countries',
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
    $pane->uuid = '59524a33-3f51-4868-8054-99668dc4626a';
    $display->content['new-59524a33-3f51-4868-8054-99668dc4626a'] = $pane;
    $display->panels['sidebar'][1] = 'new-59524a33-3f51-4868-8054-99668dc4626a';
    $pane = new stdClass();
    $pane->pid = 'new-c75786a1-f582-4331-9b08-71f49cc91d93';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-V4QSx81ur2rH1Aaplmf5D4qMXgM7csu4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Related Sectors',
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
    $pane->uuid = 'c75786a1-f582-4331-9b08-71f49cc91d93';
    $display->content['new-c75786a1-f582-4331-9b08-71f49cc91d93'] = $pane;
    $display->panels['sidebar'][2] = 'new-c75786a1-f582-4331-9b08-71f49cc91d93';
    $pane = new stdClass();
    $pane->pid = 'new-09b9e23c-a945-402b-af15-e74aa944a491';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'events_introduction';
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
      'css_class' => 'pane pane--landing-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '09b9e23c-a945-402b-af15-e74aa944a491';
    $display->content['new-09b9e23c-a945-402b-af15-e74aa944a491'] = $pane;
    $display->panels['title'][0] = 'new-09b9e23c-a945-402b-af15-e74aa944a491';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
