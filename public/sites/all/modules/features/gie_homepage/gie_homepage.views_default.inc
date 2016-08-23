<?php
/**
 * @file
 * gie_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Exchange Connects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['id'] = 'reverse_field_homepage_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['field'] = 'reverse_field_homepage_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_personas_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_homepage_personas_target_id';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
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
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Personas */
  $handler = $view->new_display('panel_pane', 'Personas', 'personas_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Action cards */
  $handler = $view->new_display('panel_pane', 'Action cards', 'action_card_panes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find your place on the Exchange';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--homepage-cardflip';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['id'] = 'reverse_field_homepage_action_cards_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['field'] = 'reverse_field_homepage_action_cards_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_action_cards_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
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
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_action_image']['id'] = 'field_action_image';
  $handler->display->display_options['fields']['field_action_image']['table'] = 'field_data_field_action_image';
  $handler->display->display_options['fields']['field_action_image']['field'] = 'field_action_image';
  $handler->display->display_options['fields']['field_action_image']['label'] = '';
  $handler->display->display_options['fields']['field_action_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_action_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_image']['settings'] = array(
    'image_style' => 'card__175x175_',
    'image_link' => '',
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
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_action_description']['id'] = 'field_action_description';
  $handler->display->display_options['fields']['field_action_description']['table'] = 'field_data_field_action_description';
  $handler->display->display_options['fields']['field_action_description']['field'] = 'field_action_description';
  $handler->display->display_options['fields']['field_action_description']['label'] = '';
  $handler->display->display_options['fields']['field_action_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_action_description']['settings'] = array(
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
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_action_link']['id'] = 'field_action_link';
  $handler->display->display_options['fields']['field_action_link']['table'] = 'field_data_field_action_link';
  $handler->display->display_options['fields']['field_action_link']['field'] = 'field_action_link';
  $handler->display->display_options['fields']['field_action_link']['label'] = '';
  $handler->display->display_options['fields']['field_action_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_action_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_action_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_action_link']['settings'] = array(
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
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cardflip">
  <div class="cardflip__card">
    <div class="cardflip__a">
      <div class="cardflip__title">[title_field]</div>
      <div class="cardflip__image">[field_action_image]</div>
    </div>
    <div class="cardflip__b">
      <div class="cardflip__title">[title_field]</div>
      <div class="cardflip__description">[field_action_description]</div>
      <div class="cardflip__link">[field_action_link]</div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Staff Picks */
  $handler = $view->new_display('panel_pane', 'Staff Picks', 'staff_picks_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="view__header-title">Highlights</h1><div><a href="innovations" class="view__header-link">View All Innovations</a><a class="button button--highlight button--large button--add view__header-button" href="node/add/innovation">Add Innovation</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['id'] = 'reverse_field_homepage_staff_picks_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['field'] = 'reverse_field_homepage_staff_picks_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_staff_picks_node']['required'] = TRUE;

  /* Display: Funding */
  $handler = $view->new_display('panel_pane', 'Funding', 'funding_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="view__header-title">Funding Opportunities</h1><a href="funding" class="view__header-link">View All Funding</a><a class="button button--highlight button--large button--add view__header-button" href="node/add/funding">Add Funding</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['sorts']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['sorts']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding' => 'funding',
  );
  /* Filter criterion: Content: Deadlines (field_funding_deadline) */
  $handler->display->display_options['filters']['field_funding_deadline_value']['id'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['filters']['field_funding_deadline_value']['field'] = 'field_funding_deadline_value';
  $handler->display->display_options['filters']['field_funding_deadline_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_funding_deadline_value']['default_date'] = 'now';

  /* Display: Welcome Page Counts */
  $handler = $view->new_display('panel_pane', 'Welcome Page Counts', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: GES Personas */
  $handler = $view->new_display('panel_pane', 'GES Personas', 'ges_personas_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Exchange Supports the Global Entrepreneurship Summit';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_homepage_ges_personas_node']['id'] = 'reverse_field_homepage_ges_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_ges_personas_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_homepage_ges_personas_node']['field'] = 'reverse_field_homepage_ges_personas_node';
  $handler->display->display_options['relationships']['reverse_field_homepage_ges_personas_node']['required'] = TRUE;
  $export['homepage_views'] = $view;

  return $export;
}
