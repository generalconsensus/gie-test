<?php
/**
 * @file
 * Date-related functions.
 */

/**
 * Returns HTML for a start/end date combination on form.
 */
function gesso_date_combo($vars) {
  $date_popup_multistep =  (module_exists('multistep') && !empty($vars['element']) && !empty($vars['element']['#entity']->type) && is_multistep($vars['element']['#entity']->type));
  $element = $vars['element'];
  $field = field_info_field($element['#field_name']);
  $instance = field_info_instance($element['#entity_type'], $element['#field_name'], $element['#bundle']);
  $type = $element['value']['#type'];
  $only_use_smacss = theme_get_setting('only_use_smacss');

  $title = t($element['#title']) . ' ' . ($element['#delta'] > 0 ? intval($element['#delta'] + 1) : '');

  // Define wrapper attributes.
  $wrapper_attributes = array();
  $wrapper_attributes['class'] = array('form-item');
  $wrapper_attributes['class'][] = 'form-item--' . drupal_html_class($type);

  if ($element['#required']) {
    $wrapper_attributes['class'][] = 'is-required';
  }

  // Define fieldset attributes.
  $fieldset_attributes = array();

  if (isset($element['#id'])) {
    $fieldset_attributes['id'] = $element['#id'];
  }

  if (!empty($element['#attributes']['class'])) {
    $fieldset_attributes['class'] = (array) $element['#attributes']['class'];
  }

  $fieldset_attributes['class'][] = 'form-item__fieldset';

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  // Set markup for description.
  if ($only_use_smacss) {
    $description = !empty($element['#fieldset_description']) ? '<div class="form-item__description">' . $element['#fieldset_description'] . '</div>' : '';
  }
  else {
    $description = !empty($element['#fieldset_description']) ? '<div class="form-item__description description">' . $element['#fieldset_description'] . '</div>' : '';
  }

  if ($date_popup_multistep) {
    $legend = '<div class="form-item__label-container">' .  $title . ' ' . $required . '</div>';
    $fieldset = $legend . '<div class="form-item__content-container"><fieldset' . drupal_attributes($fieldset_attributes) . '>' .  $element['#children'] . '</fieldset></div>';
    return '<div' . drupal_attributes($wrapper_attributes) . '>' . $fieldset  .  '</div>';
  } else  {
    $legend = isset($element['#title']) ? '<legend class="form-item__legend">' . $title . ' ' . $required . '</legend>' : '';
    $fieldset = '<fieldset' . drupal_attributes($fieldset_attributes) . '>' . $legend . $element['#children'] . '</fieldset>' . $description;
    return '<div' . drupal_attributes($wrapper_attributes) . '>' . $fieldset  .  '</div>';
  }

}
