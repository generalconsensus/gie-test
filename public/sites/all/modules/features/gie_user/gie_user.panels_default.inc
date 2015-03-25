<?php
/**
 * @file
 * gie_user.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function gie_user_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'user_overview';
  $mini->category = '';
  $mini->admin_title = 'User Overview';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'id' => 1,
    ),
  );
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
  $display->uuid = '901a50d3-3f3d-48fc-8e38-cbf55587412e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af873ad3-7b4b-466e-9189-7fc39d9845f0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_user_1',
      'override_title' => 1,
      'override_title_text' => 'About Me',
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
    $pane->uuid = 'af873ad3-7b4b-466e-9189-7fc39d9845f0';
    $display->content['new-af873ad3-7b4b-466e-9189-7fc39d9845f0'] = $pane;
    $display->panels['middle'][0] = 'new-af873ad3-7b4b-466e-9189-7fc39d9845f0';
    $pane = new stdClass();
    $pane->pid = 'new-45b193b6-feaf-4332-8c28-5c0c35ae57a6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'expertise-expertise_pane';
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
    $pane->uuid = '45b193b6-feaf-4332-8c28-5c0c35ae57a6';
    $display->content['new-45b193b6-feaf-4332-8c28-5c0c35ae57a6'] = $pane;
    $display->panels['middle'][1] = 'new-45b193b6-feaf-4332-8c28-5c0c35ae57a6';
    $pane = new stdClass();
    $pane->pid = 'new-3d55c728-2ca9-44d6-b24c-6202424274bf';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'areas_of_interest-sectors';
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
    $pane->uuid = '3d55c728-2ca9-44d6-b24c-6202424274bf';
    $display->content['new-3d55c728-2ca9-44d6-b24c-6202424274bf'] = $pane;
    $display->panels['middle'][2] = 'new-3d55c728-2ca9-44d6-b24c-6202424274bf';
    $pane = new stdClass();
    $pane->pid = 'new-4fad3f09-e37e-4121-a87f-274ada8bdeb9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'areas_of_interest-topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4fad3f09-e37e-4121-a87f-274ada8bdeb9';
    $display->content['new-4fad3f09-e37e-4121-a87f-274ada8bdeb9'] = $pane;
    $display->panels['middle'][3] = 'new-4fad3f09-e37e-4121-a87f-274ada8bdeb9';
    $pane = new stdClass();
    $pane->pid = 'new-72b5e01e-7d8b-46ba-a4d8-22f3fd7aaf89';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'areas_of_interest-other_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '72b5e01e-7d8b-46ba-a4d8-22f3fd7aaf89';
    $display->content['new-72b5e01e-7d8b-46ba-a4d8-22f3fd7aaf89'] = $pane;
    $display->panels['middle'][4] = 'new-72b5e01e-7d8b-46ba-a4d8-22f3fd7aaf89';
    $pane = new stdClass();
    $pane->pid = 'new-c66f526b-5b28-415b-9872-be5e1a40e60c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_programs-programs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c66f526b-5b28-415b-9872-be5e1a40e60c';
    $display->content['new-c66f526b-5b28-415b-9872-be5e1a40e60c'] = $pane;
    $display->panels['middle'][5] = 'new-c66f526b-5b28-415b-9872-be5e1a40e60c';
    $pane = new stdClass();
    $pane->pid = 'new-c599e838-f017-4b15-9436-974d439e2f8f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_organizations-organizations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c599e838-f017-4b15-9436-974d439e2f8f';
    $display->content['new-c599e838-f017-4b15-9436-974d439e2f8f'] = $pane;
    $display->panels['middle'][6] = 'new-c599e838-f017-4b15-9436-974d439e2f8f';
    $pane = new stdClass();
    $pane->pid = 'new-03bc2437-7584-48a2-b42b-4d031749a090';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_regions-regions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '03bc2437-7584-48a2-b42b-4d031749a090';
    $display->content['new-03bc2437-7584-48a2-b42b-4d031749a090'] = $pane;
    $display->panels['middle'][7] = 'new-03bc2437-7584-48a2-b42b-4d031749a090';
    $pane = new stdClass();
    $pane->pid = 'new-d8818ddf-58e3-4665-bf0b-7bbda5972a68';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_education';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_user_1',
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'd8818ddf-58e3-4665-bf0b-7bbda5972a68';
    $display->content['new-d8818ddf-58e3-4665-bf0b-7bbda5972a68'] = $pane;
    $display->panels['middle'][8] = 'new-d8818ddf-58e3-4665-bf0b-7bbda5972a68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-af873ad3-7b4b-466e-9189-7fc39d9845f0';
  $mini->display = $display;
  $export['user_overview'] = $mini;

  return $export;
}
