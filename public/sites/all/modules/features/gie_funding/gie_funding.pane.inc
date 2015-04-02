<?php
/**
 * @file
 * gie_funding.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_funding_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'funding_introduction';
  $template->title = 'Funding Introduction';
  $template->plugin = 'text';
  $template->description = 'Funding Introduction';
  $template->configuration = '';
  $export['funding_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_funding_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'funding_introduction_und';
  $template->container = 'funding_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h1>Funding Opportunities</h1>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed.</p>
<a class="button button--alt" href="/node/add/funding">Add Funding Opp</a>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['funding_introduction_und'] = $template;

  return $export;
}
