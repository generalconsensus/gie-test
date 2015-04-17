<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_home_panels_layouts() {
  $items['home'] = array(
    'title' => t('Homepage'),
    'category' => t('Responsive'),
    'icon' => 'home.png',
    'theme' => 'home',
    'admin css' => '../../../css/panels-admin/home.css',
    'regions' => array(
      'hero' => t('Hero'),
      'main' => t('Main'),
      'villain' => t('Villain'),
      'postscript' => t('Postscript'),
    ),
  );

  return $items;
}
