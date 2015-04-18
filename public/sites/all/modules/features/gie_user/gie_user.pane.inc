<?php
/**
 * @file
 * gie_user.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function gie_user_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'members_directory_introduction';
  $template->title = 'Members directory introduction';
  $template->plugin = 'text';
  $template->description = '';
  $template->configuration = '';
  $export['members_directory_introduction'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function gie_user_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'members_directory_introduction_und';
  $template->container = 'members_directory_introduction';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<div class="pane--landing-intro__left">
<h1>Member Directory</h1>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam at porttitor sem. Aliquam erat volutpat. Donec placerat nisl magna, et faucibus arcu condimentum sed</p>
</div>
<div class="pane--landing-intro__right">
<p><a href="/user/register" class="button button--add">Join the community</a></p>
</div>',
    'format' => 'full_html',
    'title' => NULL,
  );
  $export['members_directory_introduction_und'] = $template;

  return $export;
}
