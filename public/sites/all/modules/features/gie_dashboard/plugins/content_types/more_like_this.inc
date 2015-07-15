<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
    'single' => TRUE,
    'title' => t('More like this'),
    'description' => t('More like this card listings'),
    'category' => t('More like this'),
    'edit form' => 'more_like_this_edit_form',
    'render callback' => 'more_like_this_render',
    'defaults' => array(
        'type' => ''
    ),
);

/**
 * The 'admin info' callback for the content type.
 */
function more_like_this_admin_info($subtype, $conf, $contexts) {
    if (!empty($conf)) {
        $block = new stdClass();
        $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
        $block->content = t('More like this card');
        return $block;
    }
}

/**
 * The 'Edit form' callback for the content type.
 */
function more_like_this_edit_form($form, &$form_state) {
    $conf = $form_state['conf'];

    $form['type'] = array(
        '#type' => 'select',
        '#options' => array(
            'innovation' => t('Innovation'),
            'funding' => t('Funding Op'),
            'resource' => t('Resource'),
        ),
        '#title' => t('Which card would you like to display?'),
        '#default_value' => $conf['type'],
    );

    return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function more_like_this_edit_form_submit($form, &$form_state) {
    foreach (array_keys($form_state['plugin']['defaults']) as $key) {
        if (isset($form_state['values'][$key])) {
            $form_state['conf'][$key] = $form_state['values'][$key];
        }
    }
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function more_like_this_render($subtype, $conf, $panel_args, $context = NULL) {
    // Global variables
    global $user;
    $uid = $user->uid;

    // DB query
    $db_query = new EntityFieldQuery();
    $db_query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', $conf['type'])
        ->propertyCondition('uid', $uid)
        ->propertyCondition('status', 1);

    // DB results
    $db_results = $db_query->execute();

    // If user has nodes look for similar ones
    if (isset($db_results['node'])) {
        $nids = array_keys($db_results['node']);

        // Create static list of node id's
        $my_nids = _mlt_nids($nids);

        // Select an index
        $index = search_api_index_load('default_node_index');
        $query = new SearchApiQuery($index);

        // Build a filter
        $filter = $query->createFilter('AND');
        $filter->condition('type', $conf['type'], '=');
        $filter->condition('status', 1);

        // Exclude node id's
        foreach ($nids as $nid) {
            $filter->condition('nid', trim($nid), '<>');
        }

        $query->filter($filter);

        // Limit results
        $query->range(null,8);

        // More like this
        $mlt = array(
            'id' => $nids[0],
            'fields' => array('title', 'body:value', 'field_term_sector', 'field_term_region', 'field_term_topic')
        );

        $query->setOption('search_api_mlt', $mlt);

        // Fetch results
        $results = $query->execute();
    }

    // Render results
    $output = '';

    // we have results
    if (isset($results['results'])) {
        $nids = array_keys($results['results']);
        $nodes = node_load_multiple($nids);

        $index = 0;
        $row_count = array('first', 'second', 'third', 'fourth');

        foreach($nodes as $node){
            if($index == 0 || $index == 4) $output .= '<div class="view--card-view-4col">';
            $output .= '<div class="views-row ' . $row_count[$index] . '">';
            $output .= drupal_render(node_view($node, 'listing'));
            $output .= '</div>';
            if($index == 3 || $index == 7) $output .= '</div>';
            $index ++;
        }
    } else {

        switch($conf['type']){
            case "innovation":
                $output .= 'You have not added any content to the Exchange. <a title="Add an Innovation" href="/node/add/innovation">Add an Innovation</a> to get better recommendations.';
                break;
            case "resource":
                $output .= 'You have not added any content to the Exchange. <a title="Add Resource" href="/node/add/resource">Add Resource</a> to get better recommendations.';
                break;
            case "funding":
                $output .= 'You have not added any content to the Exchange. <a title="Add Funding Opp" href="/node/add/funding">Add Funding Opp</a> to get better recommendations.';
                break;
            default:
                $output .= 'No results.';
                break;
        }

    }

    // Render block
    $block = new stdClass();
    $block->title = t('More like this');

    // Create block content.
    $block->content = $output;
    return $block;
}

function _mlt_nids($nids) {
    $var = &drupal_static(__FUNCTION__);
    if(!isset($var)) {
        $var = $nids;
    }
    return $var;
}