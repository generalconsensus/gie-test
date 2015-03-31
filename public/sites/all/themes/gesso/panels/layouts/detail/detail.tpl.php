<?php
  $hero = (empty($content['hero']) ? 'hero-empty' : 'hero');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $main_sidebar = (empty($content['main_sidebar']) ? 'main-sidebar-empty' : 'main-sidebar');
  $center = (empty($content['center']) ? 'center-empty' : 'center');
  $box_first = (empty($content['box_first']) ? 'box-first-empty' : 'box-first');
  $box_second = (empty($content['box_second']) ? 'box-second-empty' : 'box-second');
  $box_third = (empty($content['box_third']) ? 'box-third-empty' : 'box-third');
  $bottom_sidebar = (empty($content['bottom_sidebar']) ? 'bottom-sidebar-empty' : 'bottom-sidebar');
  $bottom = (empty($content['bottom']) ? 'bottom-empty' : 'bottom');

  $classes = "$hero $main $main_sidebar $center $box_first $box_second $box_third $bottom_sidebar $bottom";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-detail <?php print $classes; ?>">
  <?php if (!empty($content['hero'])): ?>
    <div class="l-hero">
      <div class="layout-constrain">
        <?php print $content['hero']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['main']) || !empty($content['main_sidebar'])): ?>
    <div class="l-wrapper layout-constrain">
      <?php if (!empty($content['main'])): ?>
        <div class="l-main">
          <?php print $content['main']; ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['main_sidebar'])): ?>
        <aside class="l-main-sidebar">
          <?php print $content['main_sidebar']; ?>
        </aside>
      <?php endif; ?>
    </div>
  <?php endif; ?>
    <?php if (!empty($content['center'])): ?>
    <div class="l-center layout-constrain">
      <?php print $content['center']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['box_first']) || !empty($content['box_second']) || !empty($content['box_third'])): ?>
    <div class="l-wrapper region-meta">
      <div class="layout-constrain">
        <?php if (!empty($content['box_first'])): ?>
          <div class="l-box-first">
            <?php print $content['box_first']; ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($content['box_second'])): ?>
          <div class="l-box-second">
            <?php print $content['box_second']; ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($content['box_third'])): ?>
          <div class="l-box-third">
            <?php print $content['box_third']; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['bottom_sidebar']) || !empty($content['bottom'])): ?>
    <div class="l-wrapper layout-constrain">
      <?php if (!empty($content['bottom'])): ?>
        <div class="l-bottom">
          <?php print $content['bottom']; ?>
        </div>
      <?php endif; ?>
       <?php if (!empty($content['bottom_sidebar'])): ?>
        <aside class="l-bottom-sidebar">
          <?php print $content['bottom_sidebar']; ?>
        </aside>
      <?php endif; ?>
    </div>
  <?php endif; ?>
</div>








 