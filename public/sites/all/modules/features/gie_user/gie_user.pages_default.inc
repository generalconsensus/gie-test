<?php
/**
 * @file
 * gie_user.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gie_user_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_user_registration__user_registration';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'user_registration';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'User Registration',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user_registration',
  );
  $display = new panels_display();
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
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
  $display->title = '';
  $display->uuid = '1d1df997-7484-409b-9d4a-c703bae52afa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ee6d06f2-0db1-4f93-848f-ac56edec09ca';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'formblock-user_register';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'ee6d06f2-0db1-4f93-848f-ac56edec09ca';
    $display->content['new-ee6d06f2-0db1-4f93-848f-ac56edec09ca'] = $pane;
    $display->panels['main'][0] = 'new-ee6d06f2-0db1-4f93-848f-ac56edec09ca';
    $pane = new stdClass();
    $pane->pid = 'new-031308b6-8e61-4d26-b63c-89deecaf793f';
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
    $pane->uuid = '031308b6-8e61-4d26-b63c-89deecaf793f';
    $display->content['new-031308b6-8e61-4d26-b63c-89deecaf793f'] = $pane;
    $display->panels['title'][0] = 'new-031308b6-8e61-4d26-b63c-89deecaf793f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_user_registration__user_registration'] = $handler;

  return $export;
}
