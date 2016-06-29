<?php
/**
 * @file
 * gie_microsite.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gie_microsite_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-microsite-menu.
  $menus['menu-microsite-menu'] = array(
    'menu_name' => 'menu-microsite-menu',
    'title' => 'Microsite Menu',
    'description' => 'This is the menu for microsites. Set menu items to display per domain. ',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Microsite Menu');
  t('This is the menu for microsites. Set menu items to display per domain. ');

  return $menus;
}
