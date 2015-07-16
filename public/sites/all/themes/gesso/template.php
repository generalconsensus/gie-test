<?php
/**
 * @file
 * Contains functions to alter Drupal's markup.
 */

require_once dirname(__FILE__) . '/includes/aggregator.inc';
require_once dirname(__FILE__) . '/includes/block.inc';
require_once dirname(__FILE__) . '/includes/breadcrumb.inc';
require_once dirname(__FILE__) . '/includes/comments.inc';
require_once dirname(__FILE__) . '/includes/css.inc';
require_once dirname(__FILE__) . '/includes/date.inc';
require_once dirname(__FILE__) . '/includes/entity.inc';
require_once dirname(__FILE__) . '/includes/feed-icon.inc';
require_once dirname(__FILE__) . '/includes/field.inc';
require_once dirname(__FILE__) . '/includes/field-collection.inc';
require_once dirname(__FILE__) . '/includes/file.inc';
require_once dirname(__FILE__) . '/includes/form.inc';
require_once dirname(__FILE__) . '/includes/html.inc';
require_once dirname(__FILE__) . '/includes/js.inc';
require_once dirname(__FILE__) . '/includes/lists.inc';
require_once dirname(__FILE__) . '/includes/messages.inc';
require_once dirname(__FILE__) . '/includes/navigation.inc';
require_once dirname(__FILE__) . '/includes/node.inc';
require_once dirname(__FILE__) . '/includes/page.inc';
require_once dirname(__FILE__) . '/includes/pager.inc';
require_once dirname(__FILE__) . '/includes/panels.inc';
require_once dirname(__FILE__) . '/includes/panels-ipe.inc';
require_once dirname(__FILE__) . '/includes/progress-bar.inc';
require_once dirname(__FILE__) . '/includes/region.inc';
require_once dirname(__FILE__) . '/includes/user.inc';
require_once dirname(__FILE__) . '/includes/views.inc';

/*
 * Comment form alter
 * Change submit button to say comment
 */
function gesso_form_comment_form_alter(&$form, &$form_state) {
    $form['actions']['submit']['#value'] = t('Comment');
}

/*
 * User Register form alter
 * Change submit button to say Activate your account
 */
function gesso_form_alter(&$form, &$form_state, $form_id) {
    if ($form_id == 'user_register_form') {
        $form['actions']['submit']['#value'] = t('Activate Your Account');
        $form['actions']['submit']['#attributes']['class'][] = 'button--highlight';
    }
}

/*
 * Accessibility
 * Add default alt and title when none has been given
 */
function gesso_image($variables) {
  $attributes = $variables ['attributes'];
  $attributes ['src'] = file_create_url($variables ['path']);

  foreach (array('width', 'height', 'alt', 'title') as $key) {

    if (isset($variables [$key])) {
      $attributes [$key] = $variables [$key];
    }

  }

  // Set default alt and title if no alt provided
  if (empty($variables['alt'])) {
    $attributes ['alt'] = 'Default image, no image supplied by the user.';
    $attributes ['title'] = 'Default image, no image supplied by the user.';
  }

  // set title equal to alt if no title given
  if (!empty($variables['alt']) && empty($variables['title'])) {
    $attributes ['title'] = $attributes ['alt'];
  }

  return '<img' . drupal_attributes($attributes) . ' />';
}

/**
 * Get recipient variable working correctly.
 */
function gesso_preprocess_mimemail_message(&$variables) {
  $recipient = $variables['recipient'];
  if (is_string($recipient)) {
    $user = user_load_by_mail($recipient);
    $variables['recipient'] = $user;
  }
}
