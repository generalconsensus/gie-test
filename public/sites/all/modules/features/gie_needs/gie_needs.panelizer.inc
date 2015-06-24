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
  $panelizer->name = 'node:needs:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'needs';
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
  $display->content = array();
  $display->panels = array();
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
    $pane->pid = 'new-2a03ff3a-72df-4f7d-badb-688534d2caa8';
    $pane->panel = 'main';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'page_header',
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
    $pane->uuid = '2a03ff3a-72df-4f7d-badb-688534d2caa8';
    $display->content['new-2a03ff3a-72df-4f7d-badb-688534d2caa8'] = $pane;
    $display->panels['main'][1] = 'new-2a03ff3a-72df-4f7d-badb-688534d2caa8';
    $pane = new stdClass();
    $pane->pid = 'new-cf7940c7-ecf4-45f9-9286-675966d30b7b';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cf7940c7-ecf4-45f9-9286-675966d30b7b';
    $display->content['new-cf7940c7-ecf4-45f9-9286-675966d30b7b'] = $pane;
    $display->panels['main'][2] = 'new-cf7940c7-ecf4-45f9-9286-675966d30b7b';
    $pane = new stdClass();
    $pane->pid = 'new-1e94434f-f1c3-41fb-b480-d2866f301073';
    $pane->panel = 'main_sidebar';
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
    $display->panels['main_sidebar'][0] = 'new-1e94434f-f1c3-41fb-b480-d2866f301073';
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
  $panelizer->name = 'taxonomy_term:needs_type:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'needs_type';
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
  $display->title = 'Exchange InDemand: %taxonomy_term:name-field';
  $display->uuid = '2a40a8bc-9b4c-4289-b373-7c1877984e92';
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ecc33213-d1ae-4755-a921-f73e53d496e9';
    $display->content['new-ecc33213-d1ae-4755-a921-f73e53d496e9'] = $pane;
    $display->panels['main'][0] = 'new-ecc33213-d1ae-4755-a921-f73e53d496e9';
    $pane = new stdClass();
    $pane->pid = 'new-8716243d-ce1d-48aa-a01c-9f3695a6c602';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sectors',
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
    $pane->uuid = '8716243d-ce1d-48aa-a01c-9f3695a6c602';
    $display->content['new-8716243d-ce1d-48aa-a01c-9f3695a6c602'] = $pane;
    $display->panels['sidebar'][0] = 'new-8716243d-ce1d-48aa-a01c-9f3695a6c602';
    $pane = new stdClass();
    $pane->pid = 'new-5608255e-6289-4c4d-b406-e76fb9a78183';
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
    $pane->uuid = '5608255e-6289-4c4d-b406-e76fb9a78183';
    $display->content['new-5608255e-6289-4c4d-b406-e76fb9a78183'] = $pane;
    $display->panels['title'][0] = 'new-5608255e-6289-4c4d-b406-e76fb9a78183';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['taxonomy_term:needs_type:default'] = $panelizer;

  return $export;
}
