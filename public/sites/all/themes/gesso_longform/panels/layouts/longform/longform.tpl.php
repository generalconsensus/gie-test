<?php
  $preface = (empty($content['preface']) ? 'preface-empty' : 'preface');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $classes = "$preface $main";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="layout-panels-longform <?php print $classes; ?>">
  <?php if (!empty($content['preface'])): ?>
    <div class="layout-preface">
      <?php print $content['preface']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['main'])): ?>
    <div class="layout-main">
      <?php print $content['main']; ?>
    </div>
  <?php endif; ?>
</div>

