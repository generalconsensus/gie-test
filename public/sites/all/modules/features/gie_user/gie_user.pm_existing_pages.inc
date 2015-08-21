<?php
/**
 * @file
 * gie_user.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function gie_user_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'reset_password_page';
  $pm_existing_page->label = 'Reset password page';
  $pm_existing_page->context = 'entity|user|uid';
  $pm_existing_page->paths = 'user/reset/%/%/%';
  $export['reset_password_page'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user_registration';
  $pm_existing_page->label = 'User registration';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'user/register';
  $export['user_registration'] = $pm_existing_page;

  return $export;
}
