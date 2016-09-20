<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_multistep_panels_layouts() {
  $items['multistep'] = array(
    'title' => t('Multistep form layout'),
    'category' => t('Responsive'),
    'icon' => 'multistep.png',
    'theme' => 'multistep',
    'admin css' => '../../../css/panels-admin/multistep.css',
    'regions' => array(
      'preface' => t('Preface'),
      'title' => t('Title'),
      'main' => t('Main column'),
      'sidebar' => t('Sidebar'),
    ),
  );

  return $items;
}
