<?php
/**
 * @file
 * micirosite-text.tpl.php
 */
?>

<?php

  //$field_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  $orientation = $content['field_orientation'][0]['#markup'];
  $background = $content['field_background'][0]['#markup'];

  //var_dump($content['field_background'][0]['#markup']);

  if ($orientation == 'microsite-text--centered') {
    $classes = "microsite-text " . $orientation . ' ' . $background;
  } else {
    $classes = "microsite-text " . $orientation . ' ' . $background;
  };

  hide($content['field_orientation']);
  hide($content['field_background']);
?>

<div class="<?php print $classes ?>">
  <div class="layout-constrain">
    <?php print render($content); ?>
  </div>
</div>
