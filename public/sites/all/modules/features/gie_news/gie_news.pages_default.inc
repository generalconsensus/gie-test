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
    $pane->pid = 'new-17bce696-4fd4-4ae9-8e1f-0a232f8d1959';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-gHkdmYhaItuhzZrqoGGST46RbtRgLL4T';
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
    $pane->uuid = '17bce696-4fd4-4ae9-8e1f-0a232f8d1959';
    $display->content['new-17bce696-4fd4-4ae9-8e1f-0a232f8d1959'] = $pane;
    $display->panels['sidebar'][1] = 'new-17bce696-4fd4-4ae9-8e1f-0a232f8d1959';
    $pane = new stdClass();
    $pane->pid = 'new-67dea124-b501-4510-9eda-51d81cfa83df';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-dJBTxBF5vSVoIqzjwK0lRhzmIaBkvgx2';
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
    $pane->uuid = '67dea124-b501-4510-9eda-51d81cfa83df';
    $display->content['new-67dea124-b501-4510-9eda-51d81cfa83df'] = $pane;
    $display->panels['sidebar'][2] = 'new-67dea124-b501-4510-9eda-51d81cfa83df';
    $pane = new stdClass();
    $pane->pid = 'new-7443a65c-3cca-4e2a-9387-4fae06d32d92';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-TJ7bKGXTh0nh1FjTzQ4de0KZuVKvuBB5';
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
    $pane->uuid = '7443a65c-3cca-4e2a-9387-4fae06d32d92';
    $display->content['new-7443a65c-3cca-4e2a-9387-4fae06d32d92'] = $pane;
    $display->panels['sidebar'][3] = 'new-7443a65c-3cca-4e2a-9387-4fae06d32d92';
    $pane = new stdClass();
    $pane->pid = 'new-c9932d77-5a66-4a12-a9bd-34a869eae2e7';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DDn5dmCq3uaekkwUkK91b59tjTOVXSiD';
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
    $pane->uuid = 'c9932d77-5a66-4a12-a9bd-34a869eae2e7';
    $display->content['new-c9932d77-5a66-4a12-a9bd-34a869eae2e7'] = $pane;
    $display->panels['sidebar'][4] = 'new-c9932d77-5a66-4a12-a9bd-34a869eae2e7';
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
