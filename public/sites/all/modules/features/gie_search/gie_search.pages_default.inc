<?php
/**
 * @file
 * gie_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gie_search_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_solr_search__solr_search';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'solr_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Solr search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'solr_search',
  );
  $display = new panels_display();
  $display->layout = 'sidebar_left';
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
  $display->title = 'Search';
  $display->uuid = '81989513-2050-402c-858d-291581ae2a20';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b51b79b9-cbe7-4db6-8614-aa8133603419';
    $pane->panel = 'main';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'solr_search',
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
    $pane->uuid = 'b51b79b9-cbe7-4db6-8614-aa8133603419';
    $display->content['new-b51b79b9-cbe7-4db6-8614-aa8133603419'] = $pane;
    $display->panels['main'][0] = 'new-b51b79b9-cbe7-4db6-8614-aa8133603419';
    $pane = new stdClass();
    $pane->pid = 'new-aeea9f19-5499-43e6-bdd9-9e2326873767';
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
    $pane->uuid = 'aeea9f19-5499-43e6-bdd9-9e2326873767';
    $display->content['new-aeea9f19-5499-43e6-bdd9-9e2326873767'] = $pane;
    $display->panels['sidebar'][0] = 'new-aeea9f19-5499-43e6-bdd9-9e2326873767';
    $pane = new stdClass();
    $pane->pid = 'new-7ad7b488-87ba-40fa-b4e8-7425522c4b3d';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-L7Jxehy0zhhjy6DBme1vI0ETX1fvjpsC';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type of Content',
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
    $pane->uuid = '7ad7b488-87ba-40fa-b4e8-7425522c4b3d';
    $display->content['new-7ad7b488-87ba-40fa-b4e8-7425522c4b3d'] = $pane;
    $display->panels['sidebar'][1] = 'new-7ad7b488-87ba-40fa-b4e8-7425522c4b3d';
    $pane = new stdClass();
    $pane->pid = 'new-8f8768fd-562f-452d-b0cd-42304c361c55';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-0KqijyxaUIbnm8GmIZbUAc8Q4KaQ6ZjR';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topic',
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
    $pane->uuid = '8f8768fd-562f-452d-b0cd-42304c361c55';
    $display->content['new-8f8768fd-562f-452d-b0cd-42304c361c55'] = $pane;
    $display->panels['sidebar'][2] = 'new-8f8768fd-562f-452d-b0cd-42304c361c55';
    $pane = new stdClass();
    $pane->pid = 'new-5200e9a4-d2a9-459d-a03f-f1d3e857d2f8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-RtKS0KR96hmY09DiScbpq9GhUvCxegom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sector',
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
    $pane->uuid = '5200e9a4-d2a9-459d-a03f-f1d3e857d2f8';
    $display->content['new-5200e9a4-d2a9-459d-a03f-f1d3e857d2f8'] = $pane;
    $display->panels['sidebar'][3] = 'new-5200e9a4-d2a9-459d-a03f-f1d3e857d2f8';
    $pane = new stdClass();
    $pane->pid = 'new-3ff54d18-8ade-40c5-9f2f-f7e2724008f9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-s8Djc5hBKrGsa0EGjWCz4fJ1rz4PjtoJ';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3ff54d18-8ade-40c5-9f2f-f7e2724008f9';
    $display->content['new-3ff54d18-8ade-40c5-9f2f-f7e2724008f9'] = $pane;
    $display->panels['sidebar'][4] = 'new-3ff54d18-8ade-40c5-9f2f-f7e2724008f9';
    $pane = new stdClass();
    $pane->pid = 'new-ad21019e-a401-4ea9-84f4-ac06b0217ea1';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-fT4bb3u7AsTJYUYQoZGyZsx2zmm6HZre';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ad21019e-a401-4ea9-84f4-ac06b0217ea1';
    $display->content['new-ad21019e-a401-4ea9-84f4-ac06b0217ea1'] = $pane;
    $display->panels['sidebar'][5] = 'new-ad21019e-a401-4ea9-84f4-ac06b0217ea1';
    $pane = new stdClass();
    $pane->pid = 'new-0eed2689-09a0-47a2-96de-c1af105b8e73';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-L7Jxehy0zhhjy6DBme1vI0ETX1fvjpsC';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type of Content',
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
    $pane->uuid = '0eed2689-09a0-47a2-96de-c1af105b8e73';
    $display->content['new-0eed2689-09a0-47a2-96de-c1af105b8e73'] = $pane;
    $display->panels['sidebar'][5] = 'new-0eed2689-09a0-47a2-96de-c1af105b8e73';
    $pane = new stdClass();
    $pane->pid = 'new-6d1a33a8-d28a-47b3-b84b-29a8e26e9926';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
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
    $pane->uuid = '6d1a33a8-d28a-47b3-b84b-29a8e26e9926';
    $display->content['new-6d1a33a8-d28a-47b3-b84b-29a8e26e9926'] = $pane;
    $display->panels['title'][0] = 'new-6d1a33a8-d28a-47b3-b84b-29a8e26e9926';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b51b79b9-cbe7-4db6-8614-aa8133603419';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_solr_search__solr_search'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node__solr_search';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Solr search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'solr_search',
  );
  $display = new panels_display();
  $display->layout = 'sidebar_left';
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
  $display->title = 'Search';
  $display->uuid = '41c51e95-c9db-4017-a053-93b5e9ca76e7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-766865bd-b1a4-44be-b284-ba5749344ab1';
    $pane->panel = 'main';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 0,
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
    $pane->uuid = '766865bd-b1a4-44be-b284-ba5749344ab1';
    $display->content['new-766865bd-b1a4-44be-b284-ba5749344ab1'] = $pane;
    $display->panels['main'][0] = 'new-766865bd-b1a4-44be-b284-ba5749344ab1';
    $pane = new stdClass();
    $pane->pid = 'new-2791b6ef-6ecb-4999-b52f-858a8fbea462';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'search_api_page-node_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->uuid = '2791b6ef-6ecb-4999-b52f-858a8fbea462';
    $display->content['new-2791b6ef-6ecb-4999-b52f-858a8fbea462'] = $pane;
    $display->panels['sidebar'][0] = 'new-2791b6ef-6ecb-4999-b52f-858a8fbea462';
    $pane = new stdClass();
    $pane->pid = 'new-22ceefd1-8152-4c43-ae8c-ba94978c54c6';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
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
    $pane->uuid = '22ceefd1-8152-4c43-ae8c-ba94978c54c6';
    $display->content['new-22ceefd1-8152-4c43-ae8c-ba94978c54c6'] = $pane;
    $display->panels['title'][0] = 'new-22ceefd1-8152-4c43-ae8c-ba94978c54c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-766865bd-b1a4-44be-b284-ba5749344ab1';
  $handler->conf['display'] = $display;
  $export['search_node__solr_search'] = $handler;

  return $export;
}
