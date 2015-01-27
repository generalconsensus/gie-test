<?php
/**
 * List Panes form
 *
 * @param array $form
 * @param array $form_state
 * @return array
 */
function pane_panes_list($form, &$form_state) {
  $form['#tree'] = TRUE;

  $panes = pane_get_containers(TRUE);
  $blanks = (TRUE === isset($form_state['blanks'])) ? $form_state['blanks'] : 0;

  $plugins = array();

  foreach (pane_registry() as $type => $pane_type) {
    $plugins[$type] = $pane_type['title'];
  }

  $form_state['blanks'] = $blanks;

  $pane_list = array();

  $form['panes'] = array(
    '#type' => 'vertical_tabs',
    '#prefix' => '<div id="pane-panes">',
    '#suffix' => '</div>',
    '#blanks' => $blanks,
  );

  foreach ($panes as $pane) {
    $pane_list[] = $pane->container;

    $form[$pane->container] = array(
      '#type' => 'fieldset',
      '#title' => filter_xss($pane->title),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#group' => 'panes',
    );

    $form[$pane->container]['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => $pane->title,
    );

    $form[$pane->container]['name'] = array(
      '#type' => 'machine_name',
      '#title' => t('Machine Name'),
      '#description' => t('machine-friendly name.'),
      '#size' => 32,
      '#maxlength' => 32,
      '#default_value' => $pane->container,
      '#disabled' => TRUE,
      '#machine_name' => array(
        'source' => array($pane->container, 'title'), 	// the name of the source field that we will Take the User Friendly name from and convert it to Machine Friedly name
        'exists' => 'pane_machine_name_exists',
      ),
    );

    $form[$pane->container]['description'] = array(
      '#type' => 'textfield',
      '#title' => t('Description'),
      '#default_value' => $pane->description,
    );

    $form[$pane->container]['plugin'] = array(
      '#type' => 'select',
      '#title' => t('Type'),
      '#default_value' => $pane->plugin,
      '#options' => $plugins,
      '#required' => TRUE,
      '#ajax' => array(
        'callback' => 'pane_plugin_change_ajax',
        'wrapper' => $pane->container . '-config',
      ),
    );

    // Load the configuration form for the pane plugin

    $form[$pane->container] += pane_admin_get_configuration_form($pane, $form_state);

    $form[$pane->container]['remove'] = array(
      '#type' => 'checkbox',
      '#title' => t('Remove this pane type'),
      '#description' => t('NOTE: Be sure this pane is no longer in use on your site before removing'),
      '#default_value' => false,
    );
  }

  for ($i = 0; $i < $blanks; $i++) {
    $form['blank' . $i] = array(
      '#type' => 'fieldset',
      '#title' => t('New pane'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
      '#group' => 'panes',
    );

    $form['blank' . $i]['title'] = array(
      '#type' => 'textfield',
      '#title' => t('Name'),
      '#default_value' => '',
    );

    $form['blank' . $i]['name'] = array(
      '#type' => 'machine_name',
      '#title' => t('Machine Name'),
      '#description' => t('machine-friendly name.'),
      '#size' => 32,
      '#maxlength' => 32,
      '#default_value' => '',
      '#machine_name' => array(
        'source' => array('blank' . $i, 'title'), 	// the name of the source field that we will Take the User Friendly name from and convert it to Machine Friedly name
        'exists' => 'pane_machine_name_exists',
      ),
    );

    $form['blank' . $i]['description'] = array(
      '#type' => 'textfield',
      '#title' => t('Description'),
      '#default_value' => '',
    );

    $form['blank' . $i]['plugin'] = array(
      '#type' => 'select',
      '#title' => t('Type'),
      '#default_value' => '',
      '#options' => $plugins,
      '#required' => TRUE,
      '#ajax' => array(
        'callback' => 'pane_plugin_change_ajax',
        'wrapper' => 'blank' . $i . '-config',
      ),
    );

    // Load the configuration form for the pane plugin
    $tmp_pane = pane_instance(array_shift(array_keys($plugins)));
    $tmp_pane->setContainer('blank' . $i);
    $form['blank' . $i] += pane_admin_get_configuration_form($tmp_pane, $form_state);
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration'),
  );

  $form['add'] = array(
    '#type' => 'submit',
    '#value' => t('Add Pane'),
    '#submit' => array('pane_panes_add'),
    '#name' => 'add_more',
    '#ajax' => array(
      'callback' => 'pane_panes_add_ajax',
      'effect' => 'fade',
      'wrapper' => 'pane-panes',
    ),
  );

  $form['pane_list'] = array(
    '#type' => 'value',
    '#value' => $pane_list,
  );

  return $form;
}

/**
 * Check to see if a Pane exists with the machine name
 *
 * @param string $value
 * @return boolean
 */
function pane_machine_name_exists($value) {
  $container = pane_load_container($value);

  return (FALSE != $container);
}

/**
 * AJAX form callback
 *
 * @param array $form
 * @param array $form_state
 * @return array
 */
function pane_panes_add_ajax($form, $form_state) {
  $form['panes']['#blanks'] += 1;
  return $form['panes'];
}

function pane_plugin_change_ajax($form, &$form_state) {
  $container_name = $form_state['triggering_element']['#array_parents'][0];

  return $form[$container_name]['configuration'];
}

/**
 * AJAX callback to add a new Pane
 *
 * @param array $form
 * @param array $form_state
 */
function pane_panes_add($form, &$form_state) {
  $form_state['blanks'] += 1;
  $form_state['rebuild'] = TRUE;
}

function pane_pane_delete(&$form, &$form_state) {

}

/**
 * Submit handler for pane editing
 *
 * @param array $form
 * @param array $form_state
 */
function pane_panes_list_submit($form, &$form_state) {
  // First save any Panes we know about
  foreach ($form_state['values']['pane_list'] as $pane_id) {


    $container = pane_instance($form_state['values'][$pane_id]['plugin']);
    $container->setContainer($pane_id)->container_edit_form_submit($form_state);

    $pane = new stdClass();
    $pane->name = $form_state['values'][$pane_id]['name'];
    $pane->title = $form_state['values'][$pane_id]['title'];
    $pane->description = $form_state['values'][$pane_id]['description'];
    $pane->plugin = $form_state['values'][$pane_id]['plugin'];
    $pane->configuration = $container->configuration;

    if ($form_state['values'][$pane_id]['remove']) {
      pane_delete_container($pane);
    }
    else {
      pane_save_container($pane);
    }
  }

  // And now save any blank ones
  for ($i = 0; $i < $form['panes']['#blanks']; $i++) {
    $container = pane_instance($form_state['values']['blank' . $i]['plugin']);
    $container->setContainer('blank' . $i)->container_edit_form_submit($form_state);

    $pane = new stdClass();
    $pane->name = $form_state['values']['blank' . $i]['name'];
    $pane->title = $form_state['values']['blank' . $i]['title'];
    $pane->description = $form_state['values']['blank' . $i]['description'];
    $pane->plugin = $form_state['values']['blank' . $i]['plugin'];
    $pane->configuration = $container->configuration;

    pane_save_container($pane);
  }
}

/**
 * Gets the configuration form for the pane
 *
 * TODO: Refactor this to avoid needless loading
 *
 * @param pane_base $pane
 * @param array $form_state
 * @return array
 */
function pane_admin_get_configuration_form($pane, &$form_state) {
  $form = array();

  $form['configuration'] = array(
    '#type' => 'fieldset',
    '#collapsed' => FALSE,
    '#collapsible' => FALSE,
    '#title' => t('Configuration'),
    '#prefix' => '<div id="' . $pane->container . '-config">',
    '#suffix' => '</div>',
  );

  $plugin = (TRUE === isset($form_state['values'][$pane->container]['plugin'])) ? $form_state['values'][$pane->container]['plugin'] : $pane->plugin;
  $class = _pane_get_class($plugin);

  $container = new $class();

  // Load a temporary pane to get configuration
  $temp_pane = pane_load_container($pane->container);

  $container->setContainer($pane->container);

  if (FALSE != $temp_pane) {
    $container->setConfiguration($temp_pane->configuration);
  }

  $container->container_edit_form_submit($form_state);

  foreach ($container->container_edit_form($form_state) as $id => $form_item) {
    $form['configuration'][$id] = $form_item;
  }

  return $form;
}
