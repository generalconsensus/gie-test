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
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Locations';
  $display->uuid = 'e3d0e9d8-243d-4b17-9cb3-03dd04761c85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f456092d-5673-48d3-90f6-7307e15fa933';
    $pane->panel = 'main';
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
    $pane->uuid = 'f456092d-5673-48d3-90f6-7307e15fa933';
    $display->content['new-f456092d-5673-48d3-90f6-7307e15fa933'] = $pane;
    $display->panels['main'][0] = 'new-f456092d-5673-48d3-90f6-7307e15fa933';
    $pane = new stdClass();
    $pane->pid = 'new-d5946e7a-b8cd-453d-bc6a-4aa8b5e71c45';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'locations_introduction';
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
    $pane->uuid = 'd5946e7a-b8cd-453d-bc6a-4aa8b5e71c45';
    $display->content['new-d5946e7a-b8cd-453d-bc6a-4aa8b5e71c45'] = $pane;
    $display->panels['title'][0] = 'new-d5946e7a-b8cd-453d-bc6a-4aa8b5e71c45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['region'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sectors';
  $page->task = 'page';
  $page->admin_title = 'Sectors';
  $page->admin_description = 'Sectors listing page panel.';
  $page->path = 'sectors';
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
  $handler->name = 'page_sectors__panel_context_97435ef7-f45d-4b6f-a561-b9572fc75db0';
  $handler->task = 'page';
  $handler->subtask = 'sectors';
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
      'middle' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sectors';
  $display->uuid = '9228e1b3-5f9d-4887-8f3b-c0554af28c23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b20ee272-a4b9-4458-93b1-e006457c3764';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'sector_listing-sectors_pane';
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
    $pane->uuid = 'b20ee272-a4b9-4458-93b1-e006457c3764';
    $display->content['new-b20ee272-a4b9-4458-93b1-e006457c3764'] = $pane;
    $display->panels['main'][0] = 'new-b20ee272-a4b9-4458-93b1-e006457c3764';
    $pane = new stdClass();
    $pane->pid = 'new-4feb4cd2-88e7-42dc-b581-11987c665969';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'sectors_introduction';
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
    $pane->uuid = '4feb4cd2-88e7-42dc-b581-11987c665969';
    $display->content['new-4feb4cd2-88e7-42dc-b581-11987c665969'] = $pane;
    $display->panels['title'][0] = 'new-4feb4cd2-88e7-42dc-b581-11987c665969';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b20ee272-a4b9-4458-93b1-e006457c3764';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sectors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'topics';
  $page->task = 'page';
  $page->admin_title = 'Topics';
  $page->admin_description = 'Topics listing page';
  $page->path = 'topics';
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
  $handler->name = 'page_topics__panel_context_9d4357f3-fb8b-4284-912a-8b3b52a2de09';
  $handler->task = 'page';
  $handler->subtask = 'topics';
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
      'middle' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Topics';
  $display->uuid = 'a3f1458b-e912-43f5-bde6-986170b48556';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'topics_listing-topics_pane';
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
    $pane->uuid = '037677d9-901f-411f-9d7e-14ff49c995b7';
    $display->content['new-037677d9-901f-411f-9d7e-14ff49c995b7'] = $pane;
    $display->panels['main'][0] = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
    $pane = new stdClass();
    $pane->pid = 'new-3641b2be-5b9f-4702-8909-66ca18309d11';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'topics_introduction';
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
    $pane->uuid = '3641b2be-5b9f-4702-8909-66ca18309d11';
    $display->content['new-3641b2be-5b9f-4702-8909-66ca18309d11'] = $pane;
    $display->panels['title'][0] = 'new-3641b2be-5b9f-4702-8909-66ca18309d11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['topics'] = $page;

  return $pages;

}
