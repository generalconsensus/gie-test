<?php
/**
 * @file
 * micirosite-text.tpl.php
 */
?>

<?php

  //$field_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  $orientation = (!empty($content['field_orientation'])) ? $content['field_orientation'][0]['#markup'] : '';
  $background = (!empty($content['field_background'])) ? $content['field_background'][0]['#markup'] : '';
  $classes = implode(' ', array_filter(['microsite-text', $orientation, $background]));

  hide($content['field_orientation']);
  hide($content['field_background']);
?>

<div class="<?php print $classes ?>">
  <div class="layout-constrain">
    <?php print render($content); ?>
  </div>
</div>
