<?php
/**
 * @file
 * microsite-5050.tpl.php
 */
?>

<?php
  $inner_card = 'microsite-callout-card__inner layout-constrain';
  $classes = 'microsite-callout-card';

if (!empty($paragraphs_item)) {
  //  Determine 1, 2, or 3 Column Display View

  // 3 Column
  if (!empty($paragraphs_item->field_para_callout_body_3) && !empty($paragraphs_item->field_para_callout_body_2) && !empty($paragraphs_item->field_para_callout_body_1)) {
    $classes .= ' microsite-callout-card--3-cols';
  }
  // 2 Column
  elseif (!empty($paragraphs_item->field_para_callout_body_2) && !empty($paragraphs_item->field_para_callout_body_1)) {
    $classes .= ' microsite-callout-card--2-cols';
  }
  // 1 Column
  elseif (!empty($paragraphs_item->field_para_callout_body_1)) {
    $classes .= ' microsite-callout-card--1-cols';
  }

}
?>


<div class="<?php print $classes ?>">
  <div class="<?php print $inner_card ?>">
    <?php print render($content); ?>
  </div>
</div>
