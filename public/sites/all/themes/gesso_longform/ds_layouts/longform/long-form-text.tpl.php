<?php
/**
 * @file
 * long-form-text.tpl.php
 */
?>

<?php
  // Insert default classes to the class array
  $classes_array = ['text-block', 'layout-constrain', 'component'];

  if (!empty($field_paragraphs_animation)) {
    // Insert animation class to array, along with "animated" which is needed by animate.css
    $classes_array[] =  $field_paragraphs_animation[0]['value'];
    $classes_array[] = 'animated';
  }
  $classes = implode(' ',$classes_array);

  hide($content['field_paragraphs_animation']);
?>

<div class="<?php print $classes; ?>">
  <?php print render($content); ?>
</div>
