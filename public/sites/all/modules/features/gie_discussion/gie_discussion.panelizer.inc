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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bd95a909-41cc-438e-b3dd-cf1583b136ba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8780d5ca-0923-44b9-a893-4b3ca80a0870';
    $pane->panel = 'middle';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8780d5ca-0923-44b9-a893-4b3ca80a0870';
    $display->content['new-8780d5ca-0923-44b9-a893-4b3ca80a0870'] = $pane;
    $display->panels['middle'][0] = 'new-8780d5ca-0923-44b9-a893-4b3ca80a0870';
    $pane = new stdClass();
    $pane->pid = 'new-ad1cfdae-964e-4561-aca3-172783ae6212';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_discussion_desc';
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
          'advanced' => array(
            'class' => '',
            'rel' => '',
            'target' => '',
            'text' => '',
            'title' => '',
          ),
          'destination' => '',
          'linked' => 0,
        ),
      ),
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
    $pane->uuid = 'ad1cfdae-964e-4561-aca3-172783ae6212';
    $display->content['new-ad1cfdae-964e-4561-aca3-172783ae6212'] = $pane;
    $display->panels['middle'][1] = 'new-ad1cfdae-964e-4561-aca3-172783ae6212';
    $pane = new stdClass();
    $pane->pid = 'new-c73fc317-b8fc-4728-9993-343bdc39e62f';
    $pane->panel = 'middle';
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
    $display->panels['middle'][2] = 'new-c73fc317-b8fc-4728-9993-343bdc39e62f';
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
