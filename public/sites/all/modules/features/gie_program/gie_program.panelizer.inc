<?php
/**
 * @file
 * gie_program.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_program_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:program:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9c7ab850-d2e2-4450-9e82-67830e0a664d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-157f6907-d4d5-4a56-a00c-93e004eab637';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '157f6907-d4d5-4a56-a00c-93e004eab637';
    $display->content['new-157f6907-d4d5-4a56-a00c-93e004eab637'] = $pane;
    $display->panels['main'][0] = 'new-157f6907-d4d5-4a56-a00c-93e004eab637';
    $pane = new stdClass();
    $pane->pid = 'new-11d50d72-86cf-42ce-b801-09b2dd593fcd';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_problem';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '11d50d72-86cf-42ce-b801-09b2dd593fcd';
    $display->content['new-11d50d72-86cf-42ce-b801-09b2dd593fcd'] = $pane;
    $display->panels['main'][1] = 'new-11d50d72-86cf-42ce-b801-09b2dd593fcd';
    $pane = new stdClass();
    $pane->pid = 'new-4457b667-1490-4ba4-9ded-0898337ca580';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_objectives';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4457b667-1490-4ba4-9ded-0898337ca580';
    $display->content['new-4457b667-1490-4ba4-9ded-0898337ca580'] = $pane;
    $display->panels['main'][2] = 'new-4457b667-1490-4ba4-9ded-0898337ca580';
    $pane = new stdClass();
    $pane->pid = 'new-b9e2a8a9-a80a-44b0-bcb6-9f7df949bcc6';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_status';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b9e2a8a9-a80a-44b0-bcb6-9f7df949bcc6';
    $display->content['new-b9e2a8a9-a80a-44b0-bcb6-9f7df949bcc6'] = $pane;
    $display->panels['main'][3] = 'new-b9e2a8a9-a80a-44b0-bcb6-9f7df949bcc6';
    $pane = new stdClass();
    $pane->pid = 'new-2037aa96-da87-4098-a626-e38b5f65fb07';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'program_recent_content-resources_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2037aa96-da87-4098-a626-e38b5f65fb07';
    $display->content['new-2037aa96-da87-4098-a626-e38b5f65fb07'] = $pane;
    $display->panels['main'][4] = 'new-2037aa96-da87-4098-a626-e38b5f65fb07';
    $pane = new stdClass();
    $pane->pid = 'new-76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'program_recent_content-innovations_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $display->content['new-76786361-3055-4ff2-b9a2-6c8f9e8312ea'] = $pane;
    $display->panels['main'][5] = 'new-76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $pane = new stdClass();
    $pane->pid = 'new-e3454f8d-6360-48ce-8910-66f9087dd907';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'contact',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Contact Info',
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
    $pane->uuid = 'e3454f8d-6360-48ce-8910-66f9087dd907';
    $display->content['new-e3454f8d-6360-48ce-8910-66f9087dd907'] = $pane;
    $display->panels['sidebar'][0] = 'new-e3454f8d-6360-48ce-8910-66f9087dd907';
    $pane = new stdClass();
    $pane->pid = 'new-1a480f0c-79b2-4be5-92a0-f3904deca6e3';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'program_taxonomies-regions_countries_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1a480f0c-79b2-4be5-92a0-f3904deca6e3';
    $display->content['new-1a480f0c-79b2-4be5-92a0-f3904deca6e3'] = $pane;
    $display->panels['sidebar'][1] = 'new-1a480f0c-79b2-4be5-92a0-f3904deca6e3';
    $pane = new stdClass();
    $pane->pid = 'new-a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'program_taxonomies-sectors_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b';
    $display->content['new-a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b'] = $pane;
    $display->panels['sidebar'][2] = 'new-a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b';
    $pane = new stdClass();
    $pane->pid = 'new-1908fc16-a4fc-42ff-9396-f9f14d306e53';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'program_recent_content-partners_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1908fc16-a4fc-42ff-9396-f9f14d306e53';
    $display->content['new-1908fc16-a4fc-42ff-9396-f9f14d306e53'] = $pane;
    $display->panels['sidebar'][3] = 'new-1908fc16-a4fc-42ff-9396-f9f14d306e53';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:program:default'] = $panelizer;

  return $export;
}
