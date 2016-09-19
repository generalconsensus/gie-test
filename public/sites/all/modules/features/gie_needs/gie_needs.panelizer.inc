<?php
/**
 * @file
 * gie_needs.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_needs_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'needs';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:needs:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'section--wanteds';
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
      'title' => NULL,
      'main' => NULL,
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
  $display->uuid = '7ae6954f-0c5e-49f9-81fd-96d5485c456e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:needs:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cf7940c7-ecf4-45f9-9286-675966d30b7b';
  $pane->panel = 'bottom';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => 'About this Request',
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
  $pane->uuid = 'cf7940c7-ecf4-45f9-9286-675966d30b7b';
  $display->content['new-cf7940c7-ecf4-45f9-9286-675966d30b7b'] = $pane;
  $display->panels['bottom'][0] = 'new-cf7940c7-ecf4-45f9-9286-675966d30b7b';
  $pane = new stdClass();
  $pane->pid = 'new-ff0be50a-5aa0-4967-9f86-a428dae2e009';
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
  $pane->uuid = 'ff0be50a-5aa0-4967-9f86-a428dae2e009';
  $display->content['new-ff0be50a-5aa0-4967-9f86-a428dae2e009'] = $pane;
  $display->panels['bottom'][1] = 'new-ff0be50a-5aa0-4967-9f86-a428dae2e009';
  $pane = new stdClass();
  $pane->pid = 'new-1e94434f-f1c3-41fb-b480-d2866f301073';
  $pane->panel = 'bottom_sidebar';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'details',
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
  $pane->uuid = '1e94434f-f1c3-41fb-b480-d2866f301073';
  $display->content['new-1e94434f-f1c3-41fb-b480-d2866f301073'] = $pane;
  $display->panels['bottom_sidebar'][0] = 'new-1e94434f-f1c3-41fb-b480-d2866f301073';
  $pane = new stdClass();
  $pane->pid = 'new-42250c6d-903b-4a5a-8626-673d16a49bc5';
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
  $pane->uuid = '42250c6d-903b-4a5a-8626-673d16a49bc5';
  $display->content['new-42250c6d-903b-4a5a-8626-673d16a49bc5'] = $pane;
  $display->panels['main'][0] = 'new-42250c6d-903b-4a5a-8626-673d16a49bc5';
  $pane = new stdClass();
  $pane->pid = 'new-c67375b8-7c58-4184-817c-eb62a01d609b';
  $pane->panel = 'main';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'page_header',
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
  $pane->uuid = 'c67375b8-7c58-4184-817c-eb62a01d609b';
  $display->content['new-c67375b8-7c58-4184-817c-eb62a01d609b'] = $pane;
  $display->panels['main'][1] = 'new-c67375b8-7c58-4184-817c-eb62a01d609b';
  $pane = new stdClass();
  $pane->pid = 'new-95a25c3d-7e05-4160-bc7b-e3b60d1029c9';
  $pane->panel = 'main_sidebar';
  $pane->type = 'flag_link';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'flag_name' => 'favorite',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => 'Interested in this Request? <p>Get Updates.</p>',
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
  $pane->uuid = '95a25c3d-7e05-4160-bc7b-e3b60d1029c9';
  $display->content['new-95a25c3d-7e05-4160-bc7b-e3b60d1029c9'] = $pane;
  $display->panels['main_sidebar'][0] = 'new-95a25c3d-7e05-4160-bc7b-e3b60d1029c9';
  $pane = new stdClass();
  $pane->pid = 'new-4679df43-728d-4292-86a7-51719f55a3c1';
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
  $pane->uuid = '4679df43-728d-4292-86a7-51719f55a3c1';
  $display->content['new-4679df43-728d-4292-86a7-51719f55a3c1'] = $pane;
  $display->panels['title'][0] = 'new-4679df43-728d-4292-86a7-51719f55a3c1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:needs:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'needs_type';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:needs_type:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'section-wanteds';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Wanteds: %taxonomy_term:name';
  $display->uuid = '2a40a8bc-9b4c-4289-b373-7c1877984e92';
  $display->storage_type = '';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-25fc06b7-9749-4755-a4e8-4921cbdd27fe';
  $pane->panel = 'main';
  $pane->type = 'block';
  $pane->subtype = 'views-11f2e62e9ba498b3fbfc12e9adf560f4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
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
    'css_class' => 'pane--wanteds-search',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '25fc06b7-9749-4755-a4e8-4921cbdd27fe';
  $display->content['new-25fc06b7-9749-4755-a4e8-4921cbdd27fe'] = $pane;
  $display->panels['main'][0] = 'new-25fc06b7-9749-4755-a4e8-4921cbdd27fe';
  $pane = new stdClass();
  $pane->pid = 'new-ecc33213-d1ae-4755-a921-f73e53d496e9';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'needs_listing_pages-needs_listings';
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
  $pane->uuid = 'ecc33213-d1ae-4755-a921-f73e53d496e9';
  $display->content['new-ecc33213-d1ae-4755-a921-f73e53d496e9'] = $pane;
  $display->panels['main'][1] = 'new-ecc33213-d1ae-4755-a921-f73e53d496e9';
  $pane = new stdClass();
  $pane->pid = 'new-2f98ad98-03d7-46bf-b367-0b6d2137eea9';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-SypUgJyRaY4r4H8XXEUhVDSK8HdRRTXh';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Type of Need',
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
  $pane->uuid = '2f98ad98-03d7-46bf-b367-0b6d2137eea9';
  $display->content['new-2f98ad98-03d7-46bf-b367-0b6d2137eea9'] = $pane;
  $display->panels['sidebar'][0] = 'new-2f98ad98-03d7-46bf-b367-0b6d2137eea9';
  $pane = new stdClass();
  $pane->pid = 'new-f83f7d74-9d28-4422-ae1f-9bc746c6c994';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-A3IaAZnKqeOam2EsgK1ply2YiCO2bQCu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Need Status',
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
  $pane->uuid = 'f83f7d74-9d28-4422-ae1f-9bc746c6c994';
  $display->content['new-f83f7d74-9d28-4422-ae1f-9bc746c6c994'] = $pane;
  $display->panels['sidebar'][1] = 'new-f83f7d74-9d28-4422-ae1f-9bc746c6c994';
  $pane = new stdClass();
  $pane->pid = 'new-80ca320f-e742-4314-80d6-8920e2c03bc5';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ktuUcDeU1H96jbYnql373sKYWn3K0whj';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Date Needed By',
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
  $pane->uuid = '80ca320f-e742-4314-80d6-8920e2c03bc5';
  $display->content['new-80ca320f-e742-4314-80d6-8920e2c03bc5'] = $pane;
  $display->panels['sidebar'][2] = 'new-80ca320f-e742-4314-80d6-8920e2c03bc5';
  $pane = new stdClass();
  $pane->pid = 'new-90418a06-1cd0-4c43-ba9f-e0049909e92c';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Related Sector',
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
  $pane->uuid = '90418a06-1cd0-4c43-ba9f-e0049909e92c';
  $display->content['new-90418a06-1cd0-4c43-ba9f-e0049909e92c'] = $pane;
  $display->panels['sidebar'][3] = 'new-90418a06-1cd0-4c43-ba9f-e0049909e92c';
  $pane = new stdClass();
  $pane->pid = 'new-1585b4cc-eb27-40ba-9be8-461e70e84a48';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-bCPjY27nCxBH4nkThoEY1wSC0gxiyVjh';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Related Topic',
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
  $pane->uuid = '1585b4cc-eb27-40ba-9be8-461e70e84a48';
  $display->content['new-1585b4cc-eb27-40ba-9be8-461e70e84a48'] = $pane;
  $display->panels['sidebar'][4] = 'new-1585b4cc-eb27-40ba-9be8-461e70e84a48';
  $pane = new stdClass();
  $pane->pid = 'new-cd11122b-8998-4ded-907f-959822de11d6';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Related Region',
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
  $pane->uuid = 'cd11122b-8998-4ded-907f-959822de11d6';
  $display->content['new-cd11122b-8998-4ded-907f-959822de11d6'] = $pane;
  $display->panels['sidebar'][5] = 'new-cd11122b-8998-4ded-907f-959822de11d6';
  $pane = new stdClass();
  $pane->pid = 'new-a41dd45f-1f19-42bd-9aef-203decb3d999';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ywhMNNPPK10VxUzI5r1DA2bXUzT0ZTpZ';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Related Organization',
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
  $pane->uuid = 'a41dd45f-1f19-42bd-9aef-203decb3d999';
  $display->content['new-a41dd45f-1f19-42bd-9aef-203decb3d999'] = $pane;
  $display->panels['sidebar'][6] = 'new-a41dd45f-1f19-42bd-9aef-203decb3d999';
  $pane = new stdClass();
  $pane->pid = 'new-fe5f7216-6f10-4a58-9ca3-23fb9fe2ef50';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-gma6FfAxYTMNbkWcf3OH105GwOYGgofQ';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Finance Available?',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'fe5f7216-6f10-4a58-9ca3-23fb9fe2ef50';
  $display->content['new-fe5f7216-6f10-4a58-9ca3-23fb9fe2ef50'] = $pane;
  $display->panels['sidebar'][7] = 'new-fe5f7216-6f10-4a58-9ca3-23fb9fe2ef50';
  $pane = new stdClass();
  $pane->pid = 'new-1bb030f9-86d3-4450-8397-0fa30c49412b';
  $pane->panel = 'title';
  $pane->type = 'pane';
  $pane->subtype = 'wanted_type_landing_page';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--landing-intro',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1bb030f9-86d3-4450-8397-0fa30c49412b';
  $display->content['new-1bb030f9-86d3-4450-8397-0fa30c49412b'] = $pane;
  $display->panels['title'][0] = 'new-1bb030f9-86d3-4450-8397-0fa30c49412b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:needs_type:default'] = $panelizer;

  return $export;
}
