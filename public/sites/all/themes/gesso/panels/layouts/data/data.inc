<?php
/**
 * Implements hook_panels_layouts().
 */
function gesso_data_panels_layouts() {
  $items['data'] = array(
    'title' => t('Data'),
    'category' => t('Responsive'),
    'icon' => 'data.png',
    'theme' => 'data',
    'admin css' => '../../../css/panels-admin/data.css',
    'regions' => array(
      'title' => t('Title'),
      'main' => t('Main'),
      'main_sidebar' => t('Main sidebar'),
      'row1' => t('Row 1'),
      'row2_first' => t('Row 2 first'),
      'row2_second' => t('Row 2 second'),
      'row2_third' => t('Row 2 third'),
      'row3' => t('Row 3'),
      'row4_first' => t('Row 4 first'),
      'row4_second' => t('Row 4 second'),
      'row4_third' => t('Row 4 third'),
      'row5' => t('Row 5'),
      'row6_first' => t('Row 6 first'),
      'row6_second' => t('Row 6 second'),
      'row6_third' => t('Row 6 third'),
    ),
  );

  return $items;
}