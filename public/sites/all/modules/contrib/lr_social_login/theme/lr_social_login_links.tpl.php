<?php
/**
 * Theme social links.
 **/
$api_key = trim(variable_get('lr_social_login_apikey'));
if (!empty($api_key)) {
  ?>
  <script type="text/javascript" src="//hub.loginradius.com/include/js/LoginRadius.js"></script>
  <?php
  $my_settings = array(
    'interfacesize' => $interfaceiconsize,
    'lrinterfacebackground' => $interfacebackgroundcolor,
    'noofcolumns' => (int)$interfacerow,
    'apikey' => $api_key,
    'location' => urldecode($loc),
    'callback' => url('', array('absolute' => TRUE)),
  );
  drupal_add_js(array('lrsociallogin' => $my_settings), 'setting');
  ?>

  <script type="text/javascript"
          src="<?php print $GLOBALS['base_url'] ?>/<?php echo drupal_get_path('module', 'lr_social_login') ?>/js/sociallogin_interface.js">
  </script>
<?php
}
?>
<div class="interfacecontainerdiv"></div>
