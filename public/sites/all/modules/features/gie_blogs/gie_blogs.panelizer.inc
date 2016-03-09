<?php
/**
 * @file
 * gie_blogs.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_blogs_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blogs:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blogs';
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
  $display->uuid = 'e7d05121-a5e5-400a-a1d5-1f979a0a54e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-898b9858-459f-49bb-9cba-d05e42a9697e';
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
    $pane->uuid = '898b9858-459f-49bb-9cba-d05e42a9697e';
    $display->content['new-898b9858-459f-49bb-9cba-d05e42a9697e'] = $pane;
    $display->panels['main'][0] = 'new-898b9858-459f-49bb-9cba-d05e42a9697e';
    $pane = new stdClass();
    $pane->pid = 'new-800d1c1b-66f5-4126-9f0e-403a79e27808';
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
    $pane->uuid = '800d1c1b-66f5-4126-9f0e-403a79e27808';
    $display->content['new-800d1c1b-66f5-4126-9f0e-403a79e27808'] = $pane;
    $display->panels['main'][1] = 'new-800d1c1b-66f5-4126-9f0e-403a79e27808';
    $pane = new stdClass();
    $pane->pid = 'new-967aab73-743a-495a-975d-077d234a014d';
    $pane->panel = 'main_sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '967aab73-743a-495a-975d-077d234a014d';
    $display->content['new-967aab73-743a-495a-975d-077d234a014d'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-967aab73-743a-495a-975d-077d234a014d';
    $pane = new stdClass();
    $pane->pid = 'new-24bc48d1-07c4-4608-9632-bffa7ab210dc';
    $pane->panel = 'main_sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'box',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24bc48d1-07c4-4608-9632-bffa7ab210dc';
    $display->content['new-24bc48d1-07c4-4608-9632-bffa7ab210dc'] = $pane;
    $display->panels['main_sidebar'][1] = 'new-24bc48d1-07c4-4608-9632-bffa7ab210dc';
    $pane = new stdClass();
    $pane->pid = 'new-49fcbc20-9095-416f-8532-5629dca46b5e';
    $pane->panel = 'main_sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'box',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '49fcbc20-9095-416f-8532-5629dca46b5e';
    $display->content['new-49fcbc20-9095-416f-8532-5629dca46b5e'] = $pane;
    $display->panels['main_sidebar'][2] = 'new-49fcbc20-9095-416f-8532-5629dca46b5e';
    $pane = new stdClass();
    $pane->pid = 'new-0dd085aa-5b4f-4e5c-845c-f8f0a176fea3';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This Blog? <p>Add it to your favorites.</p>',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0dd085aa-5b4f-4e5c-845c-f8f0a176fea3';
    $display->content['new-0dd085aa-5b4f-4e5c-845c-f8f0a176fea3'] = $pane;
    $display->panels['main_sidebar'][3] = 'new-0dd085aa-5b4f-4e5c-845c-f8f0a176fea3';
    $pane = new stdClass();
    $pane->pid = 'new-d7b7e6c3-1b89-4823-a4d1-f816a7d7aeed';
    $pane->panel = 'main_sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--button',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd7b7e6c3-1b89-4823-a4d1-f816a7d7aeed';
    $display->content['new-d7b7e6c3-1b89-4823-a4d1-f816a7d7aeed'] = $pane;
    $display->panels['main_sidebar'][4] = 'new-d7b7e6c3-1b89-4823-a4d1-f816a7d7aeed';
    $pane = new stdClass();
    $pane->pid = 'new-9359966f-1539-476f-ab9e-3a2a934127b4';
    $pane->panel = 'main_sidebar';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--button',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9359966f-1539-476f-ab9e-3a2a934127b4';
    $display->content['new-9359966f-1539-476f-ab9e-3a2a934127b4'] = $pane;
    $display->panels['main_sidebar'][5] = 'new-9359966f-1539-476f-ab9e-3a2a934127b4';
    $pane = new stdClass();
    $pane->pid = 'new-ce826a40-7a7f-4264-89a6-341e7e0aaa56';
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
    $pane->uuid = 'ce826a40-7a7f-4264-89a6-341e7e0aaa56';
    $display->content['new-ce826a40-7a7f-4264-89a6-341e7e0aaa56'] = $pane;
    $display->panels['title'][0] = 'new-ce826a40-7a7f-4264-89a6-341e7e0aaa56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ce826a40-7a7f-4264-89a6-341e7e0aaa56';
  $panelizer->display = $display;
  $export['node:blogs:default'] = $panelizer;

  return $export;
}
