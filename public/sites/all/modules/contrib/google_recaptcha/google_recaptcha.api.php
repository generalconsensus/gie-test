
<?php
/**
 * @file
 * Hooks provided by Google Recaptcha module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Alters the list of always protected forms.
 *
 * @param array $always_protected
 *   List of always protected forms.
 */
function hook_google_recaptcha_always_protect_alter(&$always_protected) {
  // Add search form to the list of always protected forms.
  $always_protected[] = 'search_form';
}

/**
 * Alters the list of available forms.
 *
 * @param array $available_forms
 *   List of available forms.
 */
function hook_google_recaptcha_available_forms_alter(&$available_forms) {
  // Add search form to the list of always protected forms.
  $always_protected['search_'] = t('Search');
}


/**
 * Alters the final javascript recpatcha url
 *
 * @param string $url
 *   Modified javascript url
 */
function hook_google_recaptca_url_alter(&$url) {
  $url = 'https://www.google.com/recaptcha/api.js?onload=google_recaptcha_onload&render=explicit&hl=es';
}
/**
 * @} End of "addtogroup hooks".
 */
