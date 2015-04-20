<?php
/**
 * @file
 * gie_program.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_program_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'programs_introduction';
  $template->title = 'Programs Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['programs_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_program_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'programs_introduction_und';
  $template->container = 'programs_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Programs</h1>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed</p>
</div>
<div class="pane--landing-intro__right">
<p><a href="/node/add/program" class="button button--add">Add An Program</a></p>
</div>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['programs_introduction_und'] = $template;

  return $export;
}
