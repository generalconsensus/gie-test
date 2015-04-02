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
  $display->uuid = '61dbe43a-75fe-43bc-a855-90bbfe646f07';
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
    $pane->pid = 'new-63e72540-78bd-4dac-a6eb-354aec4fd6f8';
    $pane->panel = 'preface';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63e72540-78bd-4dac-a6eb-354aec4fd6f8';
    $display->content['new-63e72540-78bd-4dac-a6eb-354aec4fd6f8'] = $pane;
    $display->panels['preface'][0] = 'new-63e72540-78bd-4dac-a6eb-354aec4fd6f8';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01482fcc-d253-42f5-aa89-57de3c999b7a';
    $display->content['new-01482fcc-d253-42f5-aa89-57de3c999b7a'] = $pane;
    $display->panels['sidebar'][0] = 'new-01482fcc-d253-42f5-aa89-57de3c999b7a';
    $pane = new stdClass();
    $pane->pid = 'new-171a054a-aef5-4390-9f9e-786024566fec';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-LV3NJGeZZgSbkNFdZp1TGkKju7XOcuO0';
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
    $pane->uuid = '171a054a-aef5-4390-9f9e-786024566fec';
    $display->content['new-171a054a-aef5-4390-9f9e-786024566fec'] = $pane;
    $display->panels['sidebar'][1] = 'new-171a054a-aef5-4390-9f9e-786024566fec';
    $pane = new stdClass();
    $pane->pid = 'new-fdececc0-0aff-4ce4-953b-cb1df38e1a6b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zFkuGflEJFcdl4oHaoXBL8WyJlZzvYm3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fdececc0-0aff-4ce4-953b-cb1df38e1a6b';
    $display->content['new-fdececc0-0aff-4ce4-953b-cb1df38e1a6b'] = $pane;
    $display->panels['sidebar'][2] = 'new-fdececc0-0aff-4ce4-953b-cb1df38e1a6b';
    $pane = new stdClass();
    $pane->pid = 'new-713fbdd3-d603-464a-84d9-7294ad9d27b5';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hrLcXR1sdJ2p7WQ2RWLpjuOPyuAgVnwv';
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
    $pane->uuid = '713fbdd3-d603-464a-84d9-7294ad9d27b5';
    $display->content['new-713fbdd3-d603-464a-84d9-7294ad9d27b5'] = $pane;
    $display->panels['sidebar'][3] = 'new-713fbdd3-d603-464a-84d9-7294ad9d27b5';
    $pane = new stdClass();
    $pane->pid = 'new-7314f46c-b216-48db-acb2-6a1814ba0fce';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-PcG2dvVTqp1uY6fcA8KAdTP2cPwseIaj';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Organization',
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
    $pane->uuid = '7314f46c-b216-48db-acb2-6a1814ba0fce';
    $display->content['new-7314f46c-b216-48db-acb2-6a1814ba0fce'] = $pane;
    $display->panels['sidebar'][4] = 'new-7314f46c-b216-48db-acb2-6a1814ba0fce';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
    $display->content['new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f'] = $pane;
    $display->panels['sidebar'][5] = 'new-19c26c2c-edab-42d3-8d6c-330cbbe8b14f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  return $pages;

}
