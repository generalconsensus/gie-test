<?php
/**
 * @file
 * gie_basic_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_basic_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
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
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'cae9bc89-1ef3-4105-b1c2-72fca61cb874';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5e27535-fbee-41a0-bfa3-6b1ac8a7270c';
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
    $pane->uuid = 'd5e27535-fbee-41a0-bfa3-6b1ac8a7270c';
    $display->content['new-d5e27535-fbee-41a0-bfa3-6b1ac8a7270c'] = $pane;
    $display->panels['main'][0] = 'new-d5e27535-fbee-41a0-bfa3-6b1ac8a7270c';
    $pane = new stdClass();
    $pane->pid = 'new-c5281d10-57cc-4967-aa50-10e6f27064e6';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_delimiter' => '',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c5281d10-57cc-4967-aa50-10e6f27064e6';
    $display->content['new-c5281d10-57cc-4967-aa50-10e6f27064e6'] = $pane;
    $display->panels['main'][1] = 'new-c5281d10-57cc-4967-aa50-10e6f27064e6';
    $pane = new stdClass();
    $pane->pid = 'new-4b6e0cc0-6ad5-446c-ad4c-f3a79fc28dfd';
    $pane->panel = 'main_sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => '0',
      'expanded' => 0,
      'sort' => 0,
      'menu_name' => 'main-menu',
      'parent_mlid' => '0',
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
    $pane->uuid = '4b6e0cc0-6ad5-446c-ad4c-f3a79fc28dfd';
    $display->content['new-4b6e0cc0-6ad5-446c-ad4c-f3a79fc28dfd'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-4b6e0cc0-6ad5-446c-ad4c-f3a79fc28dfd';
    $pane = new stdClass();
    $pane->pid = 'new-4656930b-c0b5-4827-875f-3cacd9773b64';
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
    $pane->uuid = '4656930b-c0b5-4827-875f-3cacd9773b64';
    $display->content['new-4656930b-c0b5-4827-875f-3cacd9773b64'] = $pane;
    $display->panels['title'][0] = 'new-4656930b-c0b5-4827-875f-3cacd9773b64';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c5281d10-57cc-4967-aa50-10e6f27064e6';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
