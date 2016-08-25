<?php
/**
 * @file
 * microsite-highlight.tpl.php
 */
?>

<?php

  //$field_para_5050_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  //check to see if there is an image value set
  $imagefield = (!empty($content['field_para_highlight_image'])) ? $content['field_para_highlight_image']['#items'][0]['uri'] : null;
  //get image url 
  $image = ($imagefield) ? file_create_url($content['field_para_highlight_image']['#items'][0]['uri']) : null;
  //set classes, including background value
  $classes = "microsite-highlight";

  //if image set, then set style, if not do nothing. 
  if (isset($imagefield)) {
    $styles = "style=\"background-image: url('" . $image . "');\"";
  } else {
    $styles = $imagefield;
  };

  hide($content['field_para_highlight_image']);

?>

<div class="<?php print $classes ?>" <?php print $styles ?> <?php if ($content['field_para_highlight_image'] && !(empty($content['field_para_highlight_image']['#items'][0]['title']))) { print ('title="' . $content['field_para_highlight_image']['#items'][0]['title'] . '"'); } ?>>
  <?php print render($content); ?>
</div>