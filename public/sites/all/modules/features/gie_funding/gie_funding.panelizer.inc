<?php
/**
 * @file
 * gie_funding.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_funding_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:funding:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'funding';
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
      'hero' => NULL,
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
  $display->uuid = 'c0f462ed-4e2a-481d-a1bd-5dac8ae0a155';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
    $pane->panel = 'bottom';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'About This Funding Opportunity',
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
    $pane->uuid = '6a0ba570-85c6-4226-a676-02d29e816467';
    $display->content['new-6a0ba570-85c6-4226-a676-02d29e816467'] = $pane;
    $display->panels['bottom'][0] = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
    $pane = new stdClass();
    $pane->pid = 'new-687d845f-98b6-41a1-bfa5-ea8ed9ca5767';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
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
        'view_mode' => 'teaser',
        'links' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Funding Organization',
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
    $pane->uuid = '687d845f-98b6-41a1-bfa5-ea8ed9ca5767';
    $display->content['new-687d845f-98b6-41a1-bfa5-ea8ed9ca5767'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-687d845f-98b6-41a1-bfa5-ea8ed9ca5767';
    $pane = new stdClass();
    $pane->pid = 'new-5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $pane->panel = 'box_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'funding_ops_counters-at_a_glance';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $display->content['new-5da7a63f-86ef-4a67-8513-5fbb970c977b'] = $pane;
    $display->panels['box_first'][0] = 'new-5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $pane = new stdClass();
    $pane->pid = 'new-b38765c1-b94c-49ec-811a-13590f3f3e02';
    $pane->panel = 'box_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'gie_general_slash_no_time',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
      'override_title' => 1,
      'override_title_text' => 'Deadline',
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
    $pane->uuid = 'b38765c1-b94c-49ec-811a-13590f3f3e02';
    $display->content['new-b38765c1-b94c-49ec-811a-13590f3f3e02'] = $pane;
    $display->panels['box_second'][0] = 'new-b38765c1-b94c-49ec-811a-13590f3f3e02';
    $pane = new stdClass();
    $pane->pid = 'new-d587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $pane->panel = 'box_third';
    $pane->type = 'views';
    $pane->subtype = 'funding_fields';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'link_url',
      'context' => array(
        0 => 'panelizer.nid',
      ),
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
    $pane->uuid = 'd587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $display->content['new-d587f839-0603-4f2e-af0a-8a1ad1ad9414'] = $pane;
    $display->panels['box_third'][0] = 'new-d587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $pane = new stdClass();
    $pane->pid = 'new-bac8ccb6-7fb6-4d7b-b082-194d45b24273';
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
    $pane->uuid = 'bac8ccb6-7fb6-4d7b-b082-194d45b24273';
    $display->content['new-bac8ccb6-7fb6-4d7b-b082-194d45b24273'] = $pane;
    $display->panels['hero'][0] = 'new-bac8ccb6-7fb6-4d7b-b082-194d45b24273';
    $pane = new stdClass();
    $pane->pid = 'new-4fd1d3e2-1aef-404b-9b63-e30162602a2f';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fd1d3e2-1aef-404b-9b63-e30162602a2f';
    $display->content['new-4fd1d3e2-1aef-404b-9b63-e30162602a2f'] = $pane;
    $display->panels['main'][0] = 'new-4fd1d3e2-1aef-404b-9b63-e30162602a2f';
    $pane = new stdClass();
    $pane->pid = 'new-9e478168-8a94-4f2f-8154-abd91607296c';
    $pane->panel = 'main';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9e478168-8a94-4f2f-8154-abd91607296c';
    $display->content['new-9e478168-8a94-4f2f-8154-abd91607296c'] = $pane;
    $display->panels['main'][1] = 'new-9e478168-8a94-4f2f-8154-abd91607296c';
    $pane = new stdClass();
    $pane->pid = 'new-79698f57-9ad4-49d0-b14a-be615f249c98';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
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
      'css_class' => 'pane--favorite-this',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79698f57-9ad4-49d0-b14a-be615f249c98';
    $display->content['new-79698f57-9ad4-49d0-b14a-be615f249c98'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-79698f57-9ad4-49d0-b14a-be615f249c98';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:funding:default'] = $panelizer;

  return $export;
}
