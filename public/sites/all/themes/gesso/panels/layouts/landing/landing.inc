<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_landing_panels_layouts() {
  $items['landing'] = array(
    'title' => t('Landing Page'),
    'category' => t('Responsive'),
    'icon' => 'landing.png',
    'theme' => 'landing',
    'admin css' => '../../../css/panels-admin/landing.css',
    'regions' => array(
      'preface' => t('Preface'),
      'title' => t('Title'),
      'sidebar' => t('Sidebar'),
      'main' => t('Main column'),
    ),
  );

  return $items;
}
