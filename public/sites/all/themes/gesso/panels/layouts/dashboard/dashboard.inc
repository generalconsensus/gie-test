<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_dashboard_panels_layouts() {
  $items['dashboard'] = array(
    'title' => t('Micropanels: Dashboard'),
    'category' => t('Responsive'),
    'icon' => 'dashboard.png',
    'theme' => 'dashboard',
    'admin css' => '../../../css/panels-admin/dashboard.css',
    'regions' => array(
      'preface' => t('Preface'),
      'sidebar' => t('Sidebar'),
      'main' => t('Main content'),
      'bottom_left' => t('Bottom left'),
      'bottom_right' => t('Bottom right'),
    ),
  );

  return $items;
}
