<?php
/**
 * @file
 * CSS-related functions.
 */

/**
 * Implements hook_css_alter().
 */
function gesso_css_alter(&$css) {
  $theme_path = drupal_get_path('theme', $GLOBALS['theme_key']);

  // Replace admin menu css.
  if (module_exists('admin_menu')) {
    $css_path = drupal_get_path('module', 'admin_menu') . '/admin_menu.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/admin_menu.css';
    }
    $css_path = drupal_get_path('module', 'admin_menu') . '/admin_menu.uid1.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/admin_menu.uid1.css';
    }
  }

  // Replace admin menu toolbar css.
  if (module_exists('admin_menu_toolbar')) {
    $css_path = drupal_get_path('module', 'admin_menu_toolbar') . '/admin_menu_toolbar.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/admin_menu_toolbar.css';
    }
  }

  // Replace shortcut css.
  if (module_exists('shortcut')) {
    $css_path = drupal_get_path('module', 'shortcut') . '/shortcut.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/shortcut.css';
    }
  }

  // Replace toolbar css.
  if (module_exists('toolbar')) {
    $css_path = drupal_get_path('module', 'toolbar') . '/toolbar.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/toolbar.css';
    }
  }

  // Replace tb_megamenu css.
  if (module_exists('tb_megamenu')) {

    $css_path = drupal_get_path('module', 'tb_megamenu') . '/css/bootstrap.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/tb_megamenu/bootstrap.css';
    }
    $css_path = drupal_get_path('module', 'tb_megamenu') . '/css/base.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/tb_megamenu/base.css';
    }
    $css_path = drupal_get_path('module', 'tb_megamenu') . '/css/default.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/tb_megamenu/default.css';
    }
    $css_path = drupal_get_path('module', 'tb_megamenu') . '/css/compatibility.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/tb_megamenu/compatibility.css';
    }
  }

  // Replace toolbar css.
  if (module_exists('super_login')) {
    $css_path = drupal_get_path('module', 'super_login') . '/css/super-login.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/super_login/super-login.css';
    }
    $css_path = drupal_get_path('module', 'super_login') . '/css/super-login-buttons.css';
    if (isset($css[$css_path])) {
      $css[$css_path]['data'] = $theme_path . '/css/overrides/super_login/super-login-buttons.css';
    }
  }
}
