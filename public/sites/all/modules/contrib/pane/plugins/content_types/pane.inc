<?php

/**
 * CTools content type definition
 */
$plugin = array(
  'title' => t('Custom pane'),
  'content type' => 'pane_pane_content_type_content_type',
  'js' => array(
    'misc/autocomplete.js'
  ),
  'all contexts' => TRUE,
);

/**
 * List of Pane content types
 *
 * @return array
 */
function pane_pane_content_type_content_types() {
  $types = array();
  
  foreach ( pane_get_containers() as $container ) {
    $info = array(
      'title' => $container->title,
      'category' => t('Custom panes'),
      'js' => array(
        'misc/autocomplete.js'
      )
    );
    
    $types[$container->name] = $info;
  }
  
  return $types;
}

/**
 * Information about a particular pane content type
 *
 * @param string $subtype_id          
 *
 * @return array
 */
function pane_pane_content_type_content_type($subtype_id) {
  $container = pane_load_container($subtype_id);
  $info = array();
  
  if (FALSE !== $container) {
    $info = array(
      'title' => filter_xss($container->title),
      'category' => t('Custom panes'),
      'js' => array(
        'misc/autocomplete.js'
      )
    );
  }
  
  return $info;
}

/**
 * Renderer for Pane
 *
 * @param string $subtype_id          
 * @param array $conf          
 * @param array $args          
 * @param array $contexts          
 *
 * @return stdClass
 */
function pane_pane_content_type_render($subtype_id, $conf, $args, $contexts) {
  global $language;
  
  $lang = LANGUAGE_NONE;
  
  if (drupal_multilingual()) {
    $lang = (TRUE === isset($form_state['values']['language'])) ? $form_state['values']['language'] : $language->language;
  }
  
  $pane = pane_load_container($subtype_id, $lang);
  
  if ($pane == FALSE)
    return;
  
  $block = new stdClass();
  
  $block->title = empty($pane->data['override_title']) ? $pane->title : $pane->data['override_title_text'];
  
  // Make sure we can use render arrays as well as HTML
  $markup = $pane->render();
  
  if (TRUE === is_array($markup)) {
    $markup = render($markup);
  }
  
  // Return empty block if there's no content in the block
  if (empty($markup))
    return;
    
  // Perform context substitutions
  if (FALSE === empty($contexts)) {
    $markup = ctools_context_keyword_substitute($markup, array(), $contexts);
  }
  
  $block->content = array(
    '#markup' => $markup,
  );
  
  return $block;
}

/**
 * Generate administrative title for Panes
 *
 * @param string $subtype          
 * @param array $conf          
 * @param array $context          
 *
 * @return string
 */
function pane_pane_content_type_admin_title($subtype, $conf, $context = NULL) {
  $pane = pane_load_container($subtype);
  if (FALSE !== $pane) {
    $title = strip_tags($pane->title);
    return t('Custom pane: !title', array(
      '!title' => $title
    ));
  }
  
  return NULL;
}

/**
 * Administrative information for Panes
 *
 * @param string $subtype          
 * @param array $conf          
 * @param array $context          
 *
 * @return stdClass
 */
function pane_admin_info($subtype, $conf, $context = NULL) {
  return pane_render($subtype, $conf, NULL, $context);
}

/**
 * Edit form for Pane
 *
 * @param array $form          
 * @param array $form_state          
 *
 * @return array
 */
function pane_pane_content_type_edit_form($form, &$form_state) {
  global $language;
  
  $lang = LANGUAGE_NONE;
  
  if (drupal_multilingual()) {
    $lang = (TRUE === isset($form_state['values']['language'])) ? $form_state['values']['language'] : $language->language;
  }
  
  $container = pane_load_container($form_state['subtype_name'], $lang);
  return $container->data_edit_form_wrapper($form, $form_state);
}
function pane_pane_content_type_edit_form_validate(&$form, &$form_state) {
  $container = pane_load_container($form_state['subtype_name']);
  $container->data_edit_form_validate($form, $form_state);
}

/**
 * Form submit handler for Pane edit form
 *
 * @param array $form          
 * @param array $form_state          
 */
function pane_pane_content_type_edit_form_submit(&$form, &$form_state) {
  $container = pane_load_container($form_state['subtype_name']);
  $container->data_edit_form_wrapper_submit($form, $form_state);
  $container->save_data();
}
