<?php
/**
 * @file
 * microsite-header.tpl.php
 */
?>

<?php

  // set the class for this paragraph type
  $header_class = 'microsite-header';
  //get value from the header options
  $options = (!empty($content['field_para_header_options'])) ? $content['field_para_header_options'][0]['#markup'] : '';
  // get header size value and set the size class
  $size = (!empty($content['field_para_header_size'])) ? $content['field_para_header_size'][0]['#markup'] : '';
  $size_class = ($size === 'small') ? $header_class . '--small' : '';
  //check to see if there is an image value set
  $imagefield = (!empty($content['field_para_header_image'])) ? $content['field_para_header_image']['#items'][0]['uri'] : null;
  //get image url
  $image = ($imagefield) ? file_create_url($content['field_para_header_image']['#items'][0]['uri']) : null;
  //set classes, including background value
  $classes = implode(' ', array_filter([$header_class, $options, $size_class]));

  //if image set, then set style, if not do nothing.
  if (isset($imagefield)) {
    $styles = "style=\"background-image: url('" . $image . "');\"";
  } else {
    $styles = $imagefield;
  };

  // hide the fields we do not want displayed
  hide($content['field_para_header_options']);
  hide($content['field_para_header_image']);
  hide($content['field_para_header_size']);
?>

<div class="<?php print $classes ?>" <?php print $styles ?> <?php if (!(empty($content['field_para_header_image']['#items'][0]['title']))) { print ('title="' . $content['field_para_header_image']['#items'][0]['title'] . '"'); } ?>>
  <?php print render($content); ?>
</div>
