<?php
/**
 * @file
 * gie_resource.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_resource_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources';
  $page->task = 'page';
  $page->admin_title = 'Resources';
  $page->admin_description = 'Resources Landing Page';
  $page->path = 'resources';
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
  $handler->name = 'page_resources__panel_context_d5413bea-0c09-476d-89c1-94e97a8bc017';
  $handler->task = 'page';
  $handler->subtask = 'resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Resources',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_resources__panel_context_d5413bea-0c09-476d-89c1-94e97a8bc017';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-353a5f90-f788-45d5-8f5e-4ad59c244cc7';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'resources_listing-resource_listing';
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
  $pane->uuid = '353a5f90-f788-45d5-8f5e-4ad59c244cc7';
  $display->content['new-353a5f90-f788-45d5-8f5e-4ad59c244cc7'] = $pane;
  $display->panels['main'][0] = 'new-353a5f90-f788-45d5-8f5e-4ad59c244cc7';
  $pane = new stdClass();
  $pane->pid = 'new-23ca896b-e3e4-4094-874a-de4e79fad67d';
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
  $pane->uuid = '23ca896b-e3e4-4094-874a-de4e79fad67d';
  $display->content['new-23ca896b-e3e4-4094-874a-de4e79fad67d'] = $pane;
  $display->panels['sidebar'][0] = 'new-23ca896b-e3e4-4094-874a-de4e79fad67d';
  $pane = new stdClass();
  $pane->pid = 'new-01482fcc-d253-42f5-aa89-57de3c999b7a';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-Xd1mTF7YIZOPK4W519miI6mOECakr1Zo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Type',
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
  $pane->uuid = '01482fcc-d253-42f5-aa89-57de3c999b7a';
  $display->content['new-01482fcc-d253-42f5-aa89-57de3c999b7a'] = $pane;
  $display->panels['sidebar'][1] = 'new-01482fcc-d253-42f5-aa89-57de3c999b7a';
  $pane = new stdClass();
  $pane->pid = 'new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
  $display->content['new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790'] = $pane;
  $display->panels['sidebar'][2] = 'new-9a8dd6a9-15e3-45f0-9b52-f53a6618f790';
  $pane = new stdClass();
  $pane->pid = 'new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
  $display->content['new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2'] = $pane;
  $display->panels['sidebar'][3] = 'new-ed2f3642-990d-4f6d-a82c-c1d4762f3cf2';
  $pane = new stdClass();
  $pane->pid = 'new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-OW2xuL11GfSOR8Lt2V2k1VJlbtJrQZWK';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Program',
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
  $pane->uuid = '19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
  $display->content['new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f'] = $pane;
  $display->panels['sidebar'][4] = 'new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
  $pane = new stdClass();
  $pane->pid = 'new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
  $display->content['new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9'] = $pane;
  $display->panels['sidebar'][5] = 'new-ca6a2666-e6ae-489d-a2ff-c6baf1d75ce9';
  $pane = new stdClass();
  $pane->pid = 'new-bc2720c5-a09e-4775-a9d3-425ad79d404d';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'bc2720c5-a09e-4775-a9d3-425ad79d404d';
  $display->content['new-bc2720c5-a09e-4775-a9d3-425ad79d404d'] = $pane;
  $display->panels['sidebar'][6] = 'new-bc2720c5-a09e-4775-a9d3-425ad79d404d';
  $pane = new stdClass();
  $pane->pid = 'new-9cec5539-0d17-436d-8713-7659726311e0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PcG2dvVTqp1uY6fcA8KAdTP2cPwseIaj';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Organizations',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9cec5539-0d17-436d-8713-7659726311e0';
  $display->content['new-9cec5539-0d17-436d-8713-7659726311e0'] = $pane;
  $display->panels['sidebar'][7] = 'new-9cec5539-0d17-436d-8713-7659726311e0';
  $pane = new stdClass();
  $pane->pid = 'new-63e72540-78bd-4dac-a6eb-354aec4fd6f8';
  $pane->panel = 'title';
  $pane->type = 'pane';
  $pane->subtype = 'resources_introduction';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane pane--landing-intro',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '63e72540-78bd-4dac-a6eb-354aec4fd6f8';
  $display->content['new-63e72540-78bd-4dac-a6eb-354aec4fd6f8'] = $pane;
  $display->panels['title'][0] = 'new-63e72540-78bd-4dac-a6eb-354aec4fd6f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  return $pages;

}
