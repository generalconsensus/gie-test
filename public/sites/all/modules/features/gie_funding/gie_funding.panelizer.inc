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
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'funding';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:funding:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
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
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:funding:default';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--full-content',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6a0ba570-85c6-4226-a676-02d29e816467';
  $display->content['new-6a0ba570-85c6-4226-a676-02d29e816467'] = $pane;
  $display->panels['bottom'][0] = 'new-6a0ba570-85c6-4226-a676-02d29e816467';
  $pane = new stdClass();
  $pane->pid = 'new-0060147c-6d0a-449e-a30d-f718a1eafdfd';
  $pane->panel = 'bottom';
  $pane->type = 'node_comment_wrapper';
  $pane->subtype = 'node_comment_wrapper';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
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
  $pane->uuid = '0060147c-6d0a-449e-a30d-f718a1eafdfd';
  $display->content['new-0060147c-6d0a-449e-a30d-f718a1eafdfd'] = $pane;
  $display->panels['bottom'][1] = 'new-0060147c-6d0a-449e-a30d-f718a1eafdfd';
  $pane = new stdClass();
  $pane->pid = 'new-11da7c66-db04-4986-9f9c-406289802b11';
  $pane->panel = 'bottom_sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'funding_fields-funding_organizations';
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
  $pane->uuid = '11da7c66-db04-4986-9f9c-406289802b11';
  $display->content['new-11da7c66-db04-4986-9f9c-406289802b11'] = $pane;
  $display->panels['bottom_sidebar'][0] = 'new-11da7c66-db04-4986-9f9c-406289802b11';
  $pane = new stdClass();
  $pane->pid = 'new-58973bf6-930f-4b84-9010-34ac40b9758e';
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
  $pane->uuid = '58973bf6-930f-4b84-9010-34ac40b9758e';
  $display->content['new-58973bf6-930f-4b84-9010-34ac40b9758e'] = $pane;
  $display->panels['box_first'][0] = 'new-58973bf6-930f-4b84-9010-34ac40b9758e';
  $pane = new stdClass();
  $pane->pid = 'new-197c0ce3-3d39-46d5-8489-33069f368a30';
  $pane->panel = 'box_second';
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
    'display' => 'deadline',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '197c0ce3-3d39-46d5-8489-33069f368a30';
  $display->content['new-197c0ce3-3d39-46d5-8489-33069f368a30'] = $pane;
  $display->panels['box_second'][0] = 'new-197c0ce3-3d39-46d5-8489-33069f368a30';
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
    'override_title' => 1,
    'override_title_text' => 'How to Apply',
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
  $pane->pid = 'new-c1043b41-e3a7-4175-8b71-06dd0b2e7fab';
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
  $pane->uuid = 'c1043b41-e3a7-4175-8b71-06dd0b2e7fab';
  $display->content['new-c1043b41-e3a7-4175-8b71-06dd0b2e7fab'] = $pane;
  $display->panels['main'][0] = 'new-c1043b41-e3a7-4175-8b71-06dd0b2e7fab';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4fd1d3e2-1aef-404b-9b63-e30162602a2f';
  $display->content['new-4fd1d3e2-1aef-404b-9b63-e30162602a2f'] = $pane;
  $display->panels['main'][1] = 'new-4fd1d3e2-1aef-404b-9b63-e30162602a2f';
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
  $pane->css = '';
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9e478168-8a94-4f2f-8154-abd91607296c';
  $display->content['new-9e478168-8a94-4f2f-8154-abd91607296c'] = $pane;
  $display->panels['main'][2] = 'new-9e478168-8a94-4f2f-8154-abd91607296c';
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
    'override_title_text' => 'Like This Funding Op? <p>Add it to your favorites.</p>',
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
  $pane = new stdClass();
  $pane->pid = 'new-2ac62afa-5da9-4ebb-8c80-a2ed63f50b0c';
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
  $pane->css = '';
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2ac62afa-5da9-4ebb-8c80-a2ed63f50b0c';
  $display->content['new-2ac62afa-5da9-4ebb-8c80-a2ed63f50b0c'] = $pane;
  $display->panels['main_sidebar'][1] = 'new-2ac62afa-5da9-4ebb-8c80-a2ed63f50b0c';
  $pane = new stdClass();
  $pane->pid = 'new-c9d2b405-c0d2-409f-92d2-16b36dfbfad8';
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
  $pane->uuid = 'c9d2b405-c0d2-409f-92d2-16b36dfbfad8';
  $display->content['new-c9d2b405-c0d2-409f-92d2-16b36dfbfad8'] = $pane;
  $display->panels['title'][0] = 'new-c9d2b405-c0d2-409f-92d2-16b36dfbfad8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:funding:default'] = $panelizer;

  return $export;
}
