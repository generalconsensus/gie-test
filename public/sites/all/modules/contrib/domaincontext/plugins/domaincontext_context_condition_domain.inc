<?php
/**
 * @file
 * Context plugin to supply the domain as a context condition.
 */

/**
 * Expose domains as a context condition.
 */
class domaincontext_context_condition_domain extends context_condition {
  /**
   * Fetches condition values.
   */
  function condition_values() {
    $values = array();
    $format = domain_select_format();
    foreach (domain_domains() as $data) {
      ($data['domain_id'] == 0) ? $key = -1 : $key = $data['domain_id'];
      if ($data['valid'] || user_access('access inactive domains')) {
        $values[$key] = empty($format) ? check_plain($data['sitename']) : $data['sitename'];
      }
    }
    return $values;
  }

  function options_form($context) {
    $defaults = $this->fetch_from_context($context, 'options');
    return array(
      'include_exclude' => array(
        '#title' => t('Include/Exclude'),
        '#type' => 'select',
        '#options' => array(
          0 => t('Include'),
          1 => t('Exclude'),
        ),
        '#description' => t('Treat as inclusive(white list) or exclusive(black list).'),
        '#default_value' => isset($defaults['include_exclude']) ? $defaults['include_exclude'] : FALSE,
      ),
    );
  }

  /**
   * Executes condition callback.
   */
  function execute() {
    $domain = domain_get_domain();
    $domain_id = $domain['domain_id'];
    if ($domain_id == 0) {
      $domain_id = -1;
    }
    $this->values[$domain_id] = array();
    $contexts = $this->get_contexts();
    foreach ($contexts as $context) {
      $domains = $this->fetch_from_context($context, 'values');
      $options = $this->fetch_from_context($context, 'options');
      if (isset($domains[$domain_id]) xor (isset($options['include_exclude']) && (bool)$options['include_exclude'])) {
        $this->values[$domain_id][] = $context->name;
        $this->condition_met($context, $domain_id);
      }
    }
  }
}
