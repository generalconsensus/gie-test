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
  $mini->name = 'dashboard_help';
  $mini->category = '';
  $mini->admin_title = 'Dashboard Help';
  $mini->admin_description = '';
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
  $display->uuid = 'f8bda12c-6c00-4666-b3fa-c1f0ef6766ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e8a52bcc-bdbc-4688-84a3-b5c31972aacb';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-innovations_help';
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
    $pane->uuid = 'e8a52bcc-bdbc-4688-84a3-b5c31972aacb';
    $display->content['new-e8a52bcc-bdbc-4688-84a3-b5c31972aacb'] = $pane;
    $display->panels['middle'][0] = 'new-e8a52bcc-bdbc-4688-84a3-b5c31972aacb';
    $pane = new stdClass();
    $pane->pid = 'new-089b2218-83b2-49dc-bbf6-96df33f6e4a0';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-resource_assistance';
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
    $pane->uuid = '089b2218-83b2-49dc-bbf6-96df33f6e4a0';
    $display->content['new-089b2218-83b2-49dc-bbf6-96df33f6e4a0'] = $pane;
    $display->panels['middle'][1] = 'new-089b2218-83b2-49dc-bbf6-96df33f6e4a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e8a52bcc-bdbc-4688-84a3-b5c31972aacb';
  $mini->display = $display;
  $export['dashboard_help'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_recommendations';
  $mini->category = 'Dashboard';
  $mini->admin_title = 'Dashboard Recommendations';
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
    $pane->pid = 'new-eef084ff-8d95-486b-bb96-82daf6cdfe7b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-dashboard_up';
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
    $pane->uuid = 'eef084ff-8d95-486b-bb96-82daf6cdfe7b';
    $display->content['new-eef084ff-8d95-486b-bb96-82daf6cdfe7b'] = $pane;
    $display->panels['middle'][0] = 'new-eef084ff-8d95-486b-bb96-82daf6cdfe7b';
    $pane = new stdClass();
    $pane->pid = 'new-7e5363ae-edcc-43e3-926e-799a7c8cb762';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-dashboard_reco';
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
    $pane->uuid = '7e5363ae-edcc-43e3-926e-799a7c8cb762';
    $display->content['new-7e5363ae-edcc-43e3-926e-799a7c8cb762'] = $pane;
    $display->panels['middle'][1] = 'new-7e5363ae-edcc-43e3-926e-799a7c8cb762';
    $pane = new stdClass();
    $pane->pid = 'new-d55f186a-0880-48ec-b7db-6d7a4966cf57';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard_users-dashboard_users';
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
    $pane->uuid = 'd55f186a-0880-48ec-b7db-6d7a4966cf57';
    $display->content['new-d55f186a-0880-48ec-b7db-6d7a4966cf57'] = $pane;
    $display->panels['middle'][2] = 'new-d55f186a-0880-48ec-b7db-6d7a4966cf57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-eef084ff-8d95-486b-bb96-82daf6cdfe7b';
  $mini->display = $display;
  $export['dashboard_recommendations'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_similar';
  $mini->category = 'Dashboard';
  $mini->admin_title = 'Dashboard Similar';
  $mini->admin_description = 'Here is the Similar content Dashboard Tab';
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
    $pane->pid = 'new-a9ed824e-80bd-41f9-b72b-ad710d65fd5a';
    $pane->panel = 'middle';
    $pane->type = 'more_like_this';
    $pane->subtype = 'more_like_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'innovation',
      'override_title' => 1,
      'override_title_text' => 'Similar Innovations',
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
    $pane->uuid = 'a9ed824e-80bd-41f9-b72b-ad710d65fd5a';
    $display->content['new-a9ed824e-80bd-41f9-b72b-ad710d65fd5a'] = $pane;
    $display->panels['middle'][0] = 'new-a9ed824e-80bd-41f9-b72b-ad710d65fd5a';
    $pane = new stdClass();
    $pane->pid = 'new-d8884fd9-9a91-4d61-98a5-357b9ffce4a5';
    $pane->panel = 'middle';
    $pane->type = 'more_like_this';
    $pane->subtype = 'more_like_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'resource',
      'override_title' => 1,
      'override_title_text' => 'Similar Resources',
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
    $pane->uuid = 'd8884fd9-9a91-4d61-98a5-357b9ffce4a5';
    $display->content['new-d8884fd9-9a91-4d61-98a5-357b9ffce4a5'] = $pane;
    $display->panels['middle'][1] = 'new-d8884fd9-9a91-4d61-98a5-357b9ffce4a5';
    $pane = new stdClass();
    $pane->pid = 'new-45e541fb-448b-4654-8615-c3b2c9a384d7';
    $pane->panel = 'middle';
    $pane->type = 'more_like_this';
    $pane->subtype = 'more_like_this';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'funding',
      'override_title' => 1,
      'override_title_text' => 'Similar Funding',
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
    $pane->uuid = '45e541fb-448b-4654-8615-c3b2c9a384d7';
    $display->content['new-45e541fb-448b-4654-8615-c3b2c9a384d7'] = $pane;
    $display->panels['middle'][2] = 'new-45e541fb-448b-4654-8615-c3b2c9a384d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_similar'] = $mini;

  return $export;
}
