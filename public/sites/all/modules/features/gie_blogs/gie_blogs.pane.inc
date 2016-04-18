<?php
/**
 * @file
 * gie_blogs.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_blogs_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'blogs_introduction';
  $template->title = 'Blogs Introduction';
  $template->plugin = 'text';
  $template->description = 'Blogs Introduction';
  $template->configuration = '';
  $export['blogs_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_blogs_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'blogs_introduction_und';
  $template->container = 'blogs_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Blogs</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/blogs">Add Blogs</a></p>
</div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['blogs_introduction_und'] = $template;

  return $export;
}
