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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sectors';
  $display->uuid = '9228e1b3-5f9d-4887-8f3b-c0554af28c23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b20ee272-a4b9-4458-93b1-e006457c3764';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-b20ee272-a4b9-4458-93b1-e006457c3764';
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Topics';
  $display->uuid = 'a3f1458b-e912-43f5-bde6-986170b48556';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
    $pane->panel = 'middle';
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
    $display->panels['middle'][0] = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-037677d9-901f-411f-9d7e-14ff49c995b7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['topics'] = $page;

  return $pages;

}
