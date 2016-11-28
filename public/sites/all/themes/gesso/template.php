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

/**
 * Use "comment-form--2" for destination on anonymous user login links to comment form
 */
function gesso_comment_post_forbidden($variables) {
  $node = $variables['node'];
  global $user;

  // Since this is expensive to compute, we cache it so that a page with many
  // comments only has to query the database once for all the links.
  $authenticated_post_comments = &drupal_static(__FUNCTION__, NULL);

  if (!$user->uid) {
    if (!isset($authenticated_post_comments)) {
      // We only output a link if we are certain that users will get permission
      // to post comments by logging in.
      $comment_roles = user_roles(TRUE, 'post comments');
      $authenticated_post_comments = isset($comment_roles[DRUPAL_AUTHENTICATED_RID]);
    }

    if ($authenticated_post_comments) {
      // We cannot use drupal_get_destination() because these links
      // sometimes appear on /node and taxonomy listing pages.
      if (variable_get('comment_form_location_' . $node->type, COMMENT_FORM_BELOW) == COMMENT_FORM_SEPARATE_PAGE) {
        $destination = array('destination' => "comment/reply/$node->nid#comment-form--2");
      }
      else {
        $destination = array('destination' => "node/$node->nid#comment-form--2");
      }

      if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL)) {
        // Users can register themselves.
        return t('<a href="@login">Log in</a> or <a href="@register">register</a> to post comments', array('@login' => url('user/login', array('query' => $destination)), '@register' => url('user/register')));
      }
      else {
        // Only admins can add new users, no public registration.
        return t('<a href="@login">Log in</a> to post comments', array('@login' => url('user/login', array('query' => $destination))));
      }
    }
  }
}

function gesso_menu_tree__user_menu($variables) {
  return '' . '<ul class="nav"><li class="nav__item"><a href="#" data-remodal-target="modal-language-switcher" class="nav__link nav__link--language"><span>Language</span></a></li>' . $variables['tree'] . '</ul>';
}
