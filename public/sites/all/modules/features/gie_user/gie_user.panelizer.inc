<?php
/**
 * @file
 * gie_user.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_user_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'user:user:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'user';
  $panelizer->panelizer_key = 'user';
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
      'hero' => NULL,
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
  $display->title = 'Member Profile';
  $display->uuid = '7477fefb-c692-414b-b14c-4417c6f7aee3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-62b2a3c3-1b10-46f7-ba57-fb8e19c44eb2';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'recently_posted-panel_pane_1';
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
    $pane->uuid = '62b2a3c3-1b10-46f7-ba57-fb8e19c44eb2';
    $display->content['new-62b2a3c3-1b10-46f7-ba57-fb8e19c44eb2'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-62b2a3c3-1b10-46f7-ba57-fb8e19c44eb2';
    $pane = new stdClass();
    $pane->pid = 'new-7da35083-36e5-4daf-8502-4544b81b0101';
    $pane->panel = 'hero';
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
    $pane->uuid = '7da35083-36e5-4daf-8502-4544b81b0101';
    $display->content['new-7da35083-36e5-4daf-8502-4544b81b0101'] = $pane;
    $display->panels['hero'][0] = 'new-7da35083-36e5-4daf-8502-4544b81b0101';
    $pane = new stdClass();
    $pane->pid = 'new-f9f293e7-8292-4e3c-b5b3-06b5e503e649';
    $pane->panel = 'main';
    $pane->type = 'entity_view';
    $pane->subtype = 'user';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f9f293e7-8292-4e3c-b5b3-06b5e503e649';
    $display->content['new-f9f293e7-8292-4e3c-b5b3-06b5e503e649'] = $pane;
    $display->panels['main'][0] = 'new-f9f293e7-8292-4e3c-b5b3-06b5e503e649';
    $pane = new stdClass();
    $pane->pid = 'new-04bb70a5-410f-4f81-aa1c-7c66e01a3d66';
    $pane->panel = 'main_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_motto';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04bb70a5-410f-4f81-aa1c-7c66e01a3d66';
    $display->content['new-04bb70a5-410f-4f81-aa1c-7c66e01a3d66'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-04bb70a5-410f-4f81-aa1c-7c66e01a3d66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9f293e7-8292-4e3c-b5b3-06b5e503e649';
  $panelizer->display = $display;
  $export['user:user:default'] = $panelizer;

  return $export;
}
