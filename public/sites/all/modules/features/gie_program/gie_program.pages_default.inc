<?php
/**
 * @file
 * gie_program.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_program_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'programs';
  $page->task = 'page';
  $page->admin_title = 'Programs';
  $page->admin_description = 'Organizations listing page';
  $page->path = 'programs';
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
  $handler->name = 'page_programs__panel_context_fa9f3a0d-cf6a-4e65-8224-800c0d2c952e';
  $handler->task = 'page';
  $handler->subtask = 'programs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Programs',
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
  $display->uuid = '9efa1bf4-4fba-43c4-b5b0-42e6d3e944f2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_programs__panel_context_fa9f3a0d-cf6a-4e65-8224-800c0d2c952e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-94b779cf-e5d1-4b3a-bb72-e26fbcde0deb';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'program_listing-program_listing';
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
  $pane->uuid = '94b779cf-e5d1-4b3a-bb72-e26fbcde0deb';
  $display->content['new-94b779cf-e5d1-4b3a-bb72-e26fbcde0deb'] = $pane;
  $display->panels['main'][0] = 'new-94b779cf-e5d1-4b3a-bb72-e26fbcde0deb';
  $pane = new stdClass();
  $pane->pid = 'new-6d9718a6-e60d-4afe-91b7-976c0b0203e8';
  $pane->panel = 'sidebar';
  $pane->type = 'pane';
  $pane->subtype = 'facet_pane';
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
  $pane->uuid = '6d9718a6-e60d-4afe-91b7-976c0b0203e8';
  $display->content['new-6d9718a6-e60d-4afe-91b7-976c0b0203e8'] = $pane;
  $display->panels['sidebar'][0] = 'new-6d9718a6-e60d-4afe-91b7-976c0b0203e8';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7abc168b-9a5f-4217-b799-2c999f6f86f1';
  $display->content['new-7abc168b-9a5f-4217-b799-2c999f6f86f1'] = $pane;
  $display->panels['sidebar'][1] = 'new-7abc168b-9a5f-4217-b799-2c999f6f86f1';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6b81d250-1cf6-4497-af22-a292c7b2ecaf';
  $display->content['new-6b81d250-1cf6-4497-af22-a292c7b2ecaf'] = $pane;
  $display->panels['sidebar'][2] = 'new-6b81d250-1cf6-4497-af22-a292c7b2ecaf';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7551e06a-8e6e-4348-b14e-b6923ff5cc79';
  $display->content['new-7551e06a-8e6e-4348-b14e-b6923ff5cc79'] = $pane;
  $display->panels['sidebar'][3] = 'new-7551e06a-8e6e-4348-b14e-b6923ff5cc79';
  $pane = new stdClass();
  $pane->pid = 'new-0e371f80-031d-4e12-8cae-6ebde23edc48';
  $pane->panel = 'title';
  $pane->type = 'pane';
  $pane->subtype = 'programs_introduction';
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
  $pane->uuid = '0e371f80-031d-4e12-8cae-6ebde23edc48';
  $display->content['new-0e371f80-031d-4e12-8cae-6ebde23edc48'] = $pane;
  $display->panels['title'][0] = 'new-0e371f80-031d-4e12-8cae-6ebde23edc48';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['programs'] = $page;

  return $pages;

}
