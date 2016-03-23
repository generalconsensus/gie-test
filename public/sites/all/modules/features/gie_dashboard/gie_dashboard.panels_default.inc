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
  $mini->name = 'dashboard_follow';
  $mini->category = 'Dashboard';
  $mini->admin_title = 'Dashboard Follow';
  $mini->admin_description = 'This is the dashboard for following. ';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '09669c83-2b9e-4ee8-870c-306a361f4eba';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-065d1b82-aa4d-4690-afa0-3817acb7d334';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_users-panel_pane_1';
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
    $pane->uuid = '065d1b82-aa4d-4690-afa0-3817acb7d334';
    $display->content['new-065d1b82-aa4d-4690-afa0-3817acb7d334'] = $pane;
    $display->panels['middle'][0] = 'new-065d1b82-aa4d-4690-afa0-3817acb7d334';
    $pane = new stdClass();
    $pane->pid = 'new-62f32864-81b3-412a-907a-83cc049c28a4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'See All Exchange Users',
      'title' => '',
      'body' => '<a class="button button--highlight" href="/members">See all Exchange Users</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62f32864-81b3-412a-907a-83cc049c28a4';
    $display->content['new-62f32864-81b3-412a-907a-83cc049c28a4'] = $pane;
    $display->panels['middle'][1] = 'new-62f32864-81b3-412a-907a-83cc049c28a4';
    $pane = new stdClass();
    $pane->pid = 'new-29818a4a-293f-418d-a40f-f5bce0dff3fb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-panel_pane_2';
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
    $pane->uuid = '29818a4a-293f-418d-a40f-f5bce0dff3fb';
    $display->content['new-29818a4a-293f-418d-a40f-f5bce0dff3fb'] = $pane;
    $display->panels['middle'][2] = 'new-29818a4a-293f-418d-a40f-f5bce0dff3fb';
    $pane = new stdClass();
    $pane->pid = 'new-9b15831f-4ca1-4735-87a9-b196e09024b2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'See all Exchange Events',
      'title' => '',
      'body' => '<a class="button button--highlight" href="/events">See all Exchange Events</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9b15831f-4ca1-4735-87a9-b196e09024b2';
    $display->content['new-9b15831f-4ca1-4735-87a9-b196e09024b2'] = $pane;
    $display->panels['middle'][3] = 'new-9b15831f-4ca1-4735-87a9-b196e09024b2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_follow'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_recommendations';
  $mini->category = 'Dashboard';
  $mini->admin_title = 'Innovations';
  $mini->admin_description = 'Here is the Recommendations Dashboard Tab';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a14f11a-ef3e-421e-9a44-f572e32a8d61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-babaf937-9615-4c16-b543-72b943cf0ee8';
    $pane->panel = 'middle';
    $pane->type = 'innovations_recommendation';
    $pane->subtype = 'innovations_recommendation';
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
    $pane->uuid = 'babaf937-9615-4c16-b543-72b943cf0ee8';
    $display->content['new-babaf937-9615-4c16-b543-72b943cf0ee8'] = $pane;
    $display->panels['middle'][0] = 'new-babaf937-9615-4c16-b543-72b943cf0ee8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_recommendations'] = $mini;

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
    $pane->pid = 'new-10b04ffa-ead9-4a67-9dd3-13ae3df17d94';
    $pane->panel = 'bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'gie_data_viz-gie_data_viz_fund_count_chart';
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
    $pane->uuid = '10b04ffa-ead9-4a67-9dd3-13ae3df17d94';
    $display->content['new-10b04ffa-ead9-4a67-9dd3-13ae3df17d94'] = $pane;
    $display->panels['bottom_right'][0] = 'new-10b04ffa-ead9-4a67-9dd3-13ae3df17d94';
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
