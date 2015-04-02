<?php
/**
 * @file
 * gie_resource.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_resource_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'resources_introduction';
  $template->title = 'Resources Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['resources_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_resource_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'resources_introduction_und';
  $template->container = 'resources_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h1>Resources</h1>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed</p>
<a class="button button--alt" href="/node/add/resource">Add Resource</a>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['resources_introduction_und'] = $template;

  return $export;
}
