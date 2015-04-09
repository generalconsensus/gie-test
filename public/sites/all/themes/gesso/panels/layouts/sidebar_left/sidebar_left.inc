<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_sidebar_left_panels_layouts() {
  $items['sidebar_left'] = array(
    'title' => t('Preface and left sidebar'),
    'category' => t('Responsive'),
    'icon' => 'sidebar_left.png',
    'theme' => 'sidebar_left',
    'admin css' => '../../../css/panels-admin/sidebar-left.css',
    'regions' => array(
      'preface' => t('Preface'),
      'title' => t('Title'),
      'sidebar' => t('Sidebar'),
      'main' => t('Main column'),
    ),
  );

  return $items;
}
