<?php

/**
 * Implements hook_drush_command().
 */
function gie_testing_drush_command() {

  $items['f1-search-background'] = array(
    'description' => 'Retrieve random set of results from the index table.',
    'aliases' => array('f1-search'),
    'arguments' => array(
      'type' => 'The type of content to retrieve.',
    ),
    'callback' => 'f1_search_background'
  );

  return $items;
}

function f1_search_background($type) {
  switch ($type){
    case 'random':
      $search_results = db_query("SELECT word from search_index WHERE score > 0 ORDER BY RAND() LIMIT 10")->fetchCol();
      break;
    case 'long-form':
      $search_results = db_query("SELECT title from node WHERE type = :type ORDER BY RAND() LIMIT 10", array(':type' => 'long_form_page'))->fetchCol();
      break;
    case 'microsite-type':
      break;
    case 'microsite-page':
      break;
    case 'microsite-affiliated':
      break;
    case 'action-cards':
      break;
    case 'error-pages':
      break;
    case 'homepage':
      break;
    case 'persona':
      break;
  }

  if (!empty($search_results)) {
    drush_print(json_encode($search_results));
    return TRUE;
  }
  return FALSE;
}
