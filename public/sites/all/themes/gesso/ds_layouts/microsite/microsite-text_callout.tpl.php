<?php
/**
 * @file
 * microsite-text_callout.tpl.php
 */
?>

<?php

  //$field_para_5050_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  $background = $content['field_background'][0]['#markup'];
  //check to see if there is an image value set
  $imagefield = $content['field_para_callout_image']['#items'][0]['uri'];
  $image = file_create_url($content['field_para_callout_image']['#items'][0]['uri']);
  //set classes, including background value
  $classes = "microsite-break " . ' ' . $background;

  //var_dump($content['field_background'][0]['#markup']);

  //if image set, then set style, if not do nothing. 
  if (isset($imagefield)) {
    $styles = "style='background-image: url(" . $image . ");'";
  } else {
    $styles = $imagefield;
  };

  hide($content['field_background']);
  hide($content['field_para_callout_image'])
?>

<div class="<?php print $classes ?>" <?php print $styles ?>>
  <?php print render($content); ?>
</div>
