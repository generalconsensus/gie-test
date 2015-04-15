<?php
/**
 * @file
 * gie_organization.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_organization_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|contact';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'contact';
  $ds_fieldsetting->settings = array(
    'field_org_poc' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_org_telephone' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'T',
        ),
      ),
    ),
    'field_org_text_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'E',
        ),
      ),
    ),
  );
  $export['node|organization|contact'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_org_expertise' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_org_focus' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_org_mission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h2',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|organization|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|listing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'listing';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'h3',
          'fis-cl' => 'card__title',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_org_desc' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_org_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'card__image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|organization|listing'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|organization|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'organization';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_org_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|organization|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_organization_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|contact';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'contact';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_org_address',
      ),
      'right' => array(
        1 => 'field_org_poc',
        2 => 'field_org_telephone',
        3 => 'field_org_text_email',
      ),
    ),
    'fields' => array(
      'field_org_address' => 'left',
      'field_org_poc' => 'right',
      'field_org_telephone' => 'right',
      'field_org_text_email' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|organization|contact'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_org_mission',
        1 => 'field_org_focus',
        2 => 'field_org_expertise',
      ),
    ),
    'fields' => array(
      'field_org_mission' => 'ds_content',
      'field_org_focus' => 'ds_content',
      'field_org_expertise' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|organization|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|listing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'listing';
  $ds_layout->layout = 'article';
  $ds_layout->settings = array(
    'regions' => array(
      'main_content' => array(
        0 => 'field_org_logo',
        1 => 'group_card_content',
        2 => 'organization_counters_innovation_count',
        3 => 'title_field',
        4 => 'organization_counters_member_count',
        5 => 'field_org_desc',
        6 => 'group_card_counts',
        7 => 'organization_counters_favorite_count',
      ),
    ),
    'fields' => array(
      'field_org_logo' => 'main_content',
      'group_card_content' => 'main_content',
      'organization_counters_innovation_count' => 'main_content',
      'title_field' => 'main_content',
      'organization_counters_member_count' => 'main_content',
      'field_org_desc' => 'main_content',
      'group_card_counts' => 'main_content',
      'organization_counters_favorite_count' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'card' => 'card',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'main_content' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|organization|listing'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organization|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organization';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_org_logo',
      ),
    ),
    'fields' => array(
      'field_org_logo' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|organization|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_organization_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact';
  $ds_view_mode->label = 'Contact';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['contact'] = $ds_view_mode;

  return $export;
}
