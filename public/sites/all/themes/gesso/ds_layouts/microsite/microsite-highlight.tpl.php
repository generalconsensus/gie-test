<?php
/**
 * @file
 * microsite-highlight.tpl.php
 */
?>

<?php

  //$field_para_5050_orientation = field_get_items('paragraphs_item', $variables['paragraphs_item'], 'field_para_text_orientation');
  //check to see if there is an image value set
  $imagefield = $content['field_para_highlight_image']['#items'][0]['uri'];
  //get image url 
  $image = file_create_url($content['field_para_highlight_image']['#items'][0]['uri']);
  //set classes, including background value
  
  $classes = "microsite-highlight"

  //if image set, then set style, if not do nothing. 
  if (isset($imagefield)) {
    $styles = "style='background-image: url(" . $image . ");'";
  } else {
    $styles = $imagefield;
  };

  hide($content['field_para_highlight_image']);
?>

<div class="<?php print $classes ?>" <?php print $styles ?>>
  <?php print render($content); ?>
</div>