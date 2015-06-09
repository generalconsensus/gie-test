<?php
/**
 * @file
 * events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
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
  $display->uuid = '28ed67bb-217c-4e2c-ba0d-1833ce1b76b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-da000b27-5f80-47ce-af7e-719230f086c3';
    $pane->panel = 'bottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da000b27-5f80-47ce-af7e-719230f086c3';
    $display->content['new-da000b27-5f80-47ce-af7e-719230f086c3'] = $pane;
    $display->panels['bottom'][0] = 'new-da000b27-5f80-47ce-af7e-719230f086c3';
    $pane = new stdClass();
    $pane->pid = 'new-fc6fe658-b854-4c4e-ba88-e5e4f5a5b139';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_organizers-users_attending';
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
    $pane->uuid = 'fc6fe658-b854-4c4e-ba88-e5e4f5a5b139';
    $display->content['new-fc6fe658-b854-4c4e-ba88-e5e4f5a5b139'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-fc6fe658-b854-4c4e-ba88-e5e4f5a5b139';
    $pane = new stdClass();
    $pane->pid = 'new-7258890d-118f-499e-9cec-b533bb909fa9';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_organizers-event_organizers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Event Organizers',
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
    $pane->uuid = '7258890d-118f-499e-9cec-b533bb909fa9';
    $display->content['new-7258890d-118f-499e-9cec-b533bb909fa9'] = $pane;
    $display->panels['bottom_sidebar'][1] = 'new-7258890d-118f-499e-9cec-b533bb909fa9';
    $pane = new stdClass();
    $pane->pid = 'new-d9905e66-a7b2-4b5c-a931-3fbac4f89020';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_at_a_glance-panel_pane_2';
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
    $pane->uuid = 'd9905e66-a7b2-4b5c-a931-3fbac4f89020';
    $display->content['new-d9905e66-a7b2-4b5c-a931-3fbac4f89020'] = $pane;
    $display->panels['bottom_sidebar'][2] = 'new-d9905e66-a7b2-4b5c-a931-3fbac4f89020';
    $pane = new stdClass();
    $pane->pid = 'new-35a7698b-f3a8-41bb-b20f-b9704bea3b25';
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
    $pane->uuid = '35a7698b-f3a8-41bb-b20f-b9704bea3b25';
    $display->content['new-35a7698b-f3a8-41bb-b20f-b9704bea3b25'] = $pane;
    $display->panels['box_first'][0] = 'new-35a7698b-f3a8-41bb-b20f-b9704bea3b25';
    $pane = new stdClass();
    $pane->pid = 'new-35b9e436-b121-4b48-835a-7ddf22dd7e2c';
    $pane->panel = 'box_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_at_a_glance-panel_pane_1';
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
    $pane->uuid = '35b9e436-b121-4b48-835a-7ddf22dd7e2c';
    $display->content['new-35b9e436-b121-4b48-835a-7ddf22dd7e2c'] = $pane;
    $display->panels['box_second'][0] = 'new-35b9e436-b121-4b48-835a-7ddf22dd7e2c';
    $pane = new stdClass();
    $pane->pid = 'new-02c600a3-cb61-4aff-a215-603b5a7525bf';
    $pane->panel = 'box_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_organizers-poc_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '02c600a3-cb61-4aff-a215-603b5a7525bf';
    $display->content['new-02c600a3-cb61-4aff-a215-603b5a7525bf'] = $pane;
    $display->panels['box_third'][0] = 'new-02c600a3-cb61-4aff-a215-603b5a7525bf';
    $pane = new stdClass();
    $pane->pid = 'new-6dec523a-9730-47f6-a818-d031b1b03b2c';
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
    $pane->uuid = '6dec523a-9730-47f6-a818-d031b1b03b2c';
    $display->content['new-6dec523a-9730-47f6-a818-d031b1b03b2c'] = $pane;
    $display->panels['main'][0] = 'new-6dec523a-9730-47f6-a818-d031b1b03b2c';
    $pane = new stdClass();
    $pane->pid = 'new-a080148b-fa28-4f45-a4cc-af7c069d88bb';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_description';
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
    $pane->uuid = 'a080148b-fa28-4f45-a4cc-af7c069d88bb';
    $display->content['new-a080148b-fa28-4f45-a4cc-af7c069d88bb'] = $pane;
    $display->panels['main'][1] = 'new-a080148b-fa28-4f45-a4cc-af7c069d88bb';
    $pane = new stdClass();
    $pane->pid = 'new-fbafd9b3-f396-4e80-a4ef-b594e5eacf4e';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:sharethis';
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
    $pane->uuid = 'fbafd9b3-f396-4e80-a4ef-b594e5eacf4e';
    $display->content['new-fbafd9b3-f396-4e80-a4ef-b594e5eacf4e'] = $pane;
    $display->panels['main'][2] = 'new-fbafd9b3-f396-4e80-a4ef-b594e5eacf4e';
    $pane = new stdClass();
    $pane->pid = 'new-f67e8518-4780-4fd4-b13a-9d1705d772ac';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'attending',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Attending This Event? <p>Click here if your going! <br>This is not registration.</p>',
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
    $pane->uuid = 'f67e8518-4780-4fd4-b13a-9d1705d772ac';
    $display->content['new-f67e8518-4780-4fd4-b13a-9d1705d772ac'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-f67e8518-4780-4fd4-b13a-9d1705d772ac';
    $pane = new stdClass();
    $pane->pid = 'new-a0ec12a1-eda2-4794-bfe1-e1ff9dbd52ed';
    $pane->panel = 'title';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'a0ec12a1-eda2-4794-bfe1-e1ff9dbd52ed';
    $display->content['new-a0ec12a1-eda2-4794-bfe1-e1ff9dbd52ed'] = $pane;
    $display->panels['title'][0] = 'new-a0ec12a1-eda2-4794-bfe1-e1ff9dbd52ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  return $export;
}
