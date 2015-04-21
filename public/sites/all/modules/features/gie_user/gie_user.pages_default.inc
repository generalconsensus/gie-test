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

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_user_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'member_directory';
  $page->task = 'page';
  $page->admin_title = 'Member directory';
  $page->admin_description = '';
  $page->path = 'members';
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
  $handler->name = 'page_member_directory__panel_context_6960ad99-c882-46b8-927a-206c5ed7353c';
  $handler->task = 'page';
  $handler->subtask = 'member_directory';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->title = 'Members';
  $display->uuid = '73751207-5bad-446e-9fb8-4e94d69f4ea6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9476b114-b324-411b-ae93-16dd0ccae5dc';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'user_listing-listing_pane';
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
    $pane->uuid = '9476b114-b324-411b-ae93-16dd0ccae5dc';
    $display->content['new-9476b114-b324-411b-ae93-16dd0ccae5dc'] = $pane;
    $display->panels['main'][0] = 'new-9476b114-b324-411b-ae93-16dd0ccae5dc';
    $pane = new stdClass();
    $pane->pid = 'new-381880a8-ec27-4440-b3e3-8e1fbbeb368e';
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
    $pane->uuid = '381880a8-ec27-4440-b3e3-8e1fbbeb368e';
    $display->content['new-381880a8-ec27-4440-b3e3-8e1fbbeb368e'] = $pane;
    $display->panels['sidebar'][0] = 'new-381880a8-ec27-4440-b3e3-8e1fbbeb368e';
    $pane = new stdClass();
    $pane->pid = 'new-d366f55c-c2b9-4044-891d-5306d73dfbd2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-B4EKCk2e9O3RJPP0C76D0Ivo5nrCj1zn';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Area of Interest',
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
    $pane->uuid = 'd366f55c-c2b9-4044-891d-5306d73dfbd2';
    $display->content['new-d366f55c-c2b9-4044-891d-5306d73dfbd2'] = $pane;
    $display->panels['sidebar'][1] = 'new-d366f55c-c2b9-4044-891d-5306d73dfbd2';
    $pane = new stdClass();
    $pane->pid = 'new-7e9547bd-525e-4ee6-9ac3-b24b7ffbfec2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-LytUthmo6eubfYgEVeoUWy5aZq4bHhyV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Organization',
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
    $pane->uuid = '7e9547bd-525e-4ee6-9ac3-b24b7ffbfec2';
    $display->content['new-7e9547bd-525e-4ee6-9ac3-b24b7ffbfec2'] = $pane;
    $display->panels['sidebar'][2] = 'new-7e9547bd-525e-4ee6-9ac3-b24b7ffbfec2';
    $pane = new stdClass();
    $pane->pid = 'new-1ed805c9-bc7b-4a2f-9466-068346e8541c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-9udwrMNZbEv0jPUngCgf7u8EA1mZwgjx';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Program',
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
    $pane->uuid = '1ed805c9-bc7b-4a2f-9466-068346e8541c';
    $display->content['new-1ed805c9-bc7b-4a2f-9466-068346e8541c'] = $pane;
    $display->panels['sidebar'][3] = 'new-1ed805c9-bc7b-4a2f-9466-068346e8541c';
    $pane = new stdClass();
    $pane->pid = 'new-f88d78b9-a230-41d2-b156-40c90e929ffa';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-0Cs1SEag1Z0P3Ei5Sk0DewRf0ehddnMk';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f88d78b9-a230-41d2-b156-40c90e929ffa';
    $display->content['new-f88d78b9-a230-41d2-b156-40c90e929ffa'] = $pane;
    $display->panels['sidebar'][4] = 'new-f88d78b9-a230-41d2-b156-40c90e929ffa';
    $pane = new stdClass();
    $pane->pid = 'new-0b30a971-ea2a-4dfd-81b2-6d50fc176eb8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-F3GcPgkur4oxJLoEEYfqhxzDuObjcS36';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '0b30a971-ea2a-4dfd-81b2-6d50fc176eb8';
    $display->content['new-0b30a971-ea2a-4dfd-81b2-6d50fc176eb8'] = $pane;
    $display->panels['sidebar'][5] = 'new-0b30a971-ea2a-4dfd-81b2-6d50fc176eb8';
    $pane = new stdClass();
    $pane->pid = 'new-191def36-f7ab-4885-af79-8b78092fcea6';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-2VcTTijBJpydsYn0Wa6A6P2QeIbTvVMU';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '191def36-f7ab-4885-af79-8b78092fcea6';
    $display->content['new-191def36-f7ab-4885-af79-8b78092fcea6'] = $pane;
    $display->panels['sidebar'][6] = 'new-191def36-f7ab-4885-af79-8b78092fcea6';
    $pane = new stdClass();
    $pane->pid = 'new-9ed7732e-29a6-4cdd-b988-c45dddef02af';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'members_directory_introduction';
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
      'css_class' => 'pane--landing-intro',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ed7732e-29a6-4cdd-b988-c45dddef02af';
    $display->content['new-9ed7732e-29a6-4cdd-b988-c45dddef02af'] = $pane;
    $display->panels['title'][0] = 'new-9ed7732e-29a6-4cdd-b988-c45dddef02af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9476b114-b324-411b-ae93-16dd0ccae5dc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['member_directory'] = $page;

  return $pages;

}
