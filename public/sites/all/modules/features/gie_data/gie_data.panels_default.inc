<?php
/**
 * @file
 * gie_data.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gie_data_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'data_analytics_blocks';
  $mini->category = '';
  $mini->admin_title = 'Data Analytics Blocks';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '829ab526-9e6a-457f-a1b4-1b2ecfb25bff';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c39a6c86-075d-4d9d-8c43-d78d27a7513c';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'ga-country_visitors';
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
    $pane->uuid = 'c39a6c86-075d-4d9d-8c43-d78d27a7513c';
    $display->content['new-c39a6c86-075d-4d9d-8c43-d78d27a7513c'] = $pane;
    $display->panels['bottom'][0] = 'new-c39a6c86-075d-4d9d-8c43-d78d27a7513c';
    $pane = new stdClass();
    $pane->pid = 'new-37ac250c-5427-4a94-8d3d-9bb4759d1348';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ga-session_length';
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
    $pane->uuid = '37ac250c-5427-4a94-8d3d-9bb4759d1348';
    $display->content['new-37ac250c-5427-4a94-8d3d-9bb4759d1348'] = $pane;
    $display->panels['left'][0] = 'new-37ac250c-5427-4a94-8d3d-9bb4759d1348';
    $pane = new stdClass();
    $pane->pid = 'new-6c05d9ed-cea0-40ed-824a-343e00b150bd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ga-user_count';
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
    $pane->uuid = '6c05d9ed-cea0-40ed-824a-343e00b150bd';
    $display->content['new-6c05d9ed-cea0-40ed-824a-343e00b150bd'] = $pane;
    $display->panels['middle'][0] = 'new-6c05d9ed-cea0-40ed-824a-343e00b150bd';
    $pane = new stdClass();
    $pane->pid = 'new-149ee779-8b90-42a9-b9fe-908882d12842';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ga-return_user_traffic';
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
    $pane->uuid = '149ee779-8b90-42a9-b9fe-908882d12842';
    $display->content['new-149ee779-8b90-42a9-b9fe-908882d12842'] = $pane;
    $display->panels['right'][0] = 'new-149ee779-8b90-42a9-b9fe-908882d12842';
    $pane = new stdClass();
    $pane->pid = 'new-5b18c533-cb4a-4808-b49f-479079ac6d39';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Data Analytics title',
      'title' => '',
      'body' => '<h1>Exchange Analytics&nbsp;</h1>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b18c533-cb4a-4808-b49f-479079ac6d39';
    $display->content['new-5b18c533-cb4a-4808-b49f-479079ac6d39'] = $pane;
    $display->panels['top'][0] = 'new-5b18c533-cb4a-4808-b49f-479079ac6d39';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-37ac250c-5427-4a94-8d3d-9bb4759d1348';
  $mini->display = $display;
  $export['data_analytics_blocks'] = $mini;

  return $export;
}
