<?php
/**
 * @file
 * gie_news.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_news_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'news_introductions';
  $template->title = 'News Introduction';
  $template->plugin = 'text';
  $template->description = 'News Introduction';
  $template->configuration = '';
  $export['news_introductions'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_news_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'news_introductions_und';
  $template->container = 'news_introductions';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>News</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/news">Add News</a></p>
</div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['news_introductions_und'] = $template;

  return $export;
}
