<?php
/**
 * @file
 * gie_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
  $display->uuid = 'fb9e86a6-527f-4828-bc59-280bbd986d60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83ee97b4-c831-4e41-8cdc-37710b6d13dd';
    $pane->panel = 'bottom';
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
    $pane->uuid = '83ee97b4-c831-4e41-8cdc-37710b6d13dd';
    $display->content['new-83ee97b4-c831-4e41-8cdc-37710b6d13dd'] = $pane;
    $display->panels['bottom'][0] = 'new-83ee97b4-c831-4e41-8cdc-37710b6d13dd';
    $pane = new stdClass();
    $pane->pid = 'new-e86a866d-a133-4dea-bf60-d5accce93c8d';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This News? <p>Add it to your favorites.</p>',
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
    $pane->uuid = 'e86a866d-a133-4dea-bf60-d5accce93c8d';
    $display->content['new-e86a866d-a133-4dea-bf60-d5accce93c8d'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-e86a866d-a133-4dea-bf60-d5accce93c8d';
    $pane = new stdClass();
    $pane->pid = 'new-64ab8f3d-ba18-49ce-917b-eb1b22763b57';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:sharethis';
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
    $pane->css = '';
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64ab8f3d-ba18-49ce-917b-eb1b22763b57';
    $display->content['new-64ab8f3d-ba18-49ce-917b-eb1b22763b57'] = $pane;
    $display->panels['bottom_sidebar'][1] = 'new-64ab8f3d-ba18-49ce-917b-eb1b22763b57';
    $pane = new stdClass();
    $pane->pid = 'new-421a47a9-a40a-484a-b405-977c492e5123';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'abuse_node',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = '';
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '421a47a9-a40a-484a-b405-977c492e5123';
    $display->content['new-421a47a9-a40a-484a-b405-977c492e5123'] = $pane;
    $display->panels['bottom_sidebar'][2] = 'new-421a47a9-a40a-484a-b405-977c492e5123';
    $pane = new stdClass();
    $pane->pid = 'new-bf35a29a-714e-4ebd-a61b-3bdbdd7f33df';
    $pane->panel = 'box_first';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'at_a_glance',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'At a Glance',
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
    $pane->uuid = 'bf35a29a-714e-4ebd-a61b-3bdbdd7f33df';
    $display->content['new-bf35a29a-714e-4ebd-a61b-3bdbdd7f33df'] = $pane;
    $display->panels['box_first'][0] = 'new-bf35a29a-714e-4ebd-a61b-3bdbdd7f33df';
    $pane = new stdClass();
    $pane->pid = 'new-6790fd4c-0729-4d0d-8c4f-830d85c7d3af';
    $pane->panel = 'box_second';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'details',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Details',
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
    $pane->uuid = '6790fd4c-0729-4d0d-8c4f-830d85c7d3af';
    $display->content['new-6790fd4c-0729-4d0d-8c4f-830d85c7d3af'] = $pane;
    $display->panels['box_second'][0] = 'new-6790fd4c-0729-4d0d-8c4f-830d85c7d3af';
    $pane = new stdClass();
    $pane->pid = 'new-ee7862b4-9130-475f-9625-7b0aa9fdd38e';
    $pane->panel = 'box_third';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'contact',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Point of Contact',
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
    $pane->uuid = 'ee7862b4-9130-475f-9625-7b0aa9fdd38e';
    $display->content['new-ee7862b4-9130-475f-9625-7b0aa9fdd38e'] = $pane;
    $display->panels['box_third'][0] = 'new-ee7862b4-9130-475f-9625-7b0aa9fdd38e';
    $pane = new stdClass();
    $pane->pid = 'new-f7c0d55d-af29-462b-b622-80fbb662c1b9';
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
    $pane->uuid = 'f7c0d55d-af29-462b-b622-80fbb662c1b9';
    $display->content['new-f7c0d55d-af29-462b-b622-80fbb662c1b9'] = $pane;
    $display->panels['main'][0] = 'new-f7c0d55d-af29-462b-b622-80fbb662c1b9';
    $pane = new stdClass();
    $pane->pid = 'new-382758b2-5b6c-4179-8983-fb932ac34fc0';
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
    $pane->uuid = '382758b2-5b6c-4179-8983-fb932ac34fc0';
    $display->content['new-382758b2-5b6c-4179-8983-fb932ac34fc0'] = $pane;
    $display->panels['title'][0] = 'new-382758b2-5b6c-4179-8983-fb932ac34fc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  return $export;
}
