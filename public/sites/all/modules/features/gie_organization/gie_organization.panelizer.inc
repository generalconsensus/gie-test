<?php
/**
 * @file
 * gie_organization.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_organization_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:organization:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'organization';
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
  $display->uuid = '66f9a1b6-3903-42d6-b9d3-aade7afd13fd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8d71242f-e1d3-4d62-a74f-a126c17882bd';
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
    $pane->uuid = '8d71242f-e1d3-4d62-a74f-a126c17882bd';
    $display->content['new-8d71242f-e1d3-4d62-a74f-a126c17882bd'] = $pane;
    $display->panels['main'][0] = 'new-8d71242f-e1d3-4d62-a74f-a126c17882bd';
    $pane = new stdClass();
    $pane->pid = 'new-28c108e7-d19a-4cbd-8c76-75075dd2fad2';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_recent_content-resources_pane';
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
    $pane->uuid = '28c108e7-d19a-4cbd-8c76-75075dd2fad2';
    $display->content['new-28c108e7-d19a-4cbd-8c76-75075dd2fad2'] = $pane;
    $display->panels['main'][1] = 'new-28c108e7-d19a-4cbd-8c76-75075dd2fad2';
    $pane = new stdClass();
    $pane->pid = 'new-60581d21-30a2-4c69-b188-e1e20ee83a9d';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_recent_content-innovations_pane';
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
    $pane->uuid = '60581d21-30a2-4c69-b188-e1e20ee83a9d';
    $display->content['new-60581d21-30a2-4c69-b188-e1e20ee83a9d'] = $pane;
    $display->panels['main'][2] = 'new-60581d21-30a2-4c69-b188-e1e20ee83a9d';
    $pane = new stdClass();
    $pane->pid = 'new-9be90025-2f6a-48ce-98ee-c4acb18dc600';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_recent_content-funding_pane';
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
    $pane->uuid = '9be90025-2f6a-48ce-98ee-c4acb18dc600';
    $display->content['new-9be90025-2f6a-48ce-98ee-c4acb18dc600'] = $pane;
    $display->panels['main'][3] = 'new-9be90025-2f6a-48ce-98ee-c4acb18dc600';
    $pane = new stdClass();
    $pane->pid = 'new-2524acf1-806d-4b8c-ad50-42903cabef9b';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
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
        'view_mode' => 'org_teaser',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2524acf1-806d-4b8c-ad50-42903cabef9b';
    $display->content['new-2524acf1-806d-4b8c-ad50-42903cabef9b'] = $pane;
    $display->panels['preface'][0] = 'new-2524acf1-806d-4b8c-ad50-42903cabef9b';
    $pane = new stdClass();
    $pane->pid = 'new-73d44558-945a-4ab7-849b-24753c238967';
    $pane->panel = 'preface';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '73d44558-945a-4ab7-849b-24753c238967';
    $display->content['new-73d44558-945a-4ab7-849b-24753c238967'] = $pane;
    $display->panels['preface'][1] = 'new-73d44558-945a-4ab7-849b-24753c238967';
    $pane = new stdClass();
    $pane->pid = 'new-4c35f61c-35e6-4914-8dcc-2e2b49102b23';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_desc';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c35f61c-35e6-4914-8dcc-2e2b49102b23';
    $display->content['new-4c35f61c-35e6-4914-8dcc-2e2b49102b23'] = $pane;
    $display->panels['preface'][2] = 'new-4c35f61c-35e6-4914-8dcc-2e2b49102b23';
    $pane = new stdClass();
    $pane->pid = 'new-ce48fe61-50cd-489b-af64-137050e0ab9c';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_org_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_url',
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
    $pane->uuid = 'ce48fe61-50cd-489b-af64-137050e0ab9c';
    $display->content['new-ce48fe61-50cd-489b-af64-137050e0ab9c'] = $pane;
    $display->panels['preface'][3] = 'new-ce48fe61-50cd-489b-af64-137050e0ab9c';
    $pane = new stdClass();
    $pane->pid = 'new-4681bea1-85ef-498c-92e7-28fa8a61e2d5';
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
    $pane->uuid = '4681bea1-85ef-498c-92e7-28fa8a61e2d5';
    $display->content['new-4681bea1-85ef-498c-92e7-28fa8a61e2d5'] = $pane;
    $display->panels['sidebar'][0] = 'new-4681bea1-85ef-498c-92e7-28fa8a61e2d5';
    $pane = new stdClass();
    $pane->pid = 'new-ff5d7524-b61c-4696-b894-25e8854e8395';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_taxonomies-regions_pane';
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
    $pane->uuid = 'ff5d7524-b61c-4696-b894-25e8854e8395';
    $display->content['new-ff5d7524-b61c-4696-b894-25e8854e8395'] = $pane;
    $display->panels['sidebar'][1] = 'new-ff5d7524-b61c-4696-b894-25e8854e8395';
    $pane = new stdClass();
    $pane->pid = 'new-a403ef15-d844-420a-9131-5cbcd6bcb4b2';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'organization_taxonomies-sectors_pane';
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
    $pane->uuid = 'a403ef15-d844-420a-9131-5cbcd6bcb4b2';
    $display->content['new-a403ef15-d844-420a-9131-5cbcd6bcb4b2'] = $pane;
    $display->panels['sidebar'][2] = 'new-a403ef15-d844-420a-9131-5cbcd6bcb4b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:organization:default'] = $panelizer;

  return $export;
}
