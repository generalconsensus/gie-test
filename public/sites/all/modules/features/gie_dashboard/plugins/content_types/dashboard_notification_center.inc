<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Dashboard Whats New Notification Center'),
  'description' => t('Notification Center'),
  'category' => t('dashboard'),
  'edit form' => 'dashboard_whats_new_notification_center_admin_form',
  'render callback' => 'dashboard_whats_new_notification_center_render',
  'defaults' => array(
    'type' => ''
  ),
);

/**
 * The 'admin info' callback for the content type.
 */
function dashboard_whats_new_notification_center_admin_info($subtype, $conf) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Dashboard Whats New Notification Center');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function dashboard_whats_new_notification_center_admin_form($form) {

  $form['type'] = array(
    '#type' => 'hidden',
  );

  return $form;
}

/**
 * TODO: Combine Queries to reduce time for creation
 */
function dashboard_notification_center_generate_listing() {
  global $user;
  if (!empty($user) && $user->uid > 0) {
    $results = array();
    $follow_user = flag_load('follow');
    $favorite = flag_load('favorite');

    //  Comments left on your content
    $results['comments_on_your_content'] = db_query('SELECT users.name, users.uid, field_data_field_user_firstname.field_user_firstname_value, field_data_field_user_lastname.field_user_lastname_value
	FROM node
    INNER JOIN comment on comment.nid = node.nid
    INNER JOIN users on comment.uid = users.uid
    LEFT JOIN field_data_field_user_firstname on field_data_field_user_firstname.entity_id = comment.uid
    LEFT JOIN field_data_field_user_lastname on field_data_field_user_lastname.entity_id = comment.uid
    WHERE node.uid = :uid GROUP BY users.uid ORDER BY RAND() LIMIT 3', array(
      ':uid' => $user->uid
    ))->fetchAll();


    // Users following you
    $results['people_follow_you'] = db_query('SELECT users.name, users.uid, field_data_field_user_firstname.field_user_firstname_value, field_data_field_user_lastname.field_user_lastname_value
    FROM flagging
    INNER JOIN users on flagging.uid = users.uid
    LEFT JOIN field_data_field_user_firstname on field_data_field_user_firstname.entity_id = flagging.uid
    LEFT JOIN field_data_field_user_lastname on field_data_field_user_lastname.entity_id = flagging.uid
    WHERE flagging.fid = :fid AND flagging.entity_id = :uid AND flagging.uid <> :uid ORDER BY RAND() LIMIT 3', array(
      ':fid' => $follow_user->fid,
      ':uid' => $user->uid
    ))->fetchAll();

    // Users following your content
    $results['people_follow_your_content'] = db_query('SELECT users.name, users.uid, field_data_field_user_firstname.field_user_firstname_value, field_data_field_user_lastname.field_user_lastname_value
    FROM node
    INNER JOIN flagging on flagging.entity_id = node.nid
    INNER JOIN users on flagging.uid = users.uid
    LEFT JOIN field_data_field_user_firstname on field_data_field_user_firstname.entity_id = flagging.uid
    LEFT JOIN field_data_field_user_lastname on field_data_field_user_lastname.entity_id = flagging.uid
    WHERE flagging.fid = :fid AND node.uid = :uid AND flagging.uid <> :uid ORDER BY RAND() LIMIT 3', array(
      ':fid' => $favorite->fid,
      ':uid' => $user->uid
    ))->fetchAll();


    // Grab random followers for use with generating a list of content
    // Inner Join back on flagging to make sure that the relationship is 'two-way'
    $followers = db_query('SELECT flagging.entity_id FROM flagging
    WHERE flagging.fid = :fid
    AND flagging.uid = :uid ', array(
      ':fid' => $follow_user->fid,
      ':uid' => $user->uid
    ))->fetchCol();

    if (!empty($followers) && $followers > 0) {
      $now = strtotime('now');

      //  A "friend" created new content
      $results['friend_content'] = db_query('SELECT node.title, node.nid, users.name, users.uid
  FROM node
  INNER JOIN users on users.uid = node.uid
  WHERE node.uid IN (:uids) AND node.changed between :start AND :end
  ORDER BY RAND() LIMIT 1', array(
        ':uids' => $followers,
        ':start' => strtotime('first day of last month'),
        ':end' => $now
      ))->fetchAssoc();

      //  A "friend" followed a piece of content
      $results['friend_followed_content'] = db_query('SELECT users.name, users.uid, followed_content.title, followed_content.nid
  FROM flagging
  INNER JOIN users on users.uid = flagging.uid
  INNER JOIN node followed_content on followed_content.nid = flagging.entity_id AND flagging.timestamp between :start AND :end
  WHERE flagging.uid IN (:uids) ORDER BY RAND() LIMIT 3', array(
        ':start' => strtotime('first day of last month'),
        ':end' => $now,
        ':uids' => $followers
      ))->fetchAssoc();

      //  A "friend" connected with a user
      $results['friend_followed'] = db_query('SELECT DISTINCT friend.name as original_friend_name, friend.uid as original_friend_uid,
  friend_of_friend.uid as friend_of_friend_uid, friend_of_friend.name as friend_of_friend_name
  FROM flagging
  INNER JOIN users friend on friend.uid = flagging.uid
  INNER JOIN users friend_of_friend on friend_of_friend.uid = flagging.entity_id
  INNER JOIN flagging connected_user on connected_user.entity_id = friend_of_friend.uid
  WHERE flagging.uid in (:followers) AND flagging.entity_type = :user AND flagging.fid = :fid
  AND friend_of_friend.uid <> :uid AND connected_user.entity_type = :user AND connected_user.fid = :fid
  AND connected_user.timestamp between :start AND :end
  ORDER BY RAND() LIMIT 3', array(
        ':followers' => $followers,
        ':user' => 'user',
        ':fid' => $follow_user->fid,
        ':uid' => $user->uid,
        ':start' => strtotime('first day of last month'),
        ':end' => $now,
      ))->fetchAssoc();


      //  A "friend" commented on content
      $results['friend_comment'] = db_query('  SELECT users.name, users.uid, node.title, node.nid, friend_comment.subject
  FROM users
  INNER JOIN comment friend_comment on friend_comment.uid = users.uid AND friend_comment.changed between :start AND :end
  INNER JOIN node on node.nid = friend_comment.nid
  WHERE users.uid IN (:uids)
  ORDER BY RAND() LIMIT 3', array(
        ':uids' => $followers,
        ':start' => strtotime('first day of last month'),
        ':end' => $now
      ))->fetchAssoc();

    }
    else {
      $results = array_merge($results, array(
        'friend_content' => 0,
        'friend_followed_content' => 0,
        'friend_followed' => 0,
        'friend_comment' => 0
      ));
    }

    return $results;
  }

}

/**
 * Run-time rendering of the body of the block (content type).
 */
function dashboard_whats_new_notification_center_render() {
  $results = dashboard_notification_center_generate_listing();

  // Render block
  $block = new stdClass();

  $gie_dashboard_notification_center = array(
    '#prefix' => '<div class="dashboard-notifications"><h2>' . strtoupper(t('Notifications')) . '</h2><ul>',
    '#suffix' => '</ul>',
  );

  if ($results) {

    foreach ($results as $key => $result) {
      if ($key == 'comments_on_your_content' && !empty($result)) {
        if (count($result) > 1) {
          $comments_name = array();
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>',
          );
          foreach ($result as $record) {
            $comments_name[] = !empty($record->field_user_firstname_value) && !empty($record->field_user_lastname_value) ? l($record->field_user_firstname_value . ' ' . $record->field_user_lastname_value, 'user/' . $record->uid) : l($record->name, 'user/' . $record->uid);
          }
          $gie_dashboard_notification_center[$key]['#markup'] .= implode(', ', $comments_name) . ' commented on your content</li>';


        }
        else {
          $name = !empty($result[0]->field_user_firstname_value) && !empty($result[0]->field_user_lastname_value) ? !$result[0]->field_user_firstname_value . ' ' . $result[0]->field_user_lastname_value : $result[0]->name;
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>' . l($name, 'user/' . $result[0]->uid) . ' commented on your content</li>',
          );

        }
      }
      if ($key == 'people_follow_your_content' && !empty($result)) {
        if (count($result) > 1) {
          $content_name = array();
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>',
          );
          foreach ($result as $record) {
            $content_name[] = !empty($record->field_user_firstname_value) && !empty($record->field_user_lastname_value) ? l($record->field_user_firstname_value . ' ' . $record->field_user_lastname_value, 'user/' . $record->uid) : l($record->name, 'user/' . $record->uid);
          }
          $gie_dashboard_notification_center[$key]['#markup'] .= implode(', ', $content_name) . ' follows your content</li>';

        }
        else {
          $name = !empty($result[0]->field_user_firstname_value) && !empty($result[0]->field_user_lastname_value) ? !$result[0]->field_user_firstname_value . ' ' . $result[0]->field_user_lastname_value : $result[0]->name;
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>' . l($name, 'user/' . $result[0]->uid) . ' follows your content</li>',
          );

        }
      }
      elseif ($key == 'people_follow_you') {
        if (!empty($result)) {
          if (count($result) > 1) {
            $follow_name = array();
            $gie_dashboard_notification_center[$key] = array(
              '#markup' => '<li>',
            );
            foreach ($result as $record) {
              $follow_name[] = !empty($record->field_user_firstname_value) && !empty($record->field_user_lastname_value) ? l($record->field_user_firstname_value . ' ' . $record->field_user_lastname_value, 'user/' . $record->uid) : l($record->name, 'user/' . $record->uid);
            }
            $gie_dashboard_notification_center[$key]['#markup'] .= implode(', ', $follow_name) . ' follow you</li>';


          }
          else {
            $name = !empty($result[0]->field_user_firstname_value) && !empty($result[0]->field_user_lastname_value) ? !$result[0]->field_user_firstname_value . ' ' . $result[0]->field_user_lastname_value : $result[0]->name;
            $gie_dashboard_notification_center[$key] = array(
              '#markup' => '<li>' . l($name, 'user/' . $result[0]->uid) . ' follows you</li>',
            );
          }
        }
        else {
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>Find your Friends on the ' . l(t('Exchange'), 'members') . '.</li>'
          );
        }
      }
      elseif ($key == 'friend_content' && !empty($result['name']) && !empty($result['uid']) && !empty($result['nid'])) {
        $gie_dashboard_notification_center[$key] = array(
          '#markup' => '<li>' . l($result['name'], 'user/' . $result['uid']) . ' created new content ' . l($result['title'], 'node/' . $result['nid']) . '.</li>'
        );
      }
      elseif ($key == 'friend_followed_content') {
        if (!empty($result['name']) && !empty($result['uid']) && !empty($result['nid'])) {
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>' . l($result['name'], 'user/' . $result['uid']) . ' followed content ' . l($result['title'], 'node/' . $result['nid']) . '.</li>'
          );
        }
        else {
          $gie_dashboard_notification_center[$key] = array(
            '#markup' => '<li>Find Innovations on the ' . l(t('Exchange'), 'innovations') . '.</li>'
          );
        }
      }
      elseif ($key == 'friend_followed' && !empty($result['original_friend_name']) && !empty($result['original_friend_uid']) && !empty($result['friend_of_friend_name']) && !empty($result['friend_of_friend_uid'])) {

        $gie_dashboard_notification_center[$key] = array(
          '#markup' => '<li>' . l($result['original_friend_name'], 'user/' . $result['original_friend_uid']) . ' followed ' . l($result['friend_of_friend_name'], 'user/' . $result['friend_of_friend_uid']) . '.</li>'
        );
      }
      elseif ($key == 'friend_comment' && !empty($result['name']) && !empty($result['uid']) && !empty($result['nid'])) {

        $gie_dashboard_notification_center[$key] = array(
          '#markup' => '<li>' . l($result['name'], 'user/' . $result['uid']) . ' commented ' . $result['subject'] . ' on ' . l($result['title'], 'node/' . $result['nid'], array('fragment' => 'comments')) . '.</li>'
        );
      }

    }

  }

  $block->content = $gie_dashboard_notification_center;

  return $block;

}
