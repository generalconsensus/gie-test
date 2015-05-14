<?php
/**
 * @file
 * gie_funding.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gie_funding_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funding_counters';
  $view->description = 'Funding counters';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding counters';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Flags: favorite counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'favorite';
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Favorites';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'resource' => 'resource',
  );

  /* Display: Comment count */
  $handler = $view->new_display('entity_view', 'Comment count', 'comment_count');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<div class="has-icon--comment" title="Comments">[comment_count]</div>';
  $handler->display->display_options['fields']['comment_count']['element_type'] = '0';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Favorite count */
  $handler = $view->new_display('entity_view', 'Favorite count', 'favorite_count');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = '';
  $handler->display->display_options['fields']['count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['count']['alter']['text'] = '<div class="has-icon--favorite" title="Favorites">[count]</div>';
  $handler->display->display_options['fields']['count']['element_type'] = '0';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );
  $export['funding_counters'] = $view;

  $view = new view();
  $view->name = 'funding_fields';
  $view->description = 'Funding Ops fields for use in Panels';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding Fields';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_funding_link']['id'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['table'] = 'field_data_field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['field'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['label'] = '';
  $handler->display->display_options['fields']['field_funding_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['settings'] = array(
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Link URL */
  $handler = $view->new_display('entity_view', 'Link URL', 'link_url');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_funding_link']['id'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['table'] = 'field_data_field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['field'] = 'field_funding_link';
  $handler->display->display_options['fields']['field_funding_link']['label'] = '';
  $handler->display->display_options['fields']['field_funding_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_link']['alter']['text'] = '<a class="button button--highlight button--edit" href="[field_funding_link]" title="Apply for Opportunity">Apply For Opportunity</a>';
  $handler->display->display_options['fields']['field_funding_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_link']['settings'] = array(
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Contact */
  $handler = $view->new_display('entity_view', 'Contact', 'contact');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Point of Contact Email */
  $handler->display->display_options['fields']['field_funding_poc']['id'] = 'field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['table'] = 'field_data_field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['field'] = 'field_funding_poc';
  $handler->display->display_options['fields']['field_funding_poc']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_funding_poc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_funding_poc']['alter']['text'] = '<a href="mailto:[field_funding_poc]">[field_funding_poc]</a>';
  $handler->display->display_options['fields']['field_funding_poc']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_funding_poc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_poc']['settings'] = array(
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Point of Contact Email (field_funding_poc) */
  $handler->display->display_options['filters']['field_funding_poc_value']['id'] = 'field_funding_poc_value';
  $handler->display->display_options['filters']['field_funding_poc_value']['table'] = 'field_data_field_funding_poc';
  $handler->display->display_options['filters']['field_funding_poc_value']['field'] = 'field_funding_poc_value';
  $handler->display->display_options['filters']['field_funding_poc_value']['operator'] = 'not empty';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Organization */
  $handler = $view->new_display('panel_pane', 'Organization', 'funding_organizations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Funding Organization';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'profile-thumb';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['id'] = 'field_funding_organization_target_id';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['table'] = 'field_data_field_funding_organization';
  $handler->display->display_options['relationships']['field_funding_organization_target_id']['field'] = 'field_funding_organization_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_org_logo']['id'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['table'] = 'field_data_field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['field'] = 'field_org_logo';
  $handler->display->display_options['fields']['field_org_logo']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['fields']['field_org_logo']['label'] = '';
  $handler->display->display_options['fields']['field_org_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_org_logo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_org_logo']['element_wrapper_class'] = 'profile-thumb__image';
  $handler->display->display_options['fields']['field_org_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_org_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'profile-thumb__name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_funding_organization_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Deadline */
  $handler = $view->new_display('entity_view', 'Deadline', 'deadline');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Deadlines */
  $handler->display->display_options['fields']['field_funding_deadline']['id'] = 'field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['field'] = 'field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_funding_deadline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_deadline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_deadline']['settings'] = array(
    'format_type' => 'deadline_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  /* Field: Content: Deadlines */
  $handler->display->display_options['fields']['field_funding_deadline_1']['id'] = 'field_funding_deadline_1';
  $handler->display->display_options['fields']['field_funding_deadline_1']['table'] = 'field_data_field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline_1']['field'] = 'field_funding_deadline';
  $handler->display->display_options['fields']['field_funding_deadline_1']['label'] = '';
  $handler->display->display_options['fields']['field_funding_deadline_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_funding_deadline_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_deadline_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_deadline_1']['settings'] = array(
    'format_type' => 'deadline_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="field field--funding-deadline">
              <div class="field--funding-deadline__day">[field_funding_deadline_1]</div>
              <div class="field--funding-deadline__info">
                <div class="field--funding-deadline__date">[field_funding_deadline]</div>
              </div>
            </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );
  $export['funding_fields'] = $view;

  $view = new view();
  $view->name = 'funding_opp_listing';
  $view->description = 'Funding Listing Solr View';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Funding Opp Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );

  /* Display: Funding Opp */
  $handler = $view->new_display('panel_pane', 'Funding Opp', 'funding_listing');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view--card-view-3col';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funding' => 'funding',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $export['funding_opp_listing'] = $view;

  $view = new view();
  $view->name = 'funding_ops_counters';
  $view->description = '"At a Glance" display on Funding Ops pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funding Ops: At a Glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view--at-a-glance';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: favorite counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'favorite';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Favorites';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  /* Field: Content: Proof of Evidence (field_innovation_proof_evidence:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_innovation_proof_evidence';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'Evidence';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_innovation_website']['id'] = 'field_innovation_website';
  $handler->display->display_options['fields']['field_innovation_website']['table'] = 'field_data_field_innovation_website';
  $handler->display->display_options['fields']['field_innovation_website']['field'] = 'field_innovation_website';
  $handler->display->display_options['fields']['field_innovation_website']['label'] = '';
  $handler->display->display_options['fields']['field_innovation_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_innovation_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_innovation_website']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_innovation_website']['settings'] = array(
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Comments */
  $handler = $view->new_display('entity_view', 'Comments', 'comments');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['element_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['comment_count']['element_label_class'] = 'views-label';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['comment_count']['element_wrapper_class'] = 'views-field has-icon--comment';
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = TRUE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Favorites */
  $handler = $view->new_display('entity_view', 'Favorites', 'favorites');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'Favorites';
  $handler->display->display_options['fields']['count']['element_type'] = 'span';
  $handler->display->display_options['fields']['count']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['count']['element_label_class'] = 'views-label';
  $handler->display->display_options['fields']['count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['count']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['count']['element_wrapper_class'] = 'views-field has-icon--favorite';
  $handler->display->display_options['fields']['count']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['count']['format_plural'] = TRUE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );

  /* Display: Amount */
  $handler = $view->new_display('entity_view', 'Amount', 'amount');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Grant / Award Value */
  $handler->display->display_options['fields']['field_funding_grant_award_value']['id'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['table'] = 'field_data_field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['field'] = 'field_funding_grant_award_value';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['label'] = '';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_class'] = 'views-label';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_wrapper_class'] = 'views-field has-icon--amount';
  $handler->display->display_options['fields']['field_funding_grant_award_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_funding_grant_award_value']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'funding',
  );
  $export['funding_ops_counters'] = $view;

  return $export;
}
