<?php
/**
 * @file
 * gie_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_data_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'data_page_taxonomy_views';
  $view->description = 'These are views for the Data page, using Taxonomy as the focus. ';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Data Page Taxonomy Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Funding by Sector */
  $handler = $view->new_display('panel_pane', 'Funding by Sector', 'data_sector_funding');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Sectors';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_funding_grant_award_value' => 'field_funding_grant_award_value',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_funding_grant_award_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Measured in millions of dollars. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Sector */
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['id'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['field'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['relationships']['reverse_field_term_sector_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content: Grant / Award Value */
  $handler->display->display_options['fields']['field_funding_grant_award_value']['id'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['field'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['relationship'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['label'] = '';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['text'] = '<a href="/funding/sector/[tid]">$[field_funding_grant_award_value]</a>';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['path'] = 'funding/sector/[tid]';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['type'] = 'short_scale_formatter';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['settings'] = array(
    'wrapper_element' => 'span',
    'wrapper_title_text' => '',
    'thousand' => 'K',
    'million' => 'M',
    'billion' => 'B',
    'trillion' => 'T',
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
  $handler->display->display_options['fields']['field_funding_grant_award_value']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Grant / Award Value (field_funding_grant_award_value) */
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['id'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['field'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['relationship'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Grant / Award Value (field_funding_grant_award_value) */
  $handler->display->display_options['filters']['field_funding_grant_award_value_value']['id'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['filters']['field_funding_grant_award_value_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['filters']['field_funding_grant_award_value_value']['field'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['filters']['field_funding_grant_award_value_value']['relationship'] = 'reverse_field_term_sector_node';
  $handler->display->display_options['filters']['field_funding_grant_award_value_value']['operator'] = 'not empty';
  $export['data_page_taxonomy_views'] = $view;

  $view = new view();
  $view->name = 'data_page_users';
  $view->description = 'This is the view for User related data on the /Data page';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Data Page Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Skills Count';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Assistance Offered (field_user_assistance) */
  $handler->display->display_options['relationships']['field_user_assistance_tid']['id'] = 'field_user_assistance_tid';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['table'] = 'field_data_field_user_assistance';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['field'] = 'field_user_assistance_tid';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_term_region_tid';
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User Skills Count */
  $handler = $view->new_display('panel_pane', 'User Skills Count', 'user_skills');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Skills';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_assistance_members' => 'field_assistance_members',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_assistance_members' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Top skills being offered by Exchange members. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'members/field_user_assistance/[tid_1]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Assistance Offered */
  $handler->display->display_options['fields']['field_assistance_members']['id'] = 'field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['table'] = 'field_data_field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['field'] = 'field_assistance_members';
  $handler->display->display_options['fields']['field_assistance_members']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['field_assistance_members']['label'] = '';
  $handler->display->display_options['fields']['field_assistance_members']['alter']['path'] = 'members/field_assistance_offered/[tid]';
  $handler->display->display_options['fields']['field_assistance_members']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assistance_members']['settings'] = array(
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
  $handler->display->display_options['fields']['field_assistance_members']['group_columns'] = array(
    'value' => 'value',
  );

  /* Display: User Connections */
  $handler = $view->new_display('panel_pane', 'User Connections', 'user_connections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Connections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: follow counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'follow';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: SUM(Flags: Flag counter) */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Users by Sector */
  $handler = $view->new_display('panel_pane', 'Users by Sector', 'sector_by_users');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Sectors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Top sectors by Exchange member interests';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (field_term_sector) */
  $handler->display->display_options['relationships']['field_term_sector_tid']['id'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['relationships']['field_term_sector_tid']['field'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'members/field_term_sector/[tid_1]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

  /* Display: Users by Region */
  $handler = $view->new_display('panel_pane', 'Users by Region', 'users_by_region');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Regions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid_1' => 'tid_1',
    'tid' => 'tid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Exchange members by region';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Region (field_term_region) */
  $handler->display->display_options['relationships']['field_term_region_tid']['id'] = 'field_term_region_tid';
  $handler->display->display_options['relationships']['field_term_region_tid']['table'] = 'field_data_field_term_region';
  $handler->display->display_options['relationships']['field_term_region_tid']['field'] = 'field_term_region_tid';
  $handler->display->display_options['relationships']['field_term_region_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'members/field_term_region/[tid_1]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'field_term_region_tid';
  $handler->display->display_options['filters']['tid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '624';

  /* Display: User Tagline */
  $handler = $view->new_display('panel_pane', 'User Tagline', 'user_statement');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_assistance_members' => 'field_assistance_members',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_assistance_members' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Assistance Offered (field_user_assistance) */
  $handler->display->display_options['relationships']['field_user_assistance_tid']['id'] = 'field_user_assistance_tid';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['table'] = 'field_data_field_user_assistance';
  $handler->display->display_options['relationships']['field_user_assistance_tid']['field'] = 'field_user_assistance_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_user_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'members/field_user_assistance/[tid_1]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT User: Uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="callout has-icon-user"><a href="/members">[uid]</a> collaborators, offering [tid] skills to innovators to help them change the world.</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['data_page_users'] = $view;

  $view = new view();
  $view->name = 'data_page_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data Page Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view--card-view-4col';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Data Counts */
  $handler = $view->new_display('panel_pane', 'Data Counts', 'data_counts');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'data';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'persona' => 'persona',
  );

  /* Display: Data Tagline */
  $handler = $view->new_display('panel_pane', 'Data Tagline', 'data_tagline');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Country (field_term_country) */
  $handler->display->display_options['relationships']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['relationships']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['relationships']['field_term_country_tid']['field'] = 'field_term_country_tid';
  /* Relationship: Content: Country (field_term_country) */
  $handler->display->display_options['relationships']['field_term_country_tid_1']['id'] = 'field_term_country_tid_1';
  $handler->display->display_options['relationships']['field_term_country_tid_1']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['relationships']['field_term_country_tid_1']['field'] = 'field_term_country_tid';
  /* Relationship: Field: Sector (field_term_sector) */
  $handler->display->display_options['relationships']['field_term_sector_tid']['id'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['relationships']['field_term_sector_tid']['field'] = 'field_term_sector_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Country Created In */
  $handler->display->display_options['fields']['field_innovation_created']['id'] = 'field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['table'] = 'field_data_field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['field'] = 'field_innovation_created';
  $handler->display->display_options['fields']['field_innovation_created']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_innovation_created']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_innovation_created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_created']['separator'] = ', ';
  /* Field: Content: Country Implemented In */
  $handler->display->display_options['fields']['field_innovation_implemented']['id'] = 'field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['table'] = 'field_data_field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['field'] = 'field_innovation_implemented';
  $handler->display->display_options['fields']['field_innovation_implemented']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_innovation_implemented']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_implemented']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_innovation_implemented']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_implemented']['separator'] = ', ';
  /* Field: Field: Sector */
  $handler->display->display_options['fields']['field_term_sector']['id'] = 'field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['field'] = 'field_term_sector';
  $handler->display->display_options['fields']['field_term_sector']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_term_sector']['label'] = '';
  $handler->display->display_options['fields']['field_term_sector']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_sector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_sector']['separator'] = ', ';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="callout has-icon-innovation"><a href="/innovations">[nid] Innovations</a> created in [field_innovation_created] countries and implemented in [field_innovation_implemented] countries across <a href ="/sectors">[field_term_sector] sectors</a> and sub sectors.</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'innovation' => 'innovation',
  );

  /* Display: Data Content Connections */
  $handler = $view->new_display('panel_pane', 'Data Content Connections', 'content_connections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Content Connections';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: favorite counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'favorite';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['group_type'] = 'sum';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Innovation Needs */
  $handler = $view->new_display('panel_pane', 'Innovation Needs', 'innovation_needs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Innovator Needs';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid_1' => 'tid_1',
    'tid' => 'tid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Measured by the number of innovations requiring these skills. ';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Assistance Type (field_innovation_assistance) */
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['id'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['table'] = 'field_data_field_innovation_assistance';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['field'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['relationships']['field_innovation_assistance_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'innovations/assistance-type/[tid_1]';
  $handler->display->display_options['fields']['tid']['element_type'] = 'h5';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_innovation_assistance_tid';
  $handler->display->display_options['sorts']['tid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['tid']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_innovation_assistance_tid';

  /* Display: Sector by Innovations */
  $handler = $view->new_display('panel_pane', 'Sector by Innovations', 'sector_by_innovations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Sectors by Innovation';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'nid' => 'nid',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Measured by the number of innovations by sector.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Sector (field_term_sector) */
  $handler->display->display_options['relationships']['field_term_sector_tid']['id'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['table'] = 'field_data_field_term_sector';
  $handler->display->display_options['relationships']['field_term_sector_tid']['field'] = 'field_term_sector_tid';
  $handler->display->display_options['relationships']['field_term_sector_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'innovations/sector/[tid]';
  $handler->display->display_options['fields']['nid']['element_type'] = 'h5';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_term_sector_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h5';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'innovation' => 'innovation',
  );

  /* Display: Funding by Org */
  $handler = $view->new_display('panel_pane', 'Funding by Org', 'funding_by_org');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top Funders';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_funding_grant_award_value' => 'field_funding_grant_award_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_funding_grant_award_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Measured in Millions of US Dollars';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['id'] = 'field_funding_organization_target_id';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['table'] = 'field_data_field_funding_organization';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['field'] = 'field_funding_organization_target_id';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Grant / Award Value */
  $handler->display->display_options['fields']['field_funding_grant_award_value']['id'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['field'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['label'] = '';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['text'] = '$[field_funding_grant_award_value]';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['type'] = 'short_scale_formatter';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['settings'] = array(
    'wrapper_element' => 'span',
    'wrapper_title_text' => '',
    'thousand' => 'K',
    'million' => 'M',
    'billion' => 'B',
    'trillion' => 'T',
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
  $handler->display->display_options['fields']['field_funding_grant_award_value']['group_columns'] = array(
    'value' => 'value',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Grant / Award Value (field_funding_grant_award_value) */
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['id'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['field'] = 'field_funding_grant_award_value_value';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['field_funding_grant_award_value_value']['order'] = 'DESC';

  /* Display: Funding Tagline */
  $handler = $view->new_display('panel_pane', 'Funding Tagline', 'funding_tagline');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['id'] = 'field_funding_organization_target_id';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['table'] = 'field_data_field_funding_organization';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['field'] = 'field_funding_organization_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Grant / Award Value */
  $handler->display->display_options['fields']['field_funding_grant_award_value']['id'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['field'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['group_type'] = 'sum';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['label'] = '';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['alter']['text'] = '$[field_funding_grant_award_value] ';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['type'] = 'short_scale_formatter';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['settings'] = array(
    'wrapper_element' => 'span',
    'wrapper_title_text' => '',
    'thousand' => 'K',
    'million' => 'M',
    'billion' => 'B',
    'trillion' => 'T',
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="callout has-icon-funding"><a href="/funding">[field_funding_grant_award_value] available</a> funding from over <a href ="/organizations">[nid]</a> funding organizations and individual donors.</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding' => 'funding',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['data_page_views'] = $view;

  $view = new view();
  $view->name = 'ga';
  $view->description = 'This is the analytics view for the /data page.';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Data Page Analytics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'stats card--center';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Session calculated metrics: Avg. Session Duration */
  $handler->display->display_options['fields']['avgSessionDuration']['id'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['avgSessionDuration']['field'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['label'] = 'Average Session Time';
  $handler->display->display_options['fields']['avgSessionDuration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['avgSessionDuration']['date_format'] = 'custom';
  $handler->display->display_options['fields']['avgSessionDuration']['custom_date_format'] = 'i:s';
  $handler->display->display_options['fields']['avgSessionDuration']['second_date_format'] = 'html5_tools_iso8601';

  /* Display: GA Data Sessions */
  $handler = $view->new_display('panel_pane', 'GA Data Sessions', 'session_length');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Average Visit Length</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session calculated metrics: Avg. Session Duration */
  $handler->display->display_options['fields']['avgSessionDuration']['id'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['avgSessionDuration']['field'] = 'avgSessionDuration';
  $handler->display->display_options['fields']['avgSessionDuration']['label'] = '';
  $handler->display->display_options['fields']['avgSessionDuration']['element_type'] = 'h2';
  $handler->display->display_options['fields']['avgSessionDuration']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['avgSessionDuration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['avgSessionDuration']['date_format'] = 'custom';
  $handler->display->display_options['fields']['avgSessionDuration']['custom_date_format'] = 'i:s';
  $handler->display->display_options['fields']['avgSessionDuration']['second_date_format'] = 'html5_tools_iso8601';

  /* Display: GA Data Users */
  $handler = $view->new_display('panel_pane', 'GA Data Users', 'user_count');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Total Beta Visitors</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User metrics: Users */
  $handler->display->display_options['fields']['users']['id'] = 'users';
  $handler->display->display_options['fields']['users']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['users']['field'] = 'users';
  $handler->display->display_options['fields']['users']['label'] = '';
  $handler->display->display_options['fields']['users']['element_type'] = 'h2';
  $handler->display->display_options['fields']['users']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['users']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['users']['precision'] = '0';

  /* Display: GA Returning Users */
  $handler = $view->new_display('panel_pane', 'GA Returning Users', 'return_user_traffic');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<h3>Returning User Traffic</h3>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Session metrics: Sessions */
  $handler->display->display_options['fields']['sessions']['id'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['sessions']['field'] = 'sessions';
  $handler->display->display_options['fields']['sessions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sessions']['precision'] = '0';
  $handler->display->display_options['fields']['sessions']['separator'] = '';
  /* Field: User calculated metrics: % New Sessions */
  $handler->display->display_options['fields']['percentNewSessions']['id'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['percentNewSessions']['field'] = 'percentNewSessions';
  $handler->display->display_options['fields']['percentNewSessions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['percentNewSessions']['precision'] = '0';
  $handler->display->display_options['fields']['percentNewSessions']['separator'] = '';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['element_type'] = 'h2';
  $handler->display->display_options['fields']['expression']['element_class'] = 'pane__title';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '(([sessions]-([sessions]*([percentNewSessions]*.01))) / [sessions]) * 100';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Countries */
  $handler = $view->new_display('panel_pane', 'Countries', 'country_visitors');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Countries with Visitors</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Geo network dimensions: Country / Territory */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['alter']['text'] = 'count([country])
';
  $handler->display->display_options['fields']['country']['element_type'] = 'h5';
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Geo network dimensions: Country / Territory */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['operator'] = 'not';
  $handler->display->display_options['filters']['country']['value'] = '(not set)';
  $export['ga'] = $view;

  return $export;
}
