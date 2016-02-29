<?php
/**
 * @file
 * gie_blogs.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_blogs_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blogs';
  $page->task = 'page';
  $page->admin_title = 'Blogs';
  $page->admin_description = '';
  $page->path = 'blogs';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blogs__panel';
  $handler->task = 'page';
  $handler->subtask = 'blogs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blogs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'title' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f5567472-9f44-4b47-8ed6-61dfa08bb759';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bb165fb-8979-4ea0-84e4-a79d2de7e13e';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'blogs_listing-resource_listing';
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
    $pane->uuid = '4bb165fb-8979-4ea0-84e4-a79d2de7e13e';
    $display->content['new-4bb165fb-8979-4ea0-84e4-a79d2de7e13e'] = $pane;
    $display->panels['main'][0] = 'new-4bb165fb-8979-4ea0-84e4-a79d2de7e13e';
    $pane = new stdClass();
    $pane->pid = 'new-8def6f82-048a-474e-a00d-68ec899003c6';
    $pane->panel = 'sidebar';
    $pane->type = 'pane';
    $pane->subtype = 'facet_pane';
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
    $pane->uuid = '8def6f82-048a-474e-a00d-68ec899003c6';
    $display->content['new-8def6f82-048a-474e-a00d-68ec899003c6'] = $pane;
    $display->panels['sidebar'][0] = 'new-8def6f82-048a-474e-a00d-68ec899003c6';
    $pane = new stdClass();
    $pane->pid = 'new-70dabfdb-9c66-458e-9b7d-8b790222584d';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Yq2Mass03VeN1x99nR2BWlfS8uGoweG2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Region',
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
    $pane->uuid = '70dabfdb-9c66-458e-9b7d-8b790222584d';
    $display->content['new-70dabfdb-9c66-458e-9b7d-8b790222584d'] = $pane;
    $display->panels['sidebar'][1] = 'new-70dabfdb-9c66-458e-9b7d-8b790222584d';
    $pane = new stdClass();
    $pane->pid = 'new-8ddf5ed9-c384-4480-baf2-e73567c163b9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Suh7fselMCVpJgSNS3Gni2M1C0sOuOel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Country',
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
    $pane->uuid = '8ddf5ed9-c384-4480-baf2-e73567c163b9';
    $display->content['new-8ddf5ed9-c384-4480-baf2-e73567c163b9'] = $pane;
    $display->panels['sidebar'][2] = 'new-8ddf5ed9-c384-4480-baf2-e73567c163b9';
    $pane = new stdClass();
    $pane->pid = 'new-64358c99-ed53-465a-86a4-0b012d5f4006';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-T6YGwx9UxCm4dGkQXlqNWu6FjupRD5ug';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sectors',
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
    $pane->uuid = '64358c99-ed53-465a-86a4-0b012d5f4006';
    $display->content['new-64358c99-ed53-465a-86a4-0b012d5f4006'] = $pane;
    $display->panels['sidebar'][3] = 'new-64358c99-ed53-465a-86a4-0b012d5f4006';
    $pane = new stdClass();
    $pane->pid = 'new-2dc2da74-9f74-4a5f-b67d-40353288ec34';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-FthNoZO02Pu0z0qJfjCJ6FGFpn3yczvn';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topics',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2dc2da74-9f74-4a5f-b67d-40353288ec34';
    $display->content['new-2dc2da74-9f74-4a5f-b67d-40353288ec34'] = $pane;
    $display->panels['sidebar'][4] = 'new-2dc2da74-9f74-4a5f-b67d-40353288ec34';
    $pane = new stdClass();
    $pane->pid = 'new-4e0de6d8-7085-4771-82fd-46ad36f4822f';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'blogs_introduction';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane pane--landing-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e0de6d8-7085-4771-82fd-46ad36f4822f';
    $display->content['new-4e0de6d8-7085-4771-82fd-46ad36f4822f'] = $pane;
    $display->panels['title'][0] = 'new-4e0de6d8-7085-4771-82fd-46ad36f4822f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4e0de6d8-7085-4771-82fd-46ad36f4822f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blogs'] = $page;

  return $pages;

}