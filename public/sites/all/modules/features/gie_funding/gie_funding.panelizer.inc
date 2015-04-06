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
  $display->uuid = 'c0f462ed-4e2a-481d-a1bd-5dac8ae0a155';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bac8ccb6-7fb6-4d7b-b082-194d45b24273';
    $pane->panel = 'main';
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
    $display->panels['main'][0] = 'new-bac8ccb6-7fb6-4d7b-b082-194d45b24273';
    $pane = new stdClass();
    $pane->pid = 'new-758324bd-9332-4674-9a93-5f23cb45b559';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
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
    $pane->uuid = '758324bd-9332-4674-9a93-5f23cb45b559';
    $display->content['new-758324bd-9332-4674-9a93-5f23cb45b559'] = $pane;
    $display->panels['main'][1] = 'new-758324bd-9332-4674-9a93-5f23cb45b559';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9e478168-8a94-4f2f-8154-abd91607296c';
    $display->content['new-9e478168-8a94-4f2f-8154-abd91607296c'] = $pane;
    $display->panels['main'][2] = 'new-9e478168-8a94-4f2f-8154-abd91607296c';
    $pane = new stdClass();
    $pane->pid = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6a0ba570-85c6-4226-a676-02d29e816467';
    $display->content['new-6a0ba570-85c6-4226-a676-02d29e816467'] = $pane;
    $display->panels['main'][3] = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
    $pane = new stdClass();
    $pane->pid = 'new-79698f57-9ad4-49d0-b14a-be615f249c98';
    $pane->panel = 'sidebar';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79698f57-9ad4-49d0-b14a-be615f249c98';
    $display->content['new-79698f57-9ad4-49d0-b14a-be615f249c98'] = $pane;
    $display->panels['sidebar'][0] = 'new-79698f57-9ad4-49d0-b14a-be615f249c98';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:funding:default'] = $panelizer;

  return $export;
}
