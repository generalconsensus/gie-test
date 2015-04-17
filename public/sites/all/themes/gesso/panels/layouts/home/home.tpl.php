<?php
  $hero = (empty($content['hero']) ? 'hero-empty' : 'hero');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $villain = (empty($content['villain']) ? 'villain-empty' : 'villain');
  $postscript = (empty($content['postscript']) ? 'postscript-empty' : 'postscript');
  $classes = "$hero $main $villain $postscript";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-home <?php print $classes; ?>">
  <?php if (!empty($content['hero'])): ?>
    <div class="l-hero">
      <?php print $content['hero']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['main'])): ?>
    <div class="l-main">
      <div class="layout-constrain">
        <?php print $content['main']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['villain'])): ?>
    <div class="l-villain">
      <?php print $content['villain']; ?>
    </div>
  <?php endif; ?>
   <?php if (!empty($content['postscript'])): ?>
    <div class="l-postscript">
      <div class="layout-constrain">
        <?php print $content['postscript']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>

