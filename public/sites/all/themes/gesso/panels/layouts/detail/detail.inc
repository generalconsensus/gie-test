<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_detail_panels_layouts() {
  $items['detail'] = array(
    'title' => t('Detail'),
    'category' => t('Responsive'),
    'icon' => 'detail.png',
    'theme' => 'detail',
    'admin css' => '../../../css/panels-admin/detail.css',
    'regions' => array(
      'title' => t('Title'),
      'main' => t('Main'),
      'main_sidebar' => t('Main sidebar'),
      'center' => t('Center'),
      'box_first' => t('Box 1'),
      'box_second' => t('Box 2'),
      'box_third' => t('Box 3'),
      'bottom_sidebar' => t('Bottom sidebar'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}