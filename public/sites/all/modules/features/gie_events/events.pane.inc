<?php
/**
 * @file
 * events.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function events_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'events_introduction';
  $template->title = 'Events Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['events_introduction'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'past_events_introduction';
  $template->title = 'Past Events Introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['past_events_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function events_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'events_introduction_und';
  $template->container = 'events_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Events</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/event">Add an Event</a></p>

<p><a class="button" href="/events/past">SEE PAST EVENTS</a></p>
</div>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['events_introduction_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'past_events_introduction_und';
  $template->container = 'past_events_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Past Events</h1>
</div>

<div class="pane--landing-intro__right">
<p><a class="button button--add" href="/node/add/event">Add an Event</a></p>

<p><a class="button" href="/events">SEE CURRENT EVENTS</a></p>
</div>
',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['past_events_introduction_und'] = $template;

  return $export;
}
