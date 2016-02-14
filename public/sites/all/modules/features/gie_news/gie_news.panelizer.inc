<?php
/**
 * @file
 * gie_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gie_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
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
  $display->uuid = 'ca910a6f-d025-4b9b-a2ff-5b892b28fc6a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5461053c-34f1-40f4-b406-666c11f4efd4';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--full-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5461053c-34f1-40f4-b406-666c11f4efd4';
    $display->content['new-5461053c-34f1-40f4-b406-666c11f4efd4'] = $pane;
    $display->panels['bottom'][0] = 'new-5461053c-34f1-40f4-b406-666c11f4efd4';
    $pane = new stdClass();
    $pane->pid = 'new-aa1da178-aa09-4bd3-aed3-7f0095f8ec53';
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
    $pane->uuid = 'aa1da178-aa09-4bd3-aed3-7f0095f8ec53';
    $display->content['new-aa1da178-aa09-4bd3-aed3-7f0095f8ec53'] = $pane;
    $display->panels['bottom'][1] = 'new-aa1da178-aa09-4bd3-aed3-7f0095f8ec53';
    $pane = new stdClass();
    $pane->pid = 'new-d8eed782-0eab-4aeb-b5e5-44e8c41117b0';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Like This News? <p>Add it to your favorites.</p>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8eed782-0eab-4aeb-b5e5-44e8c41117b0';
    $display->content['new-d8eed782-0eab-4aeb-b5e5-44e8c41117b0'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-d8eed782-0eab-4aeb-b5e5-44e8c41117b0';
    $pane = new stdClass();
    $pane->pid = 'new-02f7daf0-c4c0-4664-bcbf-feae602bf597';
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
    $pane->uuid = '02f7daf0-c4c0-4664-bcbf-feae602bf597';
    $display->content['new-02f7daf0-c4c0-4664-bcbf-feae602bf597'] = $pane;
    $display->panels['box_first'][0] = 'new-02f7daf0-c4c0-4664-bcbf-feae602bf597';
    $pane = new stdClass();
    $pane->pid = 'new-ce7bc101-34e3-4fba-a203-2fc676852fba';
    $pane->panel = 'box_first';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce7bc101-34e3-4fba-a203-2fc676852fba';
    $display->content['new-ce7bc101-34e3-4fba-a203-2fc676852fba'] = $pane;
    $display->panels['box_first'][1] = 'new-ce7bc101-34e3-4fba-a203-2fc676852fba';
    $pane = new stdClass();
    $pane->pid = 'new-7bdbf82b-bb5b-41ea-94e5-4bd308bdaee8';
    $pane->panel = 'box_first';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7bdbf82b-bb5b-41ea-94e5-4bd308bdaee8';
    $display->content['new-7bdbf82b-bb5b-41ea-94e5-4bd308bdaee8'] = $pane;
    $display->panels['box_first'][2] = 'new-7bdbf82b-bb5b-41ea-94e5-4bd308bdaee8';
    $pane = new stdClass();
    $pane->pid = 'new-729d8276-e6bb-49c7-ad2b-b4644aa26ad9';
    $pane->panel = 'box_second';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'details',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Details',
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
    $pane->uuid = '729d8276-e6bb-49c7-ad2b-b4644aa26ad9';
    $display->content['new-729d8276-e6bb-49c7-ad2b-b4644aa26ad9'] = $pane;
    $display->panels['box_second'][0] = 'new-729d8276-e6bb-49c7-ad2b-b4644aa26ad9';
    $pane = new stdClass();
    $pane->pid = 'new-6c8f9c49-86d7-40a2-a868-2ae0aa3b0d11';
    $pane->panel = 'box_third';
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
    $pane->uuid = '6c8f9c49-86d7-40a2-a868-2ae0aa3b0d11';
    $display->content['new-6c8f9c49-86d7-40a2-a868-2ae0aa3b0d11'] = $pane;
    $display->panels['box_third'][0] = 'new-6c8f9c49-86d7-40a2-a868-2ae0aa3b0d11';
    $pane = new stdClass();
    $pane->pid = 'new-1fe34f2e-da60-4f0d-938b-574fa784b928';
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
    $pane->uuid = '1fe34f2e-da60-4f0d-938b-574fa784b928';
    $display->content['new-1fe34f2e-da60-4f0d-938b-574fa784b928'] = $pane;
    $display->panels['main'][0] = 'new-1fe34f2e-da60-4f0d-938b-574fa784b928';
    $pane = new stdClass();
    $pane->pid = 'new-9bb7f804-a2fc-482a-a6ce-4ca4e7eeec9a';
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
    $pane->uuid = '9bb7f804-a2fc-482a-a6ce-4ca4e7eeec9a';
    $display->content['new-9bb7f804-a2fc-482a-a6ce-4ca4e7eeec9a'] = $pane;
    $display->panels['title'][0] = 'new-9bb7f804-a2fc-482a-a6ce-4ca4e7eeec9a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  return $export;
}
