<?php
/**
 * @file
 * gie_resource.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_resource_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:resource:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'resource';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8f5aed25-45bf-4e8f-b2f8-71c06e4061af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-378a7862-9433-4d94-959b-7516be01fdb8';
    $pane->panel = 'main';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '378a7862-9433-4d94-959b-7516be01fdb8';
    $display->content['new-378a7862-9433-4d94-959b-7516be01fdb8'] = $pane;
    $display->panels['main'][0] = 'new-378a7862-9433-4d94-959b-7516be01fdb8';
    $pane = new stdClass();
    $pane->pid = 'new-43d05cb5-1838-4796-9a66-1218bf202f4a';
    $pane->panel = 'main';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43d05cb5-1838-4796-9a66-1218bf202f4a';
    $display->content['new-43d05cb5-1838-4796-9a66-1218bf202f4a'] = $pane;
    $display->panels['main'][1] = 'new-43d05cb5-1838-4796-9a66-1218bf202f4a';
    $pane = new stdClass();
    $pane->pid = 'new-19840ee3-2761-402f-bdfc-14e8cd0a00ea';
    $pane->panel = 'sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This Resource? <p>Add it to your favorites.</p>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--favorite-this',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '19840ee3-2761-402f-bdfc-14e8cd0a00ea';
    $display->content['new-19840ee3-2761-402f-bdfc-14e8cd0a00ea'] = $pane;
    $display->panels['sidebar'][0] = 'new-19840ee3-2761-402f-bdfc-14e8cd0a00ea';
    $pane = new stdClass();
    $pane->pid = 'new-36c0ee76-c6ae-4155-9833-97e3c7e49439';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'at_a_glance',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'At a Glance',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36c0ee76-c6ae-4155-9833-97e3c7e49439';
    $display->content['new-36c0ee76-c6ae-4155-9833-97e3c7e49439'] = $pane;
    $display->panels['sidebar'][1] = 'new-36c0ee76-c6ae-4155-9833-97e3c7e49439';
    $pane = new stdClass();
    $pane->pid = 'new-75e583b9-94c1-41f0-ad16-da91fcfa40ba';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'details',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Details',
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
    $pane->uuid = '75e583b9-94c1-41f0-ad16-da91fcfa40ba';
    $display->content['new-75e583b9-94c1-41f0-ad16-da91fcfa40ba'] = $pane;
    $display->panels['sidebar'][2] = 'new-75e583b9-94c1-41f0-ad16-da91fcfa40ba';
    $pane = new stdClass();
    $pane->pid = 'new-b1cf1f05-c093-4e33-8887-6e9086db3345';
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
    $pane->uuid = 'b1cf1f05-c093-4e33-8887-6e9086db3345';
    $display->content['new-b1cf1f05-c093-4e33-8887-6e9086db3345'] = $pane;
    $display->panels['title'][0] = 'new-b1cf1f05-c093-4e33-8887-6e9086db3345';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:resource:default'] = $panelizer;

  return $export;
}
