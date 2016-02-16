<?php
/**
 * @file
 * gie_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog';
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
  $display->uuid = '63b7a574-ceb4-4182-a823-909a6fa1db19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-83638ed4-817c-43fc-aafb-e3993f857e6e';
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
    $pane->uuid = '83638ed4-817c-43fc-aafb-e3993f857e6e';
    $display->content['new-83638ed4-817c-43fc-aafb-e3993f857e6e'] = $pane;
    $display->panels['main'][0] = 'new-83638ed4-817c-43fc-aafb-e3993f857e6e';
    $pane = new stdClass();
    $pane->pid = 'new-a295da1f-7c4b-4cb0-868f-f461fdde3e17';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a295da1f-7c4b-4cb0-868f-f461fdde3e17';
    $display->content['new-a295da1f-7c4b-4cb0-868f-f461fdde3e17'] = $pane;
    $display->panels['main'][1] = 'new-a295da1f-7c4b-4cb0-868f-f461fdde3e17';
    $pane = new stdClass();
    $pane->pid = 'new-66ee970f-4833-445b-8ee5-41a4a1bc505c';
    $pane->panel = 'main';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '66ee970f-4833-445b-8ee5-41a4a1bc505c';
    $display->content['new-66ee970f-4833-445b-8ee5-41a4a1bc505c'] = $pane;
    $display->panels['main'][2] = 'new-66ee970f-4833-445b-8ee5-41a4a1bc505c';
    $pane = new stdClass();
    $pane->pid = 'new-9abc7508-69dc-40dd-a938-4da39aad555b';
    $pane->panel = 'main_sidebar';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'contact',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Point of Contact',
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
    $pane->uuid = '9abc7508-69dc-40dd-a938-4da39aad555b';
    $display->content['new-9abc7508-69dc-40dd-a938-4da39aad555b'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-9abc7508-69dc-40dd-a938-4da39aad555b';
    $pane = new stdClass();
    $pane->pid = 'new-a82359f9-3af6-44f6-bf31-a0dd2a46c786';
    $pane->panel = 'main_sidebar';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a82359f9-3af6-44f6-bf31-a0dd2a46c786';
    $display->content['new-a82359f9-3af6-44f6-bf31-a0dd2a46c786'] = $pane;
    $display->panels['main_sidebar'][1] = 'new-a82359f9-3af6-44f6-bf31-a0dd2a46c786';
    $pane = new stdClass();
    $pane->pid = 'new-ba733308-40bd-4d79-96b8-2b8f55d6a97a';
    $pane->panel = 'main_sidebar';
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
    $pane->uuid = 'ba733308-40bd-4d79-96b8-2b8f55d6a97a';
    $display->content['new-ba733308-40bd-4d79-96b8-2b8f55d6a97a'] = $pane;
    $display->panels['main_sidebar'][2] = 'new-ba733308-40bd-4d79-96b8-2b8f55d6a97a';
    $pane = new stdClass();
    $pane->pid = 'new-4a695763-ba35-4ea1-8a31-a6e6da8b9f60';
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
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--button',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4a695763-ba35-4ea1-8a31-a6e6da8b9f60';
    $display->content['new-4a695763-ba35-4ea1-8a31-a6e6da8b9f60'] = $pane;
    $display->panels['main_sidebar'][3] = 'new-4a695763-ba35-4ea1-8a31-a6e6da8b9f60';
    $pane = new stdClass();
    $pane->pid = 'new-75303461-50f5-4287-a2b6-bc876fc84b6d';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This Blog? <p>Add it to your favorites.</p>',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '75303461-50f5-4287-a2b6-bc876fc84b6d';
    $display->content['new-75303461-50f5-4287-a2b6-bc876fc84b6d'] = $pane;
    $display->panels['main_sidebar'][4] = 'new-75303461-50f5-4287-a2b6-bc876fc84b6d';
    $pane = new stdClass();
    $pane->pid = 'new-dfb3f84d-c154-402e-a99a-1367f8ac5683';
    $pane->panel = 'main_sidebar';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'details',
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
    $pane->uuid = 'dfb3f84d-c154-402e-a99a-1367f8ac5683';
    $display->content['new-dfb3f84d-c154-402e-a99a-1367f8ac5683'] = $pane;
    $display->panels['main_sidebar'][5] = 'new-dfb3f84d-c154-402e-a99a-1367f8ac5683';
    $pane = new stdClass();
    $pane->pid = 'new-25cb17cd-8d9c-4b1f-98dd-65f17f269fe0';
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
    $pane->uuid = '25cb17cd-8d9c-4b1f-98dd-65f17f269fe0';
    $display->content['new-25cb17cd-8d9c-4b1f-98dd-65f17f269fe0'] = $pane;
    $display->panels['title'][0] = 'new-25cb17cd-8d9c-4b1f-98dd-65f17f269fe0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:blog:default'] = $panelizer;

  return $export;
}
