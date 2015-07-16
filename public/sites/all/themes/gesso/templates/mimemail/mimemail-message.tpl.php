<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
  <?php endif; ?>
</head>
<body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
<div id="center">
  <div id="header">
    <?php if ($recipient): ?>
      <p>Recipient is an available variable.</p>
    <? endif; ?>
  </div>
  <div id="main">
    <?php print $body ?>
  </div>
  <div id="footer">
    <?php if ($recipient): ?>
    <p>Update your message settings by editing your profile on the Exchange <a href="<?php
      $uid = $recipient->uid;
      print $GLOBALS['base_url'] . '/user/' . $uid . '/edit';
    ?>">here</a>.</p>
    <?php endif; ?>
  </div>
</div>
</body>
</html>
