<?php
/**
 * @file
 * gie_general.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gie_general_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site__contact_page';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'contact_page',
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
  $display->title = 'Contact';
  $display->uuid = 'b74bb388-bfac-4a0f-8378-4760e2bb3836';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'contact_site__contact_page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6420bf98-0744-49ac-affa-6f0f051ff0d4';
  $pane->panel = 'main';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
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
  $pane->uuid = '6420bf98-0744-49ac-affa-6f0f051ff0d4';
  $display->content['new-6420bf98-0744-49ac-affa-6f0f051ff0d4'] = $pane;
  $display->panels['main'][0] = 'new-6420bf98-0744-49ac-affa-6f0f051ff0d4';
  $pane = new stdClass();
  $pane->pid = 'new-44c4336f-5a2c-4252-81de-48e5addffd73';
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
  $pane->uuid = '44c4336f-5a2c-4252-81de-48e5addffd73';
  $display->content['new-44c4336f-5a2c-4252-81de-48e5addffd73'] = $pane;
  $display->panels['title'][0] = 'new-44c4336f-5a2c-4252-81de-48e5addffd73';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-44c4336f-5a2c-4252-81de-48e5addffd73';
  $handler->conf['display'] = $display;
  $export['contact_site__contact_page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__add_edit_forms';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Add/Edit forms',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'add_edit_forms',
  );
  $display = new panels_display();
  $display->layout = 'multistep';
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
  $display->title = '';
  $display->uuid = 'cb8c34f1-064a-4e36-a052-23052a8a9e3b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__add_edit_forms';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23bb80b1-0253-4da6-a25f-25ed7de2b135';
  $pane->panel = 'main';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--multistep-form',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23bb80b1-0253-4da6-a25f-25ed7de2b135';
  $display->content['new-23bb80b1-0253-4da6-a25f-25ed7de2b135'] = $pane;
  $display->panels['main'][0] = 'new-23bb80b1-0253-4da6-a25f-25ed7de2b135';
  $pane = new stdClass();
  $pane->pid = 'new-74c0034f-978a-4335-a553-743421ec87c9';
  $pane->panel = 'sidebar';
  $pane->type = 'pane';
  $pane->subtype = 'multistep_help_funding';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'funding' => 'funding',
          ),
        ),
        'context' => 'argument_node_edit_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = '74c0034f-978a-4335-a553-743421ec87c9';
  $display->content['new-74c0034f-978a-4335-a553-743421ec87c9'] = $pane;
  $display->panels['sidebar'][0] = 'new-74c0034f-978a-4335-a553-743421ec87c9';
  $pane = new stdClass();
  $pane->pid = 'new-e0f33d01-c639-41b5-ab81-d8c48a5af0d0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'multistep-innovation';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'innovation' => 'innovation',
          ),
        ),
        'context' => 'argument_node_edit_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Skip to other Sections',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--multistep-progress',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0f33d01-c639-41b5-ab81-d8c48a5af0d0';
  $display->content['new-e0f33d01-c639-41b5-ab81-d8c48a5af0d0'] = $pane;
  $display->panels['sidebar'][1] = 'new-e0f33d01-c639-41b5-ab81-d8c48a5af0d0';
  $pane = new stdClass();
  $pane->pid = 'new-f3d358c9-0792-4bda-9d59-a3fe759a0733';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'multistep-funding';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'funding' => 'funding',
          ),
        ),
        'context' => 'argument_node_edit_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Skip to other Sections',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--multistep-progress',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f3d358c9-0792-4bda-9d59-a3fe759a0733';
  $display->content['new-f3d358c9-0792-4bda-9d59-a3fe759a0733'] = $pane;
  $display->panels['sidebar'][2] = 'new-f3d358c9-0792-4bda-9d59-a3fe759a0733';
  $pane = new stdClass();
  $pane->pid = 'new-56892092-2b08-4623-8aad-2f4b3c2c576e';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'innovation' => 'innovation',
          ),
        ),
        'context' => 'argument_node_edit_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Multistep Innovation Help Block Funding',
    'title' => 'Need help?',
    'body' => 'Here is some basic information we need from you in order to add you innovation to the Global Innovation Exchange. Don\'t worry, we want MUCH more than this, but this is critical - how will people find your work if it doesn\'t have a description?',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '56892092-2b08-4623-8aad-2f4b3c2c576e';
  $display->content['new-56892092-2b08-4623-8aad-2f4b3c2c576e'] = $pane;
  $display->panels['sidebar'][3] = 'new-56892092-2b08-4623-8aad-2f4b3c2c576e';
  $pane = new stdClass();
  $pane->pid = 'new-e1b03668-52fe-4016-ac73-24e99ff9393c';
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
  $pane->uuid = 'e1b03668-52fe-4016-ac73-24e99ff9393c';
  $display->content['new-e1b03668-52fe-4016-ac73-24e99ff9393c'] = $pane;
  $display->panels['title'][0] = 'new-e1b03668-52fe-4016-ac73-24e99ff9393c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e1b03668-52fe-4016-ac73-24e99ff9393c';
  $handler->conf['display'] = $display;
  $export['node_edit__add_edit_forms'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_node_abuse_form__node_abuse_form';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'node_abuse_form';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Node Abuse Form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'node_abuse_form',
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
  $display->title = 'Flag %node:title as Inappropriate';
  $display->uuid = '5da69921-7c08-434b-8179-58cc8da6ce93';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_node_abuse_form__node_abuse_form';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0b348870-66d4-46fb-9cdb-8b56f9b22cf0';
  $pane->panel = 'main';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'node_abuse_form',
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
  $pane->uuid = '0b348870-66d4-46fb-9cdb-8b56f9b22cf0';
  $display->content['new-0b348870-66d4-46fb-9cdb-8b56f9b22cf0'] = $pane;
  $display->panels['main'][0] = 'new-0b348870-66d4-46fb-9cdb-8b56f9b22cf0';
  $pane = new stdClass();
  $pane->pid = 'new-33ddb038-f147-4534-90db-796826c75254';
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
  $pane->uuid = '33ddb038-f147-4534-90db-796826c75254';
  $display->content['new-33ddb038-f147-4534-90db-796826c75254'] = $pane;
  $display->panels['title'][0] = 'new-33ddb038-f147-4534-90db-796826c75254';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-33ddb038-f147-4534-90db-796826c75254';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_node_abuse_form__node_abuse_form'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function gie_general_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_homepage__panel_context_873f69de-06a6-4c4b-b4ce-cb480cd64d9a';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
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
  $display->layout = 'home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'hero' => NULL,
      'main' => NULL,
      'villain' => NULL,
      'postscript' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fe24f77a-a769-418b-8645-378830deaf27';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_homepage__panel_context_873f69de-06a6-4c4b-b4ce-cb480cd64d9a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e23c3808-5a0c-4259-a2a6-96faecfbbc6e';
  $pane->panel = 'hero';
  $pane->type = 'pane';
  $pane->subtype = 'homepage_header';
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
  $pane->uuid = 'e23c3808-5a0c-4259-a2a6-96faecfbbc6e';
  $display->content['new-e23c3808-5a0c-4259-a2a6-96faecfbbc6e'] = $pane;
  $display->panels['hero'][0] = 'new-e23c3808-5a0c-4259-a2a6-96faecfbbc6e';
  $pane = new stdClass();
  $pane->pid = 'new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_views-personas_pane';
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
  $pane->uuid = 'ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
  $display->content['new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c'] = $pane;
  $display->panels['main'][0] = 'new-ebd972b3-6d8a-4ee2-8159-6eb30d6c526c';
  $pane = new stdClass();
  $pane->pid = 'new-f3158a70-3827-40c7-803a-52e728c23fd5';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_views-ges_personas_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane--homepage-views-personas-pane',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3158a70-3827-40c7-803a-52e728c23fd5';
  $display->content['new-f3158a70-3827-40c7-803a-52e728c23fd5'] = $pane;
  $display->panels['main'][1] = 'new-f3158a70-3827-40c7-803a-52e728c23fd5';
  $pane = new stdClass();
  $pane->pid = 'new-dfaebac8-8ecd-42ec-90a5-d1433717aecb';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_views-action_card_panes';
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
  $pane->uuid = 'dfaebac8-8ecd-42ec-90a5-d1433717aecb';
  $display->content['new-dfaebac8-8ecd-42ec-90a5-d1433717aecb'] = $pane;
  $display->panels['main'][2] = 'new-dfaebac8-8ecd-42ec-90a5-d1433717aecb';
  $pane = new stdClass();
  $pane->pid = 'new-ca876c6f-f629-4daa-984b-611347570cf5';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_views-staff_picks_pane';
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
  $pane->uuid = 'ca876c6f-f629-4daa-984b-611347570cf5';
  $display->content['new-ca876c6f-f629-4daa-984b-611347570cf5'] = $pane;
  $display->panels['main'][3] = 'new-ca876c6f-f629-4daa-984b-611347570cf5';
  $pane = new stdClass();
  $pane->pid = 'new-3cc603b0-9dd3-45db-a074-2d9b550fa747';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_views-funding_pane';
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
  $pane->uuid = '3cc603b0-9dd3-45db-a074-2d9b550fa747';
  $display->content['new-3cc603b0-9dd3-45db-a074-2d9b550fa747'] = $pane;
  $display->panels['main'][4] = 'new-3cc603b0-9dd3-45db-a074-2d9b550fa747';
  $pane = new stdClass();
  $pane->pid = 'new-50980e06-fd50-4032-8cfd-b39d9df3f239';
  $pane->panel = 'postscript';
  $pane->type = 'pane';
  $pane->subtype = 'homepage_join_callout';
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
  $pane->uuid = '50980e06-fd50-4032-8cfd-b39d9df3f239';
  $display->content['new-50980e06-fd50-4032-8cfd-b39d9df3f239'] = $pane;
  $display->panels['postscript'][0] = 'new-50980e06-fd50-4032-8cfd-b39d9df3f239';
  $pane = new stdClass();
  $pane->pid = 'new-a6c7b280-264f-43ef-824a-4a382941bc5b';
  $pane->panel = 'villain';
  $pane->type = 'pane';
  $pane->subtype = 'homepage_footer_callout';
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
  $pane->uuid = 'a6c7b280-264f-43ef-824a-4a382941bc5b';
  $display->content['new-a6c7b280-264f-43ef-824a-4a382941bc5b'] = $pane;
  $display->panels['villain'][0] = 'new-a6c7b280-264f-43ef-824a-4a382941bc5b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
