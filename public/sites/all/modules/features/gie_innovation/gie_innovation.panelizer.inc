<?php
/**
 * @file
 * gie_innovation.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_innovation_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:innovation:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'innovation';
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
      'hero' => NULL,
      'main_sidebar' => NULL,
      'center' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '32c9fb80-dbca-45c3-90b1-028ef814b87f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7e291865-1f33-430c-911d-d14b0fb41ceb';
    $pane->panel = 'bottom';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'About This Innovation',
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
    $pane->uuid = '7e291865-1f33-430c-911d-d14b0fb41ceb';
    $display->content['new-7e291865-1f33-430c-911d-d14b0fb41ceb'] = $pane;
    $display->panels['bottom'][0] = 'new-7e291865-1f33-430c-911d-d14b0fb41ceb';
    $pane = new stdClass();
    $pane->pid = 'new-305a3ae5-8b8e-4b33-8939-d83a904813c4';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'innovation_team-innovation_team';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Innovation Team',
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
    $pane->uuid = '305a3ae5-8b8e-4b33-8939-d83a904813c4';
    $display->content['new-305a3ae5-8b8e-4b33-8939-d83a904813c4'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-305a3ae5-8b8e-4b33-8939-d83a904813c4';
    $pane = new stdClass();
    $pane->pid = 'new-35885984-ee94-43e0-bbdb-a1eb73e7c59a';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'funded_by-funded_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Funded By',
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
    $pane->uuid = '35885984-ee94-43e0-bbdb-a1eb73e7c59a';
    $display->content['new-35885984-ee94-43e0-bbdb-a1eb73e7c59a'] = $pane;
    $display->panels['bottom_sidebar'][1] = 'new-35885984-ee94-43e0-bbdb-a1eb73e7c59a';
    $pane = new stdClass();
    $pane->pid = 'new-e2aeb621-8783-4ba6-bf90-0721272ce39c';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'funded_by-related_orgs';
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
    $pane->uuid = 'e2aeb621-8783-4ba6-bf90-0721272ce39c';
    $display->content['new-e2aeb621-8783-4ba6-bf90-0721272ce39c'] = $pane;
    $display->panels['bottom_sidebar'][2] = 'new-e2aeb621-8783-4ba6-bf90-0721272ce39c';
    $pane = new stdClass();
    $pane->pid = 'new-68dc8142-4287-4168-b00d-b1e21f1dc57e';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'funded_by-related_programs';
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
    $pane->uuid = '68dc8142-4287-4168-b00d-b1e21f1dc57e';
    $display->content['new-68dc8142-4287-4168-b00d-b1e21f1dc57e'] = $pane;
    $display->panels['bottom_sidebar'][3] = 'new-68dc8142-4287-4168-b00d-b1e21f1dc57e';
    $pane = new stdClass();
    $pane->pid = 'new-c16741b7-4c97-4105-ba41-3df027e5ae24';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'exchange_references-exchange_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Exchange References',
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
    $pane->uuid = 'c16741b7-4c97-4105-ba41-3df027e5ae24';
    $display->content['new-c16741b7-4c97-4105-ba41-3df027e5ae24'] = $pane;
    $display->panels['bottom_sidebar'][4] = 'new-c16741b7-4c97-4105-ba41-3df027e5ae24';
    $pane = new stdClass();
    $pane->pid = 'new-c0f9ba84-3f85-4c22-9501-c3bac83312fd';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'non_exchange_references-non_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Other References',
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
    $pane->uuid = 'c0f9ba84-3f85-4c22-9501-c3bac83312fd';
    $display->content['new-c0f9ba84-3f85-4c22-9501-c3bac83312fd'] = $pane;
    $display->panels['bottom_sidebar'][5] = 'new-c0f9ba84-3f85-4c22-9501-c3bac83312fd';
    $pane = new stdClass();
    $pane->pid = 'new-54114307-d06c-49a5-87e3-3c12ba7b744a';
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
    $pane->uuid = '54114307-d06c-49a5-87e3-3c12ba7b744a';
    $display->content['new-54114307-d06c-49a5-87e3-3c12ba7b744a'] = $pane;
    $display->panels['box_first'][0] = 'new-54114307-d06c-49a5-87e3-3c12ba7b744a';
    $pane = new stdClass();
    $pane->pid = 'new-6391e8db-3962-4f56-8a16-7ce005541a52';
    $pane->panel = 'box_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'innovation_assistance-innovation_assistance';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'How Can You Help?',
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
    $pane->uuid = '6391e8db-3962-4f56-8a16-7ce005541a52';
    $display->content['new-6391e8db-3962-4f56-8a16-7ce005541a52'] = $pane;
    $display->panels['box_second'][0] = 'new-6391e8db-3962-4f56-8a16-7ce005541a52';
    $pane = new stdClass();
    $pane->pid = 'new-855fa377-e328-49c1-b326-bb0fc9eb03fb';
    $pane->panel = 'box_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'innovation_team-poc_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '855fa377-e328-49c1-b326-bb0fc9eb03fb';
    $display->content['new-855fa377-e328-49c1-b326-bb0fc9eb03fb'] = $pane;
    $display->panels['box_third'][0] = 'new-855fa377-e328-49c1-b326-bb0fc9eb03fb';
    $pane = new stdClass();
    $pane->pid = 'new-dfeacb8d-a2a7-420e-9b58-3eccf1d0dedf';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_assets-featured_assets_browser';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'dfeacb8d-a2a7-420e-9b58-3eccf1d0dedf';
    $display->content['new-dfeacb8d-a2a7-420e-9b58-3eccf1d0dedf'] = $pane;
    $display->panels['center'][0] = 'new-dfeacb8d-a2a7-420e-9b58-3eccf1d0dedf';
    $pane = new stdClass();
    $pane->pid = 'new-165bc9fa-86ed-4e35-974c-402ac077b4d2';
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
    $pane->uuid = '165bc9fa-86ed-4e35-974c-402ac077b4d2';
    $display->content['new-165bc9fa-86ed-4e35-974c-402ac077b4d2'] = $pane;
    $display->panels['main'][0] = 'new-165bc9fa-86ed-4e35-974c-402ac077b4d2';
    $pane = new stdClass();
    $pane->pid = 'new-31ffa00a-68cb-4c7d-a416-1155d8232587';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_innovation_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
    $pane->uuid = '31ffa00a-68cb-4c7d-a416-1155d8232587';
    $display->content['new-31ffa00a-68cb-4c7d-a416-1155d8232587'] = $pane;
    $display->panels['main'][1] = 'new-31ffa00a-68cb-4c7d-a416-1155d8232587';
    $pane = new stdClass();
    $pane->pid = 'new-af1e2794-970b-47bf-ad8d-117071bb144e';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--button',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'af1e2794-970b-47bf-ad8d-117071bb144e';
    $display->content['new-af1e2794-970b-47bf-ad8d-117071bb144e'] = $pane;
    $display->panels['main'][2] = 'new-af1e2794-970b-47bf-ad8d-117071bb144e';
    $pane = new stdClass();
    $pane->pid = 'new-ec63f124-5bc7-44f1-8a82-5ad0ac118efb';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This Innovation? <p>Add it to your favorites.</p>',
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
    $pane->uuid = 'ec63f124-5bc7-44f1-8a82-5ad0ac118efb';
    $display->content['new-ec63f124-5bc7-44f1-8a82-5ad0ac118efb'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-ec63f124-5bc7-44f1-8a82-5ad0ac118efb';
    $pane = new stdClass();
    $pane->pid = 'new-ffa635f8-cea9-4ba8-ae1a-082b9b92b0c9';
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
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--button',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ffa635f8-cea9-4ba8-ae1a-082b9b92b0c9';
    $display->content['new-ffa635f8-cea9-4ba8-ae1a-082b9b92b0c9'] = $pane;
    $display->panels['main_sidebar'][1] = 'new-ffa635f8-cea9-4ba8-ae1a-082b9b92b0c9';
    $pane = new stdClass();
    $pane->pid = 'new-dfdf289d-836c-4c22-9de1-003a76bcccdf';
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
    $pane->uuid = 'dfdf289d-836c-4c22-9de1-003a76bcccdf';
    $display->content['new-dfdf289d-836c-4c22-9de1-003a76bcccdf'] = $pane;
    $display->panels['title'][0] = 'new-dfdf289d-836c-4c22-9de1-003a76bcccdf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:innovation:default'] = $panelizer;

  return $export;
}
