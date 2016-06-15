<?php
/**
 * @file
 * gie_dashboard.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gie_dashboard_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'whats_new_tab';
  $mini->category = 'Dashboard';
  $mini->admin_title = 'Whats New Tab';
  $mini->admin_description = 'What\'s New Mini Panel';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'dashboard';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'highlight' => NULL,
      'row1' => NULL,
      'row2_first' => NULL,
      'row2_second' => NULL,
      'row2_third' => NULL,
      'row3' => NULL,
      'row4_first' => NULL,
      'row4_second' => NULL,
      'row4_third' => NULL,
      'row5' => NULL,
      'row6_first' => NULL,
      'row6_second' => NULL,
      'row6_third' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7b9342dd-3513-4fff-8815-94d944138a5b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61de17ba-4fe1-45e7-9b02-f9dd4e6144a1';
    $pane->panel = 'bottom_left';
    $pane->type = 'views';
    $pane->subtype = 'dashboard_new_users';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
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
    $pane->uuid = '61de17ba-4fe1-45e7-9b02-f9dd4e6144a1';
    $display->content['new-61de17ba-4fe1-45e7-9b02-f9dd4e6144a1'] = $pane;
    $display->panels['bottom_left'][0] = 'new-61de17ba-4fe1-45e7-9b02-f9dd4e6144a1';
    $pane = new stdClass();
    $pane->pid = 'new-47ded4f1-13e0-4bda-bc26-1d6a05e44307';
    $pane->panel = 'bottom_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_page_taxonomy_views-data_sector_funding';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--dashboard-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47ded4f1-13e0-4bda-bc26-1d6a05e44307';
    $display->content['new-47ded4f1-13e0-4bda-bc26-1d6a05e44307'] = $pane;
    $display->panels['bottom_right'][0] = 'new-47ded4f1-13e0-4bda-bc26-1d6a05e44307';
    $pane = new stdClass();
    $pane->pid = 'new-1a830965-2fe2-438a-9ee1-295e2136f02b';
    $pane->panel = 'main';
    $pane->type = 'dashboard_exchange_updates';
    $pane->subtype = 'dashboard_exchange_updates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => '',
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
    $pane->uuid = '1a830965-2fe2-438a-9ee1-295e2136f02b';
    $display->content['new-1a830965-2fe2-438a-9ee1-295e2136f02b'] = $pane;
    $display->panels['main'][0] = 'new-1a830965-2fe2-438a-9ee1-295e2136f02b';
    $pane = new stdClass();
    $pane->pid = 'new-c49b8b82-75cb-4b45-951f-80086dd1e305';
    $pane->panel = 'main';
    $pane->type = 'dashboard_featured_items';
    $pane->subtype = 'dashboard_featured_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => '',
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
    $pane->uuid = 'c49b8b82-75cb-4b45-951f-80086dd1e305';
    $display->content['new-c49b8b82-75cb-4b45-951f-80086dd1e305'] = $pane;
    $display->panels['main'][1] = 'new-c49b8b82-75cb-4b45-951f-80086dd1e305';
    $pane = new stdClass();
    $pane->pid = 'new-98dad3b5-e78b-472a-a9a3-da216001f186';
    $pane->panel = 'sidebar';
    $pane->type = 'dashboard_notification_center';
    $pane->subtype = 'dashboard_notification_center';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => '',
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
    $pane->uuid = '98dad3b5-e78b-472a-a9a3-da216001f186';
    $display->content['new-98dad3b5-e78b-472a-a9a3-da216001f186'] = $pane;
    $display->panels['sidebar'][0] = 'new-98dad3b5-e78b-472a-a9a3-da216001f186';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['whats_new_tab'] = $mini;

  return $export;
}
