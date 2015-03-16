<?php
/**
 * @file
 * gie_innovation.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gie_innovation_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__innovation';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Innovation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'innovation',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'innovation' => 'innovation',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'hero' => NULL,
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
  $display->uuid = '220a60e6-90f9-4227-a1e8-d053f38d0fb8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a8a41907-3329-4826-acc5-7dc222c71592';
    $pane->panel = 'bottom';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'About This Innovation',
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
    $pane->uuid = 'a8a41907-3329-4826-acc5-7dc222c71592';
    $display->content['new-a8a41907-3329-4826-acc5-7dc222c71592'] = $pane;
    $display->panels['bottom'][0] = 'new-a8a41907-3329-4826-acc5-7dc222c71592';
    $pane = new stdClass();
    $pane->pid = 'new-9447d5e9-e6ee-4807-8065-d94701887346';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'innovation_team';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Innovation Team',
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
    $pane->uuid = '9447d5e9-e6ee-4807-8065-d94701887346';
    $display->content['new-9447d5e9-e6ee-4807-8065-d94701887346'] = $pane;
    $display->panels['bottom_sidebar'][0] = 'new-9447d5e9-e6ee-4807-8065-d94701887346';
    $pane = new stdClass();
    $pane->pid = 'new-64f4772c-3c94-430a-9ffd-5bd25b4cc8cb';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'funded_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Funded By',
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
    $pane->uuid = '64f4772c-3c94-430a-9ffd-5bd25b4cc8cb';
    $display->content['new-64f4772c-3c94-430a-9ffd-5bd25b4cc8cb'] = $pane;
    $display->panels['bottom_sidebar'][1] = 'new-64f4772c-3c94-430a-9ffd-5bd25b4cc8cb';
    $pane = new stdClass();
    $pane->pid = 'new-3a979e5c-0f89-4bbe-9a49-c8d1e1a8a21b';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'exchange_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Exchange References',
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
    $pane->uuid = '3a979e5c-0f89-4bbe-9a49-c8d1e1a8a21b';
    $display->content['new-3a979e5c-0f89-4bbe-9a49-c8d1e1a8a21b'] = $pane;
    $display->panels['bottom_sidebar'][2] = 'new-3a979e5c-0f89-4bbe-9a49-c8d1e1a8a21b';
    $pane = new stdClass();
    $pane->pid = 'new-1c1439b4-4e93-4c9d-b7d3-694587985c57';
    $pane->panel = 'bottom_sidebar';
    $pane->type = 'views';
    $pane->subtype = 'non_exchange_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Other References',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1c1439b4-4e93-4c9d-b7d3-694587985c57';
    $display->content['new-1c1439b4-4e93-4c9d-b7d3-694587985c57'] = $pane;
    $display->panels['bottom_sidebar'][3] = 'new-1c1439b4-4e93-4c9d-b7d3-694587985c57';
    $pane = new stdClass();
    $pane->pid = 'new-2bbcfb02-7033-40f6-a308-04f008fc1e75';
    $pane->panel = 'box_third';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_innovation_poc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '2bbcfb02-7033-40f6-a308-04f008fc1e75';
    $display->content['new-2bbcfb02-7033-40f6-a308-04f008fc1e75'] = $pane;
    $display->panels['box_third'][0] = 'new-2bbcfb02-7033-40f6-a308-04f008fc1e75';
    $pane = new stdClass();
    $pane->pid = 'new-c4f688c1-cf27-4da4-9c17-9ff2a08c5d8a';
    $pane->panel = 'hero';
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
    $pane->uuid = 'c4f688c1-cf27-4da4-9c17-9ff2a08c5d8a';
    $display->content['new-c4f688c1-cf27-4da4-9c17-9ff2a08c5d8a'] = $pane;
    $display->panels['hero'][0] = 'new-c4f688c1-cf27-4da4-9c17-9ff2a08c5d8a';
    $pane = new stdClass();
    $pane->pid = 'new-b72e37c3-6f00-42c3-9258-f3f408dc1baf';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_innovation_desc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b72e37c3-6f00-42c3-9258-f3f408dc1baf';
    $display->content['new-b72e37c3-6f00-42c3-9258-f3f408dc1baf'] = $pane;
    $display->panels['main'][0] = 'new-b72e37c3-6f00-42c3-9258-f3f408dc1baf';
    $pane = new stdClass();
    $pane->pid = 'new-e19a3bc4-c1d8-4aa9-b073-018e556fcd5d';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:sharethis';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'e19a3bc4-c1d8-4aa9-b073-018e556fcd5d';
    $display->content['new-e19a3bc4-c1d8-4aa9-b073-018e556fcd5d'] = $pane;
    $display->panels['main'][1] = 'new-e19a3bc4-c1d8-4aa9-b073-018e556fcd5d';
    $pane = new stdClass();
    $pane->pid = 'new-6dc12d37-9183-494e-98d7-6d409bd07649';
    $pane->panel = 'main_sidebar';
    $pane->type = 'flag_link';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'favorite',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6dc12d37-9183-494e-98d7-6d409bd07649';
    $display->content['new-6dc12d37-9183-494e-98d7-6d409bd07649'] = $pane;
    $display->panels['main_sidebar'][0] = 'new-6dc12d37-9183-494e-98d7-6d409bd07649';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-64f4772c-3c94-430a-9ffd-5bd25b4cc8cb';
  $handler->conf['display'] = $display;
  $export['node_view__innovation'] = $handler;

  return $export;
}