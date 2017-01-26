<?php
/**
 * @file
 * gie_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = 'News Landing Page';
  $page->path = 'news';
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
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
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
  $display->title = '';
  $display->uuid = '4da8d8af-6052-4bcf-9532-e5c635fc5e9d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8f12fd49-b5aa-4d17-885c-96eb54011bb1';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'news_listing-resource_listing';
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
  $pane->uuid = '8f12fd49-b5aa-4d17-885c-96eb54011bb1';
  $display->content['new-8f12fd49-b5aa-4d17-885c-96eb54011bb1'] = $pane;
  $display->panels['main'][0] = 'new-8f12fd49-b5aa-4d17-885c-96eb54011bb1';
  $pane = new stdClass();
  $pane->pid = 'new-c1c96192-cde3-4969-8e1c-9c90e0a5d11d';
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
  $pane->uuid = 'c1c96192-cde3-4969-8e1c-9c90e0a5d11d';
  $display->content['new-c1c96192-cde3-4969-8e1c-9c90e0a5d11d'] = $pane;
  $display->panels['sidebar'][0] = 'new-c1c96192-cde3-4969-8e1c-9c90e0a5d11d';
  $pane = new stdClass();
  $pane->pid = 'new-34d24527-9dae-4f2c-a192-13ea15822020';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Region',
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
  $pane->uuid = '34d24527-9dae-4f2c-a192-13ea15822020';
  $display->content['new-34d24527-9dae-4f2c-a192-13ea15822020'] = $pane;
  $display->panels['sidebar'][1] = 'new-34d24527-9dae-4f2c-a192-13ea15822020';
  $pane = new stdClass();
  $pane->pid = 'new-ae9cca2a-c5d6-40df-b746-1884065b03cb';
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
  $pane->uuid = 'ae9cca2a-c5d6-40df-b746-1884065b03cb';
  $display->content['new-ae9cca2a-c5d6-40df-b746-1884065b03cb'] = $pane;
  $display->panels['sidebar'][2] = 'new-ae9cca2a-c5d6-40df-b746-1884065b03cb';
  $pane = new stdClass();
  $pane->pid = 'new-ef20b5ec-180a-45a5-a80a-64795ef22862';
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
  $pane->uuid = 'ef20b5ec-180a-45a5-a80a-64795ef22862';
  $display->content['new-ef20b5ec-180a-45a5-a80a-64795ef22862'] = $pane;
  $display->panels['sidebar'][3] = 'new-ef20b5ec-180a-45a5-a80a-64795ef22862';
  $pane = new stdClass();
  $pane->pid = 'new-435f42a5-4409-4022-8c41-4a581b0fc832';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '435f42a5-4409-4022-8c41-4a581b0fc832';
  $display->content['new-435f42a5-4409-4022-8c41-4a581b0fc832'] = $pane;
  $display->panels['sidebar'][4] = 'new-435f42a5-4409-4022-8c41-4a581b0fc832';
  $pane = new stdClass();
  $pane->pid = 'new-8e9411f0-7a37-48f6-8dae-b533c80966f5';
  $pane->panel = 'title';
  $pane->type = 'pane';
  $pane->subtype = 'news_introductions';
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
  $pane->uuid = '8e9411f0-7a37-48f6-8dae-b533c80966f5';
  $display->content['new-8e9411f0-7a37-48f6-8dae-b533c80966f5'] = $pane;
  $display->panels['title'][0] = 'new-8e9411f0-7a37-48f6-8dae-b533c80966f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8e9411f0-7a37-48f6-8dae-b533c80966f5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
