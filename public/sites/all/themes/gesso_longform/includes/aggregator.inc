<?php
/**
 * @file
 * Aggregator-related functions.
 */

/**
 * Implements hook_preprocess_aggregator_item().
 */
function gesso_longform_preprocess_aggregator_item(&$vars) {
  $item = $vars['item'];

  // Create datetime variable for <time> element.
  $vars['datetime'] = format_date($item->timestamp, 'custom', 'c');
}
