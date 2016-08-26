<?php
/**
 * @file
 * Page template functions.
 */

/**
 * Implements hook_preprocess_page().
 */
function gesso_preprocess_page(&$vars, $hook) {
  // Determine if Panels is rendering this page.
  $vars['is_panel'] = FALSE;
  $panel_page = page_manager_get_current_page();

  if (module_exists('page_manager') && count($panel_page)) {
    $vars['is_panel'] = TRUE;

    // Add template suggestion for page--panel.tpl.php.
    $vars['theme_hook_suggestions'][] = 'page__panel';

    if (!extension_loaded('newrelic')) {
      return;
    }

    $name = NULL;

    // Look for a panel page...
    if (isset($panel_page['name'])) {
      // If it's a node page put the argument's node type into the transaction
      // name.
      if ($panel_page['name'] == 'node_view') {
        if (isset($panel_page['contexts']['argument_entity_id:node_1']->data)) {
          $node = $panel_page['contexts']['argument_entity_id:node_1']->data;
          $name = 'page_manager_node_view_page/' . $node->type;
        }
      }
      // If it's a page_manager page use the panel name.
      else if ($panel_page['task']['task type'] == 'page') {
        $name = 'page_manager_page_execute/' . $panel_page['name'];
      }
    }
    else {
      $menu_item = menu_get_item();
      if ($menu_item['path'] == 'node/%') {
        // Looks like panels didn't have a variant and it's falling back to
        // node_page_view.
        $name = 'node_page_view/' . $menu_item['page_arguments'][0]->type;
      }
    }

    if ($name) {
      newrelic_name_transaction($name);
    }
  }

  // Drupal 7 incorrectly sets the page title to "User account" for all three of
  // these pages.
  $title = drupal_get_title();
  if (arg(0) === 'user' && $title == t('User account')) {
    if (arg(1) === 'login' || arg(1) == '') {
      drupal_set_title(t('User login'));
    }
    if (arg(1) === 'password') {
      drupal_set_title(t('Request new password'));
    }
    if (arg(1) === 'register') {
      drupal_set_title(t('Create new account'));
    }
  }

  // Add template suggestion for page--nodetype.tpl.php.
  if (isset($vars['node'])) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }

  // Remove default home page content.
  unset($vars['page']['content']['system_main']['default_message']);

  // Remove block wrapper from main system block.
  if (isset($vars['page']['content']['system_main']['#theme_wrappers']) && is_array($vars['page']['content']['system_main']['#theme_wrappers'])) {
    $vars['page']['content']['system_main']['#theme_wrappers'] = array_diff($vars['page']['content']['system_main']['#theme_wrappers'], array('block'));
  }

  // Add node edit template suggestion
  $vars['theme_hook_suggestions'][] = 'page__node__edit';

  // Uncomment the following if you want to change page.tpl.php variables based
  // on node type.
  //if (isset($vars['node'])) {
  //  switch ($vars['node']->type) {
  //    case 'page':
  //      break;
  //  }
  //}
}
