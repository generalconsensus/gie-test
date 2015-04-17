<?php
/**
 * @file
 * gie_homepage.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_homepage_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_footer_callout';
  $template->title = 'Homepage footer callout';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['homepage_footer_callout'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_header';
  $template->title = 'Homepage Header';
  $template->plugin = 'text';
  $template->description = 'header area on homepage';
  $template->configuration = '';
  $export['homepage_header'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_join_callout';
  $template->title = 'Homepage Join callout';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['homepage_join_callout'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_homepage_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_footer_callout_und';
  $template->container = 'homepage_footer_callout';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h1>The Exchange Mission</h1>
<p>Users and Partners of the Exchange will communicate, collaborate and share in order to offer the best ideas the greatest opportunities to succeed. Our goal is to streamline and optimize the approach to international development.</p>
<div><a class="button" href="#">Learn more</a></div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['homepage_footer_callout_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_header_und';
  $template->container = 'homepage_header';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h1>You have the power to change the world</h1>
<p>The Exchange can help</p>
<div><a class="button" href="#">Join the community</a></div>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['homepage_header_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'homepage_join_callout_und';
  $template->container = 'homepage_join_callout';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h1>Ready to get started?</h1>
<a class="button button--highlight button--large" href="#">Join the community</a>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['homepage_join_callout_und'] = $template;

  return $export;
}
