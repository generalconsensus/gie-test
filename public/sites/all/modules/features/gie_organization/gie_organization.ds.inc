<?php
/**
 * @file
 * gie_organization.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gie_organization_ds_layout_settings_info() {
  $export = array();

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
  $export['node|organization|teaser'] = $ds_layout;

  return $export;
}
