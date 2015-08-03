<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_landing_alt_panels_layouts() {
  $items['landing_alt'] = array(
    'title' => t('Landing Page (blue)'),
    'category' => t('Responsive'),
    'icon' => 'landing_alt.png',
    'theme' => 'landing_alt',
    'admin css' => '../../../css/panels-admin/landing-alt.css',
    'regions' => array(
      'preface' => t('Preface'),
      'title' => t('Title'),
      'sidebar' => t('Sidebar'),
      'main' => t('Main column'),
    ),
  );

  return $items;
}
