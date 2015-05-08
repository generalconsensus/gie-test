<?php
/**
 * Theme social links.
 * Diaplay Js interface.
 *
 */
if (variable_get('lr_social_login_enable', 1)) {
  $front_end = $GLOBALS['base_url'] . '/' . drupal_get_path('module', 'lr_advance_settings') . '/js/LoginRadiusLoginFrontEnd.js';
  $sdk = $GLOBALS['base_url'] . '/' . drupal_get_path('module', 'lr_social_login') . '/js/LoginRadiusSDK.js';
  ?>
  <script type="text/javascript" src="<?php echo $front_end; ?>"></script>
  <script type="text/javascript" src="//hub.loginradius.com/cdn/Include/src/CustomeInterface.2.js"></script>
  <script type="text/javascript" src="<?php echo $sdk; ?>"></script>
  <script type="text/javascript">
    var LocalDomain = "<?php echo urldecode(lr_social_login_get_callback_url()) ?>";
    if (window.LoginRadiusSDK) {
      LoginRadiusSDK.setLoginCallback(function () {
        var token = LoginRadiusSDK.getToken();
        redirect(token);
      });
    }
  </script>
  <script type="text/javascript"> $LRIC.util.ready(function () {
      var lr_options = {};
      lr_options.apikey = "<?php print trim(variable_get('lr_social_login_apikey')); ?>";
      lr_options.templatename = "loginradiuscustome_tmpl";
      $LRIC.renderInterface("interface_container", lr_options);
    });</script>
  <script type="text/html" id="loginradiuscustome_tmpl">
    <div class="lr_icons_box">
      <div style="width:100%">
   <span class="lr_providericons lr_<%=Name.toLowerCase()%>"
         onClick="return $LRIC.util.openWindow('<%=Endpoint%>&is_access_token=true&callback=<?php print $params["lr_location"]; ?>');"
         title="<%= Name %>" alt="Sign in with <%=Name%>">
   </span>
      </div>
    </div>
  </script>
  <div class="lr_singleglider_200 interface_container"></div>
  <div style="clear:both"></div>
<?php
}