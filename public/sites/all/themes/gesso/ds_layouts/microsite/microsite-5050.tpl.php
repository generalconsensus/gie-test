<?php
/**
 * @file
 * microsite-5050.tpl.php
 */
?>

<?php

  $background = ($content['field_background']) ? $content['field_background'][0]['#markup'] : '';
  $orientation = ($content['field_para_5050_orientation'] && $content['field_para_5050_orientation'][0]['#markup'] == 'image-on-the-right') ? '' : 'microsite-50-50--reversed';
  $classes = implode(' ', array_filter(['microsite-50-50', $orientation, $background]));

  hide($content['field_para_5050_orientation']);
  hide($content['field_background']);
?>

<div class="<?php print $classes?>">
  <?php print render($content); ?>
</div>
