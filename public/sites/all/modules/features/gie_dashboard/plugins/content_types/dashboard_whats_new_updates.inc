<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
    'single' => TRUE,
    'title' => t('Dashboard Whats New Exchange Updates Form'),
    'description' => t('Dyanamic exchange update numbers based on selection'),
    'category' => t('dashboard'),
    'edit form' => 'dashboard_whats_new_updates_admin_form',
    'render callback' => 'dashboard_whats_new_updates_render',
    'defaults' => array(
        'type' => ''
    ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_updates_admin_info($subtype, $conf, $contexts) {
    if (!empty($conf)) {
        $block = new stdClass();
        $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
        $block->content = t('Dashboard Whats New Updates Form');
        return $block;
    }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_updates_admin_form($form, &$form_state) {

    $form['type'] = array(
      '#type' => 'hidden',
    );

    return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_updates_render($subtype, $conf, $panel_args, $context = NULL) {
    // Render block
    $block = new stdClass();
    $block->title = t('Exchange Updates in the last');

    // Create block content.
    $block->content = drupal_render(drupal_get_form('dashboard_whats_new_updates_form'));

    return $block;
}

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_updates_form($form, &$form_state) {
    $conf = $form_state['conf'];
    if (!empty($_GET['updates']) && $_GET['updates'] == 'last-visit') {
        // Customize the data for showing everything since the last login
        global $user;
        $last_access = db_query("select access from {users} where uid = :uid", array(':uid' => $user->uid))->fetchField();
        db_query("SELECT COUNT(nid) from {node} WHERE type = 'organization' AND changed between :start AND :end", array(
          ':start' => $last_access,
          ':end' => $last_access
        ))->fetchField();
        $organizations = db_query("SELECT COUNT(nid) from {node} WHERE type = 'organization' AND changed between :start AND :end", array(
          ':start' => $last_access,
          ':end' => $last_access
        ))->fetchField();
        $award_available = db_query("SELECT sum(field_funding_grant_award_value_value) from {field_data_field_funding_grant_award_value} inner join node on node.nid = field_data_field_funding_grant_award_value.entity_id where changed between :start AND :end", array(
          ':start' => $last_access,
          ':end' => $last_access
        ))->fetchField();
        $collaborators = db_query("SELECT COUNT(uid) from {users} WHERE created between :start AND :end", array(
          ':start' => $last_access,
          ':end' => $last_access
        ))->fetchField();
        $innovations = db_query("SELECT COUNT(nid) from {node} where type = 'innovation' AND changed between :start AND :end", array(
          ':start' => $last_access,
          ':end' => $last_access
        ))->fetchField();
    }
    else {
        // Customize the data for showing everything since last month
        $organizations = db_query("SELECT COUNT(nid) from {node} WHERE type = 'organization' AND changed between :start AND :end", array(
          ':start' => strtotime('first day of last month'),
          ':end' => strtotime('last day of last month')
        ))->fetchField();
        $award_available = db_query("SELECT sum(field_funding_grant_award_value_value) from {field_data_field_funding_grant_award_value} inner join node on node.nid = field_data_field_funding_grant_award_value.entity_id where changed between :start AND :end", array(
          ':start' => strtotime('first day of last month'),
          ':end' => strtotime('last day of last month')
        ))->fetchField();
        $collaborators = db_query("SELECT COUNT(uid) from {users} WHERE created between :start AND :end", array(
          ':start' => strtotime('first day of last month'),
          ':end' => strtotime('last day of last month')
        ))->fetchField();
        $innovations = db_query("SELECT COUNT(nid) from {node} where type = 'innovation' AND changed between :start AND :end", array(
          ':start' => strtotime('first day of last month'),
          ':end' => strtotime('last day of last month')
        ))->fetchField();


    }
    if (!empty($award_available)) {
        if ($award_available > 1000000000) {
            $award_available = round(($award_available / 1000000000), 1) . 'B';
        }
        else {
            if ($award_available > 1000000) {
                $award_available = round(($award_available / 1000000), 1) . 'M';
            }
            else {
                if ($award_available > 1000) {
                    $award_available = round(($award_available / 1000), 1) . 'T';
                }
            }
        }
        $award_available = '<div class="data-point"><a href="/funding">$' . $award_available . ' <span>Available</span></a></div>';
    }
    else {
        $award_available = '<div class="data-point"><a href="/funding">N/A <span>Available</span></a></div>';
    }

    $organizations = !empty($organizations) ? '<div class="data-point"><a href="/organizations">' . $organizations . ' <span>Organizations</span></a></div>' : '<div class="data-point"><a href="/organizations">N/A <span>Organizations</span></a></div>';
    $collaborators = !empty($collaborators) ? '<div class="data-point"><a href="/members">' . $collaborators . ' <span>Collaborators</span></a></div>' : '<div class="data-point"><a href="/members">N/A <span>Collaborators</span></a></div>';
    $innovations = !empty($organizations) ? '<div class="data-point"><a href="/innovations">' . $innovations . ' <span>Innovations</span></a></div>' : '<div class="data-point"><a href="/innovations">N/A <span>Innovations</span></a></div>';



    $form['selected'] = array(
      '#type' => 'select',
//      '#title' => t('Exchange Updates in the last'),
      '#options' => array(
        0 => t('Month'),
        1 => t('Your Last Visit'),
      ),
      '#default_value' => !empty($_GET['updates']) && $_GET['updates'] == 'last-visit' ? 1 : 0,
      '#attributes' => array('onChange' => 'document.getElementById("dashboard-whats-new-updates-form").submit();'),
      '#weight' => 2,
    );

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => '',
      '#prefix' => '<div style="display: none;">',
      '#suffix' => '</div>',
      '#weight' => 0,
    );

    $form['updates'] = array(
      '#type' => 'item',
      '#markup' => $organizations . $award_available . $collaborators . $innovations,
      '#weight' => 3,
      '#suffix' => '<a class="button button--highlight" href="/data">See all Exchange Data</a>'
    );
    return $form;
}

/**
 * @param $form
 * @param $form_state
 */
function dashboard_whats_new_updates_form_validate($form, &$form_state) {
    if (empty($form_state['values']['selected']) && !is_numeric($form_state['values']['selected'])) {
        form_set_error('selected', 'Select a normal value');
    }
}

/**
 * @param $form
 * @param $form_state
 */
function dashboard_whats_new_updates_form_submit($form, &$form_state) {
    if (!empty($form_state['values']['selected']) && $form_state['values']['selected'] == 1) {

        $form_state['redirect'] = array(
          'dashboard/',
          array(
            'query' => array(
              'updates' => 'last-visit',
            ),
          ),
        );
        drupal_redirect_form($form_state);
    }
    else {
        $form_state['redirect'] = array(
          'dashboard/',
          array(
            'query' => array(
              'updates' => 'month',
            ),
          ),
        );
        drupal_redirect_form($form_state);
    }
}