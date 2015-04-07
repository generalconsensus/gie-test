<?php
/**
 * @file
 * gie_organization.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_organization_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'organizations';
  $page->task = 'page';
  $page->admin_title = 'Organizations';
  $page->admin_description = 'Organizations listing page';
  $page->path = 'organizations';
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
  $handler->name = 'page_organizations__panel_context_9ace6400-d090-4a71-b7a4-ddb6c7935773';
  $handler->task = 'page';
  $handler->subtask = 'organizations';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Organizations',
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
  $display->layout = 'sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9efa1bf4-4fba-43c4-b5b0-42e6d3e944f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b0cfe70-b7f4-43ff-9d35-0ce835c58609';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_listing-org_listing';
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
    $pane->uuid = '7b0cfe70-b7f4-43ff-9d35-0ce835c58609';
    $display->content['new-7b0cfe70-b7f4-43ff-9d35-0ce835c58609'] = $pane;
    $display->panels['main'][0] = 'new-7b0cfe70-b7f4-43ff-9d35-0ce835c58609';
    $pane = new stdClass();
    $pane->pid = 'new-cdc4ae87-c5dd-4a1f-9c0a-2d5771d3c8da';
    $pane->panel = 'preface';
    $pane->type = 'pane';
    $pane->subtype = 'organizations_introduction';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cdc4ae87-c5dd-4a1f-9c0a-2d5771d3c8da';
    $display->content['new-cdc4ae87-c5dd-4a1f-9c0a-2d5771d3c8da'] = $pane;
    $display->panels['preface'][0] = 'new-cdc4ae87-c5dd-4a1f-9c0a-2d5771d3c8da';
    $pane = new stdClass();
    $pane->pid = 'new-7abc168b-9a5f-4217-b799-2c999f6f86f1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sectors',
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
    $pane->uuid = '7abc168b-9a5f-4217-b799-2c999f6f86f1';
    $display->content['new-7abc168b-9a5f-4217-b799-2c999f6f86f1'] = $pane;
    $display->panels['sidebar'][0] = 'new-7abc168b-9a5f-4217-b799-2c999f6f86f1';
    $pane = new stdClass();
    $pane->pid = 'new-6b81d250-1cf6-4497-af22-a292c7b2ecaf';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Regions',
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
    $pane->uuid = '6b81d250-1cf6-4497-af22-a292c7b2ecaf';
    $display->content['new-6b81d250-1cf6-4497-af22-a292c7b2ecaf'] = $pane;
    $display->panels['sidebar'][1] = 'new-6b81d250-1cf6-4497-af22-a292c7b2ecaf';
    $pane = new stdClass();
    $pane->pid = 'new-7551e06a-8e6e-4348-b14e-b6923ff5cc79';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Rlds3Jh70LgzU8nlQV9wQyf1Nzi83k9g';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Country',
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
    $pane->uuid = '7551e06a-8e6e-4348-b14e-b6923ff5cc79';
    $display->content['new-7551e06a-8e6e-4348-b14e-b6923ff5cc79'] = $pane;
    $display->panels['sidebar'][2] = 'new-7551e06a-8e6e-4348-b14e-b6923ff5cc79';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['organizations'] = $page;

  return $pages;

}
