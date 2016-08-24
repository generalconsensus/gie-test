<?php
/**
 * @file
 * gie_microsite.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_microsite_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'microsite_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:microsite_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'longform';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'preface' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1eb9badf-29af-425c-a2eb-836bb4e6a44d';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9093094b-ed14-40b6-a511-2afec8460d7b';
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
  $pane->uuid = '9093094b-ed14-40b6-a511-2afec8460d7b';
  $display->content['new-9093094b-ed14-40b6-a511-2afec8460d7b'] = $pane;
  $display->panels['main'][0] = 'new-9093094b-ed14-40b6-a511-2afec8460d7b';
  $pane = new stdClass();
  $pane->pid = 'new-04ada861-aea1-4f7c-ba02-ad6c3aef08e0';
  $pane->panel = 'main';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '04ada861-aea1-4f7c-ba02-ad6c3aef08e0';
  $display->content['new-04ada861-aea1-4f7c-ba02-ad6c3aef08e0'] = $pane;
  $display->panels['main'][1] = 'new-04ada861-aea1-4f7c-ba02-ad6c3aef08e0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:microsite_page:default'] = $panelizer;

  return $export;
}
