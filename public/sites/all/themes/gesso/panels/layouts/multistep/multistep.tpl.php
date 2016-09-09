<?php
  $preface = (empty($content['preface']) ? 'preface-empty' : 'preface');
  $title = (empty($content['title']) ? 'title-empty' : 'title');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $sidebar = (empty($content['sidebar']) ? 'sidebar-empty' : 'sidebar');
  $classes = "$preface $title $main $sidebar";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-multistep <?php print $classes; ?>">
  <?php if (!empty($content['preface'])): ?>
    <div class="l-preface layout-constrain">
      <?php print $content['preface']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['title'])): ?>
    <div class="l-title region-title">
      <div class="layout-constrain">
        <?php print $content['title']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['main']) || !empty($content['sidebar'])): ?>
    <div class="l-wrapper layout-constrain">
      <?php if (!empty($content['main'])): ?>
        <div class="l-main">
          <?php print $content['main']; ?>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['sidebar'])): ?>
        <aside class="l-sidebar">
          <?php print $content['sidebar']; ?>
        </aside>
      <?php endif; ?>
    </div>
  <?php endif; ?>
</div>
