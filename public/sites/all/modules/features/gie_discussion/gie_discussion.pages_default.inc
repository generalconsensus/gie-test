<?php
/**
 * @file
 * gie_discussion.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_discussion_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discussions';
  $page->task = 'page';
  $page->admin_title = 'Discussions';
  $page->admin_description = '';
  $page->path = 'discussions';
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
  $handler->name = 'page_discussions__panel_context_c47f659e-ab9f-4971-a601-34ab50632f24';
  $handler->task = 'page';
  $handler->subtask = 'discussions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Discussions',
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
    ),
  );
  $display->cache = array();
  $display->title = 'Discussions';
  $display->uuid = 'd828a0cd-b026-410c-ac1e-5999c450063b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions__panel_context_c47f659e-ab9f-4971-a601-34ab50632f24';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9bba837-2b22-482e-a53e-e60560fb2076';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'discussion_listing-discussion_listing';
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
  $pane->uuid = 'f9bba837-2b22-482e-a53e-e60560fb2076';
  $display->content['new-f9bba837-2b22-482e-a53e-e60560fb2076'] = $pane;
  $display->panels['main'][0] = 'new-f9bba837-2b22-482e-a53e-e60560fb2076';
  $pane = new stdClass();
  $pane->pid = 'new-717d13f0-d1d4-41a4-a059-85e2cd8f3ce0';
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
  $pane->uuid = '717d13f0-d1d4-41a4-a059-85e2cd8f3ce0';
  $display->content['new-717d13f0-d1d4-41a4-a059-85e2cd8f3ce0'] = $pane;
  $display->panels['sidebar'][0] = 'new-717d13f0-d1d4-41a4-a059-85e2cd8f3ce0';
  $pane = new stdClass();
  $pane->pid = 'new-6e001ec4-3d47-4fb1-996f-bf1fcd14407c';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-bCPjY27nCxBH4nkThoEY1wSC0gxiyVjh';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Topics',
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
  $pane->uuid = '6e001ec4-3d47-4fb1-996f-bf1fcd14407c';
  $display->content['new-6e001ec4-3d47-4fb1-996f-bf1fcd14407c'] = $pane;
  $display->panels['sidebar'][1] = 'new-6e001ec4-3d47-4fb1-996f-bf1fcd14407c';
  $pane = new stdClass();
  $pane->pid = 'new-af63858c-2a1c-49d7-af74-af857b2007d0';
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
  $pane->uuid = 'af63858c-2a1c-49d7-af74-af857b2007d0';
  $display->content['new-af63858c-2a1c-49d7-af74-af857b2007d0'] = $pane;
  $display->panels['sidebar'][2] = 'new-af63858c-2a1c-49d7-af74-af857b2007d0';
  $pane = new stdClass();
  $pane->pid = 'new-fab82c8e-0124-4c63-8378-2c6e8a874e33';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fab82c8e-0124-4c63-8378-2c6e8a874e33';
  $display->content['new-fab82c8e-0124-4c63-8378-2c6e8a874e33'] = $pane;
  $display->panels['sidebar'][3] = 'new-fab82c8e-0124-4c63-8378-2c6e8a874e33';
  $pane = new stdClass();
  $pane->pid = 'new-23299490-96ae-4cef-b5b9-3ee1bd7172a6';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-upHUFstt3Qanz3saZam1xQq09XUZnoRn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Programs',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '23299490-96ae-4cef-b5b9-3ee1bd7172a6';
  $display->content['new-23299490-96ae-4cef-b5b9-3ee1bd7172a6'] = $pane;
  $display->panels['sidebar'][4] = 'new-23299490-96ae-4cef-b5b9-3ee1bd7172a6';
  $pane = new stdClass();
  $pane->pid = 'new-64181d77-da74-4ab4-a865-ec852ad4883b';
  $pane->panel = 'title';
  $pane->type = 'pane';
  $pane->subtype = 'discussions_introduction';
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
  $pane->uuid = '64181d77-da74-4ab4-a865-ec852ad4883b';
  $display->content['new-64181d77-da74-4ab4-a865-ec852ad4883b'] = $pane;
  $display->panels['title'][0] = 'new-64181d77-da74-4ab4-a865-ec852ad4883b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9bba837-2b22-482e-a53e-e60560fb2076';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discussions'] = $page;

  return $pages;

}
