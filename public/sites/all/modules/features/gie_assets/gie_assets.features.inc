<?php
/**
 * @file
 * gie_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gie_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gie_assets_image_default_styles() {
  $styles = array();

  // Exported image style: card__500x300_.
  $styles['card__500x300_'] = array(
    'label' => 'Card (500x300)',
    'effects' => array(
      4 => array(
        'name' => 'imagefield_focus_crop',
        'data' => array(
          'target' => 'focus_rect only',
        ),
        'weight' => -10,
      ),
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
      6 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 500,
            'height' => 300,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: org_teaser.
  $styles['org_teaser'] = array(
    'label' => 'Org Teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 50,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resource_author__35x35_.
  $styles['resource_author__35x35_'] = array(
    'label' => 'Resource Author (35x35)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 35,
          'height' => 35,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resource_author__58x58_.
  $styles['resource_author__58x58_'] = array(
    'label' => 'Resource Author (58x58)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 58,
          'height' => 58,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
