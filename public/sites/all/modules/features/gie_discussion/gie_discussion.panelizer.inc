<?php
/**
 * @file
 * gie_discussion.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_discussion_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:discussion:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'discussion';
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
      'middle' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'center' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bd95a909-41cc-438e-b3dd-cf1583b136ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fbdfe566-adf9-4fea-83f7-5f40b6558afb';
    $pane->panel = 'main';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_header',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbdfe566-adf9-4fea-83f7-5f40b6558afb';
    $display->content['new-fbdfe566-adf9-4fea-83f7-5f40b6558afb'] = $pane;
    $display->panels['main'][0] = 'new-fbdfe566-adf9-4fea-83f7-5f40b6558afb';
    $pane = new stdClass();
    $pane->pid = 'new-8780d5ca-0923-44b9-a893-4b3ca80a0870';
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
    $pane->uuid = '8780d5ca-0923-44b9-a893-4b3ca80a0870';
    $display->content['new-8780d5ca-0923-44b9-a893-4b3ca80a0870'] = $pane;
    $display->panels['main'][1] = 'new-8780d5ca-0923-44b9-a893-4b3ca80a0870';
    $pane = new stdClass();
    $pane->pid = 'new-c73fc317-b8fc-4728-9993-343bdc39e62f';
    $pane->panel = 'main';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c73fc317-b8fc-4728-9993-343bdc39e62f';
    $display->content['new-c73fc317-b8fc-4728-9993-343bdc39e62f'] = $pane;
    $display->panels['main'][2] = 'new-c73fc317-b8fc-4728-9993-343bdc39e62f';
    $pane = new stdClass();
    $pane->pid = 'new-c50eda20-6c64-4049-8217-62504d094535';
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
    $pane->uuid = 'c50eda20-6c64-4049-8217-62504d094535';
    $display->content['new-c50eda20-6c64-4049-8217-62504d094535'] = $pane;
    $display->panels['title'][0] = 'new-c50eda20-6c64-4049-8217-62504d094535';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:discussion:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:discussion:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'discussion';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3fd3628c-2c4d-4943-afc3-bb99aeae9109';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-07004c56-b57e-4839-ad67-7e4e4ca8e300';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'listing',
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
    $pane->uuid = '07004c56-b57e-4839-ad67-7e4e4ca8e300';
    $display->content['new-07004c56-b57e-4839-ad67-7e4e4ca8e300'] = $pane;
    $display->panels['center'][0] = 'new-07004c56-b57e-4839-ad67-7e4e4ca8e300';
    $pane = new stdClass();
    $pane->pid = 'new-f3ce3668-0e50-41f1-9850-c0eb0779703f';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
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
    $pane->uuid = 'f3ce3668-0e50-41f1-9850-c0eb0779703f';
    $display->content['new-f3ce3668-0e50-41f1-9850-c0eb0779703f'] = $pane;
    $display->panels['center'][1] = 'new-f3ce3668-0e50-41f1-9850-c0eb0779703f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-07004c56-b57e-4839-ad67-7e4e4ca8e300';
  $panelizer->display = $display;
  $export['node:discussion:default:teaser'] = $panelizer;

  return $export;
}
