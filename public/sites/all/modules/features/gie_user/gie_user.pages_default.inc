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
  $handler->name = 'contact_user__panel_context_687c0196-4bb1-4aa6-af3c-64b719dd8a1f';
  $handler->task = 'contact_user';
  $handler->subtask = '';
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
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact %user:field_user_firstname %user:field_user_lastname';
  $display->uuid = 'b35060b7-3bb5-4d4b-82b4-f9e93cd7e544';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9c0568fc-9536-40e7-a69c-6ecef0044b4f';
    $pane->panel = 'main';
    $pane->type = 'user_contact';
    $pane->subtype = 'user_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
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
    $pane->uuid = '9c0568fc-9536-40e7-a69c-6ecef0044b4f';
    $display->content['new-9c0568fc-9536-40e7-a69c-6ecef0044b4f'] = $pane;
    $display->panels['main'][0] = 'new-9c0568fc-9536-40e7-a69c-6ecef0044b4f';
    $pane = new stdClass();
    $pane->pid = 'new-98588bb9-bc47-403f-8c3a-75abc11d78ca';
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
    $pane->uuid = '98588bb9-bc47-403f-8c3a-75abc11d78ca';
    $display->content['new-98588bb9-bc47-403f-8c3a-75abc11d78ca'] = $pane;
    $display->panels['title'][0] = 'new-98588bb9-bc47-403f-8c3a-75abc11d78ca';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-98588bb9-bc47-403f-8c3a-75abc11d78ca';
  $handler->conf['display'] = $display;
  $export['contact_user__panel_context_687c0196-4bb1-4aa6-af3c-64b719dd8a1f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_reset_password_page__default';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'reset_password_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
  );
  $display = new panels_display();
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
  $display->title = 'Password Reset';
  $display->uuid = 'cc2c7fce-25a9-4921-b4c8-c8c6d93fd47a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-235c0af6-0474-44b2-9777-e1cbb6b904a3';
    $pane->panel = 'main';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'reset_password_page',
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
    $pane->uuid = '235c0af6-0474-44b2-9777-e1cbb6b904a3';
    $display->content['new-235c0af6-0474-44b2-9777-e1cbb6b904a3'] = $pane;
    $display->panels['main'][0] = 'new-235c0af6-0474-44b2-9777-e1cbb6b904a3';
    $pane = new stdClass();
    $pane->pid = 'new-c16d06dc-8400-402a-b12e-09380a46eb70';
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
    $pane->uuid = 'c16d06dc-8400-402a-b12e-09380a46eb70';
    $display->content['new-c16d06dc-8400-402a-b12e-09380a46eb70'] = $pane;
    $display->panels['title'][0] = 'new-c16d06dc-8400-402a-b12e-09380a46eb70';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c16d06dc-8400-402a-b12e-09380a46eb70';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_reset_password_page__default'] = $handler;

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
    'body_classes_to_add' => 'page-simple',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user_registration',
  );
  $display = new panels_display();
  $display->layout = 'split';
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
      'left' => NULL,
      'right' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1d1df997-7484-409b-9d4a-c703bae52afa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa2f59f8-2a7e-47e1-aa5e-eca8ffa214c9';
    $pane->panel = 'first';
    $pane->type = 'pane';
    $pane->subtype = 'welcome_page_';
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
      'css_class' => 'pane--welcome-page-info',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa2f59f8-2a7e-47e1-aa5e-eca8ffa214c9';
    $display->content['new-fa2f59f8-2a7e-47e1-aa5e-eca8ffa214c9'] = $pane;
    $display->panels['first'][0] = 'new-fa2f59f8-2a7e-47e1-aa5e-eca8ffa214c9';
    $pane = new stdClass();
    $pane->pid = 'new-e3adee68-53d5-4e46-b23e-d5c4bf0cfa1a';
    $pane->panel = 'first';
    $pane->type = 'views_panes';
    $pane->subtype = 'homepage_views-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--welcome-stats',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e3adee68-53d5-4e46-b23e-d5c4bf0cfa1a';
    $display->content['new-e3adee68-53d5-4e46-b23e-d5c4bf0cfa1a'] = $pane;
    $display->panels['first'][1] = 'new-e3adee68-53d5-4e46-b23e-d5c4bf0cfa1a';
    $pane = new stdClass();
    $pane->pid = 'new-f0769848-244b-468c-ba0c-55bf54b0bec8';
    $pane->panel = 'second';
    $pane->type = 'user_registration_form';
    $pane->subtype = 'user_registration_form';
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
    $pane->uuid = 'f0769848-244b-468c-ba0c-55bf54b0bec8';
    $display->content['new-f0769848-244b-468c-ba0c-55bf54b0bec8'] = $pane;
    $display->panels['second'][0] = 'new-f0769848-244b-468c-ba0c-55bf54b0bec8';
    $pane = new stdClass();
    $pane->pid = 'new-c055813e-a03d-4040-bc23-f64b50002271';
    $pane->panel = 'second';
    $pane->type = 'pane';
    $pane->subtype = 'welcome_explore_link';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c055813e-a03d-4040-bc23-f64b50002271';
    $display->content['new-c055813e-a03d-4040-bc23-f64b50002271'] = $pane;
    $display->panels['second'][1] = 'new-c055813e-a03d-4040-bc23-f64b50002271';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_user_registration__user_registration'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit__user_edit';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Edit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user_edit',
  );
  $display = new panels_display();
  $display->layout = 'detail';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
  $display->uuid = '0743589a-7fcb-443b-b59b-87cf226f6fbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cda5c95e-34b5-45ce-b749-34eb34e19761';
    $pane->panel = 'main';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = 'cda5c95e-34b5-45ce-b749-34eb34e19761';
    $display->content['new-cda5c95e-34b5-45ce-b749-34eb34e19761'] = $pane;
    $display->panels['main'][0] = 'new-cda5c95e-34b5-45ce-b749-34eb34e19761';
    $pane = new stdClass();
    $pane->pid = 'new-026dd694-9d07-4478-9586-fe852745370d';
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
    $pane->uuid = '026dd694-9d07-4478-9586-fe852745370d';
    $display->content['new-026dd694-9d07-4478-9586-fe852745370d'] = $pane;
    $display->panels['title'][0] = 'new-026dd694-9d07-4478-9586-fe852745370d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-026dd694-9d07-4478-9586-fe852745370d';
  $handler->conf['display'] = $display;
  $export['user_edit__user_edit'] = $handler;

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
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
    $pane->pid = 'new-c98eab6c-9b7d-4596-a56e-6ad4b8a3db27';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-user_listing-listing_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--wanteds-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c98eab6c-9b7d-4596-a56e-6ad4b8a3db27';
    $display->content['new-c98eab6c-9b7d-4596-a56e-6ad4b8a3db27'] = $pane;
    $display->panels['main'][0] = 'new-c98eab6c-9b7d-4596-a56e-6ad4b8a3db27';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9476b114-b324-411b-ae93-16dd0ccae5dc';
    $display->content['new-9476b114-b324-411b-ae93-16dd0ccae5dc'] = $pane;
    $display->panels['main'][1] = 'new-9476b114-b324-411b-ae93-16dd0ccae5dc';
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
    $pane->pid = 'new-a9c551d2-de70-4c98-8af6-ca3f2cf12064';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-7re5zx7kLx1qmVAdqZuAe3xaVwC7DapV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Assistance Type',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'a9c551d2-de70-4c98-8af6-ca3f2cf12064';
    $display->content['new-a9c551d2-de70-4c98-8af6-ca3f2cf12064'] = $pane;
    $display->panels['sidebar'][7] = 'new-a9c551d2-de70-4c98-8af6-ca3f2cf12064';
    $pane = new stdClass();
    $pane->pid = 'new-dc9af97f-1edc-45a0-9849-252025e70f9c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-mia3bvOQjh040CvnbVfKH5l1v0iBpvp7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Role / Expertise',
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
    $pane->uuid = 'dc9af97f-1edc-45a0-9849-252025e70f9c';
    $display->content['new-dc9af97f-1edc-45a0-9849-252025e70f9c'] = $pane;
    $display->panels['sidebar'][8] = 'new-dc9af97f-1edc-45a0-9849-252025e70f9c';
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

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_notifications';
  $page->task = 'page';
  $page->admin_title = 'User Notifications';
  $page->admin_description = 'Email notifications edit page';
  $page->path = 'user/%user/notifications';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Notifications',
    'name' => 'navigation',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'user' => array(
      'id' => 1,
      'identifier' => 'User: ID',
      'name' => 'entity_id:user',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_notifications__panel';
  $handler->task = 'page';
  $handler->subtask = 'user_notifications';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'title' => NULL,
      'main' => NULL,
      'main_sidebar' => NULL,
      'center' => NULL,
      'box_first' => NULL,
      'box_second' => NULL,
      'box_third' => NULL,
      'bottom_sidebar' => NULL,
      'bottom' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_user_firstname %user:field_user_lastname User Notifications';
  $display->uuid = '50666f4f-a31a-40e4-b8e0-dc7ccebc6ccb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b2954fd7-2dc8-4f0b-8c5f-41f0689aa707';
    $pane->panel = 'main';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'b2954fd7-2dc8-4f0b-8c5f-41f0689aa707';
    $display->content['new-b2954fd7-2dc8-4f0b-8c5f-41f0689aa707'] = $pane;
    $display->panels['main'][0] = 'new-b2954fd7-2dc8-4f0b-8c5f-41f0689aa707';
    $pane = new stdClass();
    $pane->pid = 'new-9b082cda-ac32-4daa-80ab-4f5a53af0ed3';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'gie_user-user_notifications_form';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9b082cda-ac32-4daa-80ab-4f5a53af0ed3';
    $display->content['new-9b082cda-ac32-4daa-80ab-4f5a53af0ed3'] = $pane;
    $display->panels['main'][1] = 'new-9b082cda-ac32-4daa-80ab-4f5a53af0ed3';
    $pane = new stdClass();
    $pane->pid = 'new-32a4272e-0320-43d8-9b5c-31492f8738bd';
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
    $pane->uuid = '32a4272e-0320-43d8-9b5c-31492f8738bd';
    $display->content['new-32a4272e-0320-43d8-9b5c-31492f8738bd'] = $pane;
    $display->panels['title'][0] = 'new-32a4272e-0320-43d8-9b5c-31492f8738bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_notifications'] = $page;

  return $pages;

}
