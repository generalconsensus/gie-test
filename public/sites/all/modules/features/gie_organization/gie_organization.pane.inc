<?php
/**
 * @file
 * gie_organization.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_organization_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'organizations_introduction';
  $template->title = 'Organizations Introduction';
  $template->plugin = 'text';
  $template->description = 'Organizations Introduction';
  $template->configuration = '';
  $export['organizations_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_organization_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'organizations_introduction_und';
  $template->container = 'organizations_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
                <h1>Organizations</h1>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed</p>
              </div>
<div class="pane--landing-intro__right">
                <p><a href="/node/add/organization" class="button button--add">Add An Organization</a></p>
              </div>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['organizations_introduction_und'] = $template;

  return $export;
}
