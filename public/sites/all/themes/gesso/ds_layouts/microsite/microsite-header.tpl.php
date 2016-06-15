<?php
/**
 * @file
 * microsite-header.tpl.php
 */
?>

<?php

  //$field_para_5050_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  //get value from the header options
  $options = $content['field_para_header_options'][0]['#markup'];
  //check to see if there is an image value set
  $imagefield = $content['field_para_header_image']['#items'][0]['uri'];
  //get image url
  $image = file_create_url($content['field_para_header_image']['#items'][0]['uri']);
  //set classes, including background value
  $classes = "microsite-header" . ' ' . $options;

  //var_dump($content['field_background'][0]['#markup']);

  //if image set, then set style, if not do nothing.
  if (isset($imagefield)) {
    $styles = "style='background-image: url(" . $image . ");'";
  } else {
    $styles = $imagefield;
  };

  hide($content['field_para_header_options']);
  hide($content['field_para_header_image']);
?>

<div class="<?php print $classes ?>" <?php print $styles ?> <?php if (!(empty($content['field_para_header_image']['#items'][0]['title']))) { print ('title="' . $content['field_para_header_image']['#items'][0]['title'] . '"'); } ?>>
  <?php print render($content); ?>
</div>
