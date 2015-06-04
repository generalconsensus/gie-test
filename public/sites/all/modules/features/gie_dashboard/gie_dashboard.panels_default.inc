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
    $pane->pid = 'new-c875b34b-e2e7-486a-ac36-3eea00f0e85c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'dashboard-panel_pane_1';
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
    $pane->uuid = 'c875b34b-e2e7-486a-ac36-3eea00f0e85c';
    $display->content['new-c875b34b-e2e7-486a-ac36-3eea00f0e85c'] = $pane;
    $display->panels['middle'][0] = 'new-c875b34b-e2e7-486a-ac36-3eea00f0e85c';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '065d1b82-aa4d-4690-afa0-3817acb7d334';
    $display->content['new-065d1b82-aa4d-4690-afa0-3817acb7d334'] = $pane;
    $display->panels['middle'][1] = 'new-065d1b82-aa4d-4690-afa0-3817acb7d334';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c875b34b-e2e7-486a-ac36-3eea00f0e85c';
  $mini->display = $display;
  $export['dashboard_follow'] = $mini;

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

  return $export;
}
