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
    $pane->pid = 'new-5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $pane->panel = 'main';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $display->content['new-5da7a63f-86ef-4a67-8513-5fbb970c977b'] = $pane;
    $display->panels['main'][3] = 'new-5da7a63f-86ef-4a67-8513-5fbb970c977b';
    $pane = new stdClass();
    $pane->pid = 'new-b38765c1-b94c-49ec-811a-13590f3f3e02';
    $pane->panel = 'main';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b38765c1-b94c-49ec-811a-13590f3f3e02';
    $display->content['new-b38765c1-b94c-49ec-811a-13590f3f3e02'] = $pane;
    $display->panels['main'][4] = 'new-b38765c1-b94c-49ec-811a-13590f3f3e02';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6a0ba570-85c6-4226-a676-02d29e816467';
    $display->content['new-6a0ba570-85c6-4226-a676-02d29e816467'] = $pane;
    $display->panels['main'][5] = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
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
    $pane = new stdClass();
    $pane->pid = 'new-d587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $pane->panel = 'sidebar';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $display->content['new-d587f839-0603-4f2e-af0a-8a1ad1ad9414'] = $pane;
    $display->panels['sidebar'][1] = 'new-d587f839-0603-4f2e-af0a-8a1ad1ad9414';
    $pane = new stdClass();
    $pane->pid = 'new-a1bc0520-e3aa-4c61-876a-91050d58b34d';
    $pane->panel = 'sidebar';
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
      'display' => 'contact',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a1bc0520-e3aa-4c61-876a-91050d58b34d';
    $display->content['new-a1bc0520-e3aa-4c61-876a-91050d58b34d'] = $pane;
    $display->panels['sidebar'][2] = 'new-a1bc0520-e3aa-4c61-876a-91050d58b34d';
    $pane = new stdClass();
    $pane->pid = 'new-3295d79d-5637-4169-9430-5c63264508dd';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_grant_award_value';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ' ',
        'prefix_suffix' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3295d79d-5637-4169-9430-5c63264508dd';
    $display->content['new-3295d79d-5637-4169-9430-5c63264508dd'] = $pane;
    $display->panels['sidebar'][3] = 'new-3295d79d-5637-4169-9430-5c63264508dd';
    $pane = new stdClass();
    $pane->pid = 'new-0b014e89-1e29-44e9-a1ea-c9793e33a95b';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_eligibility_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '0b014e89-1e29-44e9-a1ea-c9793e33a95b';
    $display->content['new-0b014e89-1e29-44e9-a1ea-c9793e33a95b'] = $pane;
    $display->panels['sidebar'][4] = 'new-0b014e89-1e29-44e9-a1ea-c9793e33a95b';
    $pane = new stdClass();
    $pane->pid = 'new-cb16c467-b297-4348-b8d9-91e599f3438b';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_innovation_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'cb16c467-b297-4348-b8d9-91e599f3438b';
    $display->content['new-cb16c467-b297-4348-b8d9-91e599f3438b'] = $pane;
    $display->panels['sidebar'][5] = 'new-cb16c467-b297-4348-b8d9-91e599f3438b';
    $pane = new stdClass();
    $pane->pid = 'new-486913ec-0aae-4f73-b188-4631cb5faed9';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_innovation_stage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '486913ec-0aae-4f73-b188-4631cb5faed9';
    $display->content['new-486913ec-0aae-4f73-b188-4631cb5faed9'] = $pane;
    $display->panels['sidebar'][6] = 'new-486913ec-0aae-4f73-b188-4631cb5faed9';
    $pane = new stdClass();
    $pane->pid = 'new-2375fe35-5489-4981-999b-49d29fedd90d';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_term_region';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Geographic Focus',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '2375fe35-5489-4981-999b-49d29fedd90d';
    $display->content['new-2375fe35-5489-4981-999b-49d29fedd90d'] = $pane;
    $display->panels['sidebar'][7] = 'new-2375fe35-5489-4981-999b-49d29fedd90d';
    $pane = new stdClass();
    $pane->pid = 'new-5d58720c-2665-4027-9305-6e333eb69f11';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_term_country';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5d58720c-2665-4027-9305-6e333eb69f11';
    $display->content['new-5d58720c-2665-4027-9305-6e333eb69f11'] = $pane;
    $display->panels['sidebar'][8] = 'new-5d58720c-2665-4027-9305-6e333eb69f11';
    $pane = new stdClass();
    $pane->pid = 'new-95336bf2-f230-44e4-96d2-4b9e70142569';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_term_sector';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '95336bf2-f230-44e4-96d2-4b9e70142569';
    $display->content['new-95336bf2-f230-44e4-96d2-4b9e70142569'] = $pane;
    $display->panels['sidebar'][9] = 'new-95336bf2-f230-44e4-96d2-4b9e70142569';
    $pane = new stdClass();
    $pane->pid = 'new-2077f2c0-5057-4474-adc6-864998b9e0ff';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_term_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '2077f2c0-5057-4474-adc6-864998b9e0ff';
    $display->content['new-2077f2c0-5057-4474-adc6-864998b9e0ff'] = $pane;
    $display->panels['sidebar'][10] = 'new-2077f2c0-5057-4474-adc6-864998b9e0ff';
    $pane = new stdClass();
    $pane->pid = 'new-0b2119cc-4dd4-4320-8813-8e1b994032dd';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_duration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => '_none',
        'title_link' => '',
        'title_class' => '',
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '0b2119cc-4dd4-4320-8813-8e1b994032dd';
    $display->content['new-0b2119cc-4dd4-4320-8813-8e1b994032dd'] = $pane;
    $display->panels['sidebar'][11] = 'new-0b2119cc-4dd4-4320-8813-8e1b994032dd';
    $pane = new stdClass();
    $pane->pid = 'new-8ac83c76-33bb-464e-b386-15e7357f4a5b';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_funding_effort';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '8ac83c76-33bb-464e-b386-15e7357f4a5b';
    $display->content['new-8ac83c76-33bb-464e-b386-15e7357f4a5b'] = $pane;
    $display->panels['sidebar'][12] = 'new-8ac83c76-33bb-464e-b386-15e7357f4a5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:funding:default'] = $panelizer;

  return $export;
}
