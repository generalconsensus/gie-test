<?php
/**
 * @file
 * microsite-5050.tpl.php
 */
?>

<?php

  $background = $content['field_background'][0]['#markup'];
  $orientation = $content['field_para_5050_orientation'][0]['#markup'];

  if ($orientation == 'image-on-the-right') {
    $classes = "microsite-50-50" . ' ' . $background;
  } else {
    $classes = "microsite-50-50 microsite-50-50--reversed" . ' ' . $background;
  };

  hide($content['field_para_5050_orientation']);
  hide($content['field_background']);
?>

<div class="<?php print $classes?>">
  <?php print render($content); ?>
</div>
