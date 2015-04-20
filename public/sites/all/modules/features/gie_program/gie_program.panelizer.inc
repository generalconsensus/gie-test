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
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'main' => NULL,
      'sidebar' => NULL,
      'title' => NULL,
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
  $display->uuid = '9c7ab850-d2e2-4450-9e82-67830e0a664d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-157f6907-d4d5-4a56-a00c-93e004eab637';
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
    $pane->uuid = '157f6907-d4d5-4a56-a00c-93e004eab637';
    $display->content['new-157f6907-d4d5-4a56-a00c-93e004eab637'] = $pane;
    $display->panels['bottom'][0] = 'new-157f6907-d4d5-4a56-a00c-93e004eab637';
    $pane = new stdClass();
    $pane->pid = 'new-2037aa96-da87-4098-a626-e38b5f65fb07';
    $pane->panel = 'bottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2037aa96-da87-4098-a626-e38b5f65fb07';
    $display->content['new-2037aa96-da87-4098-a626-e38b5f65fb07'] = $pane;
    $display->panels['bottom'][1] = 'new-2037aa96-da87-4098-a626-e38b5f65fb07';
    $pane = new stdClass();
    $pane->pid = 'new-76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $pane->panel = 'bottom';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $display->content['new-76786361-3055-4ff2-b9a2-6c8f9e8312ea'] = $pane;
    $display->panels['bottom'][2] = 'new-76786361-3055-4ff2-b9a2-6c8f9e8312ea';
    $pane = new stdClass();
    $pane->pid = 'new-1908fc16-a4fc-42ff-9396-f9f14d306e53';
    $pane->panel = 'bottom_sidebar';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1908fc16-a4fc-42ff-9396-f9f14d306e53';
    $display->content['new-1908fc16-a4fc-42ff-9396-f9f14d306e53'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-1908fc16-a4fc-42ff-9396-f9f14d306e53';
    $pane = new stdClass();
    $pane->pid = 'new-1a480f0c-79b2-4be5-92a0-f3904deca6e3';
    $pane->panel = 'bottom_sidebar';
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
    $display->panels['bottom_sidebar'][1] = 'new-1a480f0c-79b2-4be5-92a0-f3904deca6e3';
    $pane = new stdClass();
    $pane->pid = 'new-a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b';
    $pane->panel = 'bottom_sidebar';
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
    $display->panels['bottom_sidebar'][2] = 'new-a327d7e6-49ff-45d3-aff9-a1e6f8d1bc5b';
    $pane = new stdClass();
    $pane->pid = 'new-0cd7daa8-f25c-46ea-9ba4-137aa5800929';
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
    $pane->uuid = '0cd7daa8-f25c-46ea-9ba4-137aa5800929';
    $display->content['new-0cd7daa8-f25c-46ea-9ba4-137aa5800929'] = $pane;
    $display->panels['box_first'][0] = 'new-0cd7daa8-f25c-46ea-9ba4-137aa5800929';
    $pane = new stdClass();
    $pane->pid = 'new-13c28f76-3d38-4a5c-8303-ce0ca70f0001';
    $pane->panel = 'box_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_url',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Program Website',
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
    $pane->uuid = '13c28f76-3d38-4a5c-8303-ce0ca70f0001';
    $display->content['new-13c28f76-3d38-4a5c-8303-ce0ca70f0001'] = $pane;
    $display->panels['box_second'][0] = 'new-13c28f76-3d38-4a5c-8303-ce0ca70f0001';
    $pane = new stdClass();
    $pane->pid = 'new-7decfb56-6854-4a66-80f1-34f2592b4923';
    $pane->panel = 'box_third';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'contact',
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
    $pane->uuid = '7decfb56-6854-4a66-80f1-34f2592b4923';
    $display->content['new-7decfb56-6854-4a66-80f1-34f2592b4923'] = $pane;
    $display->panels['box_third'][0] = 'new-7decfb56-6854-4a66-80f1-34f2592b4923';
    $pane = new stdClass();
    $pane->pid = 'new-6101ecbf-0030-48c6-8997-9190b63982ca';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
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
        'view_mode' => 'default',
        'links' => 0,
        'image_style' => 'card__500x300_',
        'image_link' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6101ecbf-0030-48c6-8997-9190b63982ca';
    $display->content['new-6101ecbf-0030-48c6-8997-9190b63982ca'] = $pane;
    $display->panels['main'][0] = 'new-6101ecbf-0030-48c6-8997-9190b63982ca';
    $pane = new stdClass();
    $pane->pid = 'new-346c9827-5a60-48c9-ad81-78e487c8c201';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'smart_trim_format',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '300',
        'trim_type' => 'chars',
        'trim_suffix' => '...',
        'more_link' => '0',
        'more_text' => 'Read more',
        'trim_options' => array(
          'text' => 0,
        ),
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
    $pane->uuid = '346c9827-5a60-48c9-ad81-78e487c8c201';
    $display->content['new-346c9827-5a60-48c9-ad81-78e487c8c201'] = $pane;
    $display->panels['main'][1] = 'new-346c9827-5a60-48c9-ad81-78e487c8c201';
    $pane = new stdClass();
    $pane->pid = 'new-31f8103e-e0fe-41c5-a24b-f241b08d546b';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This Program? <p>Add it to your favorites.</p>',
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
    $pane->uuid = '31f8103e-e0fe-41c5-a24b-f241b08d546b';
    $display->content['new-31f8103e-e0fe-41c5-a24b-f241b08d546b'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-31f8103e-e0fe-41c5-a24b-f241b08d546b';
    $pane = new stdClass();
    $pane->pid = 'new-8ce4bb67-ec9e-48e9-bfa0-071eaab8c3a5';
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
    $pane->uuid = '8ce4bb67-ec9e-48e9-bfa0-071eaab8c3a5';
    $display->content['new-8ce4bb67-ec9e-48e9-bfa0-071eaab8c3a5'] = $pane;
    $display->panels['title'][0] = 'new-8ce4bb67-ec9e-48e9-bfa0-071eaab8c3a5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:program:default'] = $panelizer;

  return $export;
}
