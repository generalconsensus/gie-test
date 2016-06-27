<?php
/**
 * @file
 * gie_general.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_general_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'about_the_exchange';
  $template->title = 'About The Exchange';
  $template->plugin = 'text';
  $template->description = 'About the Exchange';
  $template->configuration = '';
  $export['about_the_exchange'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'welcome_explore_link';
  $template->title = 'Welcome Explore Link';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['welcome_explore_link'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'welcome_footer';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'This is the Footer welcome message';
  $template->configuration = '';
  $export['welcome_footer'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'welcome_page_';
  $template->title = 'Welcome Page ';
  $template->plugin = 'text';
  $template->description = 'This is the text box for the welcome page. ';
  $template->configuration = '';
  $export['welcome_page_'] = $template;

  return $export;
}
