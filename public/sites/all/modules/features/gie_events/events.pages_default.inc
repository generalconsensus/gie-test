<?php
/**
 * @file
 * events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = 'Events Landing Page';
  $page->path = 'events/!past';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'past' => array(
      'id' => 1,
      'identifier' => 'Events String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_ba4f793a-3b23-443f-8fdc-be6041b5111c';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Past Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'past',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Past Events';
  $display->uuid = '61dbe43a-75fe-43bc-a855-90bbfe646f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'views-0e757861ad290468bd420b800079f981';
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
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--wanteds-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $display->content['new-3fd6ed26-dc10-494c-81d1-e0193a2afb39'] = $pane;
    $display->panels['main'][0] = 'new-3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $pane = new stdClass();
    $pane->pid = 'new-e1fc0b00-9d4e-439c-8c73-9de57f0551f3';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_listing-past_events_listing';
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
    $pane->uuid = 'e1fc0b00-9d4e-439c-8c73-9de57f0551f3';
    $display->content['new-e1fc0b00-9d4e-439c-8c73-9de57f0551f3'] = $pane;
    $display->panels['main'][1] = 'new-e1fc0b00-9d4e-439c-8c73-9de57f0551f3';
    $pane = new stdClass();
    $pane->pid = 'new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-HgZszepT0uy4Pp9xr3revmYUm74ai82d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Event Type',
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
    $pane->uuid = '2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $display->content['new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19'] = $pane;
    $display->panels['sidebar'][0] = 'new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $pane = new stdClass();
    $pane->pid = 'new-3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Rlds3Jh70LgzU8nlQV9wQyf1Nzi83k9g';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $display->content['new-3c0e59f1-566a-42e1-90bd-47cf4d430189'] = $pane;
    $display->panels['sidebar'][1] = 'new-3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $pane = new stdClass();
    $pane->pid = 'new-23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sector',
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
    $pane->uuid = '23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $display->content['new-23e0b36c-2f96-44f7-9008-7c4e357ea001'] = $pane;
    $display->panels['sidebar'][2] = 'new-23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $pane = new stdClass();
    $pane->pid = 'new-fb198ca8-ba49-4073-8276-95e31411f3dc';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-bCPjY27nCxBH4nkThoEY1wSC0gxiyVjh';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topic',
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
    $pane->uuid = 'fb198ca8-ba49-4073-8276-95e31411f3dc';
    $display->content['new-fb198ca8-ba49-4073-8276-95e31411f3dc'] = $pane;
    $display->panels['sidebar'][3] = 'new-fb198ca8-ba49-4073-8276-95e31411f3dc';
    $pane = new stdClass();
    $pane->pid = 'new-4825cb81-9c82-49df-a521-ca6565398ce6';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4825cb81-9c82-49df-a521-ca6565398ce6';
    $display->content['new-4825cb81-9c82-49df-a521-ca6565398ce6'] = $pane;
    $display->panels['sidebar'][4] = 'new-4825cb81-9c82-49df-a521-ca6565398ce6';
    $pane = new stdClass();
    $pane->pid = 'new-43277b5c-6216-4d2a-a93a-51b2495338a8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-qH0hOpPQL6LDljihxphqT23wVZ4eAHZy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Cost',
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
    $pane->uuid = '43277b5c-6216-4d2a-a93a-51b2495338a8';
    $display->content['new-43277b5c-6216-4d2a-a93a-51b2495338a8'] = $pane;
    $display->panels['sidebar'][5] = 'new-43277b5c-6216-4d2a-a93a-51b2495338a8';
    $pane = new stdClass();
    $pane->pid = 'new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1fFlaYnlCxAmFmZReELQTn1I0haqVbHB';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Start date',
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
    $pane->uuid = '6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $display->content['new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9'] = $pane;
    $display->panels['sidebar'][6] = 'new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $pane = new stdClass();
    $pane->pid = 'new-4f1e02d9-d47a-47f6-916c-3bb1a6a28fe0';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'past_events_introduction';
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
      'css_class' => 'pane pane--landing-intro pane--events-introduction',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f1e02d9-d47a-47f6-916c-3bb1a6a28fe0';
    $display->content['new-4f1e02d9-d47a-47f6-916c-3bb1a6a28fe0'] = $pane;
    $display->panels['title'][0] = 'new-4f1e02d9-d47a-47f6-916c-3bb1a6a28fe0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_d8d734ae-c8a8-49ab-a54c-7bd914483787';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'landing';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
      'title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '61dbe43a-75fe-43bc-a855-90bbfe646f07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'views-0e757861ad290468bd420b800079f981';
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
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--wanteds-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $display->content['new-3fd6ed26-dc10-494c-81d1-e0193a2afb39'] = $pane;
    $display->panels['main'][0] = 'new-3fd6ed26-dc10-494c-81d1-e0193a2afb39';
    $pane = new stdClass();
    $pane->pid = 'new-255f3184-c5ec-412f-a1ca-665ec2ebbe64';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'events_listing-funding_listing';
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
    $pane->uuid = '255f3184-c5ec-412f-a1ca-665ec2ebbe64';
    $display->content['new-255f3184-c5ec-412f-a1ca-665ec2ebbe64'] = $pane;
    $display->panels['main'][1] = 'new-255f3184-c5ec-412f-a1ca-665ec2ebbe64';
    $pane = new stdClass();
    $pane->pid = 'new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-HgZszepT0uy4Pp9xr3revmYUm74ai82d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Event Type',
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
    $pane->uuid = '2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $display->content['new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19'] = $pane;
    $display->panels['sidebar'][0] = 'new-2ea3df15-c103-45fe-b5d7-b84f8aff3c19';
    $pane = new stdClass();
    $pane->pid = 'new-3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Rlds3Jh70LgzU8nlQV9wQyf1Nzi83k9g';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $display->content['new-3c0e59f1-566a-42e1-90bd-47cf4d430189'] = $pane;
    $display->panels['sidebar'][1] = 'new-3c0e59f1-566a-42e1-90bd-47cf4d430189';
    $pane = new stdClass();
    $pane->pid = 'new-23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-I2gfwaROyft1BxMlakuZNCCqh5BFwoXV';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sector',
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
    $pane->uuid = '23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $display->content['new-23e0b36c-2f96-44f7-9008-7c4e357ea001'] = $pane;
    $display->panels['sidebar'][2] = 'new-23e0b36c-2f96-44f7-9008-7c4e357ea001';
    $pane = new stdClass();
    $pane->pid = 'new-fb198ca8-ba49-4073-8276-95e31411f3dc';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-bCPjY27nCxBH4nkThoEY1wSC0gxiyVjh';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Topic',
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
    $pane->uuid = 'fb198ca8-ba49-4073-8276-95e31411f3dc';
    $display->content['new-fb198ca8-ba49-4073-8276-95e31411f3dc'] = $pane;
    $display->panels['sidebar'][3] = 'new-fb198ca8-ba49-4073-8276-95e31411f3dc';
    $pane = new stdClass();
    $pane->pid = 'new-4825cb81-9c82-49df-a521-ca6565398ce6';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DWXXyf4Sf7KbO6qt5tvdO201sGvEOwbE';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4825cb81-9c82-49df-a521-ca6565398ce6';
    $display->content['new-4825cb81-9c82-49df-a521-ca6565398ce6'] = $pane;
    $display->panels['sidebar'][4] = 'new-4825cb81-9c82-49df-a521-ca6565398ce6';
    $pane = new stdClass();
    $pane->pid = 'new-43277b5c-6216-4d2a-a93a-51b2495338a8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-qH0hOpPQL6LDljihxphqT23wVZ4eAHZy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Cost',
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
    $pane->uuid = '43277b5c-6216-4d2a-a93a-51b2495338a8';
    $display->content['new-43277b5c-6216-4d2a-a93a-51b2495338a8'] = $pane;
    $display->panels['sidebar'][5] = 'new-43277b5c-6216-4d2a-a93a-51b2495338a8';
    $pane = new stdClass();
    $pane->pid = 'new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1fFlaYnlCxAmFmZReELQTn1I0haqVbHB';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Start date',
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
    $pane->uuid = '6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $display->content['new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9'] = $pane;
    $display->panels['sidebar'][6] = 'new-6a5215fe-12d8-4abf-bbce-05dd69d1aca9';
    $pane = new stdClass();
    $pane->pid = 'new-09b9e23c-a945-402b-af15-e74aa944a491';
    $pane->panel = 'title';
    $pane->type = 'pane';
    $pane->subtype = 'events_introduction';
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
    $pane->uuid = '09b9e23c-a945-402b-af15-e74aa944a491';
    $display->content['new-09b9e23c-a945-402b-af15-e74aa944a491'] = $pane;
    $display->panels['title'][0] = 'new-09b9e23c-a945-402b-af15-e74aa944a491';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
