<?php
/**
 * @file
 * gie_user.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gie_user_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|full';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'user_full_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'plain_text_name',
    ),
    'user_member_since' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_email' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['user|user|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|title';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'title';
  $ds_fieldsetting->settings = array(
    'user_full_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'linked_name',
    ),
  );
  $export['user|user|title'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_teaser';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_teaser';
  $ds_fieldsetting->settings = array(
    'user_full_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'linked_name',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'profile-thumb__name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'field_delimiter' => '',
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
    ),
    'field_user_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'profile-thumb__image--rounded',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['user|user|user_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_teaser_summary';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_teaser_summary';
  $ds_fieldsetting->settings = array(
    'user_full_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'linked_name',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'profile-thumb__name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'field_delimiter' => '',
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
    ),
    'field_user_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'profile-thumb__summary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'profile-thumb__image--rounded',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['user|user|user_teaser_summary'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_user_photo',
      ),
      'right' => array(
        1 => 'user_full_name',
        2 => 'field_user_company',
        3 => 'field_user_title',
        4 => 'field_user_address',
        5 => 'user_member_since',
        6 => 'field_user_type',
        7 => 'flag_follow',
        8 => 'user_email',
      ),
    ),
    'fields' => array(
      'field_user_photo' => 'left',
      'user_full_name' => 'right',
      'field_user_company' => 'right',
      'field_user_title' => 'right',
      'field_user_address' => 'right',
      'user_member_since' => 'right',
      'field_user_type' => 'right',
      'flag_follow' => 'right',
      'user_email' => 'right',
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
  $export['user|user|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|title';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'title';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'user_full_name',
      ),
    ),
    'fields' => array(
      'user_full_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|title'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_teaser';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_photo',
        1 => 'user_full_name',
      ),
    ),
    'fields' => array(
      'field_user_photo' => 'ds_content',
      'user_full_name' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile-thumb' => 'profile-thumb',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|user_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_teaser_summary';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_teaser_summary';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_user_photo',
        1 => 'user_full_name',
      ),
      'main_content' => array(
        2 => 'field_user_summary',
      ),
    ),
    'fields' => array(
      'field_user_photo' => 'media',
      'user_full_name' => 'media',
      'field_user_summary' => 'main_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'profile-thumb' => 'profile-thumb',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|user_teaser_summary'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gie_user_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'title';
  $ds_view_mode->label = 'Title';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['title'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser';
  $ds_view_mode->label = 'User Teaser';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_teaser_summary';
  $ds_view_mode->label = 'User Teaser with Summary';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_teaser_summary'] = $ds_view_mode;

  return $export;
}
