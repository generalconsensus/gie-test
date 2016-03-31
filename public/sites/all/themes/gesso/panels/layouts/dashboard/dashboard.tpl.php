<?php
  $preface = (empty($content['preface']) ? 'preface-empty' : 'preface');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $sidebar = (empty($content['sidebar']) ? 'sidebar-empty' : 'sidebar');
  $bottom_left = (empty($content['bottom_left']) ? 'bottom-left-empty' : 'bottom-left');
  $bottom_right = (empty($content['bottom_right']) ? 'bottom-right-empty' : 'bottom-right');
  $classes = "$preface $main $sidebar $bottom_left $bottom_right";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-dashboard <?php print $classes; ?>">
  <?php if (!empty($content['preface'])): ?>
    <div class="l-preface">
      <?php print $content['preface']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['main']) || !empty($content['sidebar'])): ?>
    <div class="l-wrapper">
      <?php if (!empty($content['sidebar'])): ?>
        <aside class="l-sidebar">
          <?php print $content['sidebar']; ?>
        </aside>
      <?php endif; ?>
      <div class="l-main-wrapper">
        <?php if (!empty($content['main'])): ?>
          <div class="l-main">
            <?php print $content['main']; ?>
          </div>
        <?php endif; ?>
        <div class="l-wrapper">
          <?php if (!empty($content['bottom_left'])): ?>
            <div class="l-bottom-left">
              <?php print $content['bottom_left']; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($content['bottom_right'])): ?>
            <div class="l-bottom-right">
              <?php print $content['bottom_right']; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
</div>
