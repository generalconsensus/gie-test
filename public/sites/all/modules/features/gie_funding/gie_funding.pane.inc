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
  $template->name = 'expired_funding_introduction';
  $template->title = 'Expired Funding Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['expired_funding_introduction'] = $template;

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
  $template->name = 'expired_funding_introduction_und';
  $template->container = 'expired_funding_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Expired Funding Opportunities</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/funding">Add Funding Opp</a></p>

<p><a class="button" href="/funding">See Available Funding Opportunities</a></p>
</div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['expired_funding_introduction_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'funding_introduction_und';
  $template->container = 'funding_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Funding Opportunities</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/funding">Add Funding Opp</a></p>

<p><a class="button" href="/funding/expired">See Expired Funding Opportunities</a></p>
</div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['funding_introduction_und'] = $template;

  return $export;
}
