<?php
/**
 * @file
 * long-form-enhanced-text.tpl.php
 */
?>

<?php
  // Set our classes
  $orientation = $field_longform_orientation[0]['value'] . '-justified';
  $classes = implode(' ', array_filter(['enhanced-text component', $orientation]));

  // Get image uri and title, and create HTML styling
  $image = (!empty($field_longform_image)) ? $field_longform_image[0] : null;
  $title = (!empty($image) && !empty($image['title'])) ? ' title="' . check_plain($image['title']) . '"' : null;
  $styles = ($image) ? "style=\"background-image: url('" . file_create_url($image['uri']) . "');\"" . $title : null;

  // Hide content we don't want displayed
  hide($content['field_longform_orientation']);
  if (!empty($content['field_longform_image'])) {
    hide($content['field_longform_image']);
  }
?>

<div class="<?php print $classes?>" <?php print $styles ?>>
  <div class="enhanced-text__wrapper">
    <div class="enhanced-text__inner">
      <div class="enhanced-text__text">
        <?php print render($content); ?>
      </div>
    </div>
  </div>
</div>
