<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_sidebar_right_panels_layouts() {
  $items['sidebar_right'] = array(
    'title' => t('Preface and right sidebar'),
    'category' => t('Responsive'),
    'icon' => 'sidebar_right.png',
    'theme' => 'sidebar_right',
    'admin css' => '../../../css/panels-admin/sidebar-right.css',
    'regions' => array(
      'preface' => t('Preface'),
      'title' => t('Title'),
      'main' => t('Main column'),
      'sidebar' => t('Sidebar'),
    ),
  );

  return $items;
}