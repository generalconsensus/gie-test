<?php
/**
 * @file
 * gie_long_form_content.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_long_form_content_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'long_form_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:long_form_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'section--longform';
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
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '40923ca3-0b26-4a60-9fe7-14efef172dcb';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d35e798-ddbe-474b-8a83-aa728d5a2b1f';
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
  $pane->uuid = '9d35e798-ddbe-474b-8a83-aa728d5a2b1f';
  $display->content['new-9d35e798-ddbe-474b-8a83-aa728d5a2b1f'] = $pane;
  $display->panels['main'][0] = 'new-9d35e798-ddbe-474b-8a83-aa728d5a2b1f';
  $pane = new stdClass();
  $pane->pid = 'new-54d4bac6-adb8-4ea6-89a8-27bd59841695';
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
  $pane->uuid = '54d4bac6-adb8-4ea6-89a8-27bd59841695';
  $display->content['new-54d4bac6-adb8-4ea6-89a8-27bd59841695'] = $pane;
  $display->panels['main'][1] = 'new-54d4bac6-adb8-4ea6-89a8-27bd59841695';
  $pane = new stdClass();
  $pane->pid = 'new-006ee152-ee76-48d2-b8d7-06580898a08b';
  $pane->panel = 'preface';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
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
  $pane->uuid = '006ee152-ee76-48d2-b8d7-06580898a08b';
  $display->content['new-006ee152-ee76-48d2-b8d7-06580898a08b'] = $pane;
  $display->panels['preface'][0] = 'new-006ee152-ee76-48d2-b8d7-06580898a08b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:long_form_page:default'] = $panelizer;

  return $export;
}
