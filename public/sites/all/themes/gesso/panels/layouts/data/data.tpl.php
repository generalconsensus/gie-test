<?php
  $title = (empty($content['title']) ? 'title-empty' : 'title');
  $main = (empty($content['main']) ? 'main-empty' : 'main');
  $main_sidebar = (empty($content['main_sidebar']) ? 'main-sidebar-empty' : 'main-sidebar');
  $row1 = (empty($content['row1']) ? 'row1-empty' : 'row1');
  $row2_first = (empty($content['row2_first']) ? 'row2-first-empty' : 'row2-first');
  $row2_second = (empty($content['row2_second']) ? 'row2-second-empty' : 'row2-second');
  $row2_third = (empty($content['row2_third']) ? 'row2-third-empty' : 'row2-third');
  $row3 = (empty($content['row3']) ? 'row3-empty' : 'row3');
  $row4_first = (empty($content['row4_first']) ? 'row4-first-empty' : 'row4-first');
  $row4_second = (empty($content['row4_second']) ? 'row4-second-empty' : 'row4-second');
  $row4_third = (empty($content['row4_third']) ? 'row4-third-empty' : 'row4-third');
  $row5 = (empty($content['row5']) ? 'row5-empty' : 'row5');
  $row6_first = (empty($content['row6_first']) ? 'row6-first-empty' : 'row6-first');
  $row6_second = (empty($content['row6_second']) ? 'row6-second-empty' : 'row6-second');
  $row6_third = (empty($content['row6_third']) ? 'row6-third-empty' : 'row6-third');
  
  $classes = "$title $main $main_sidebar $row1 $row2_first $row2_second $row2_third $row3 $row4_first $row4_second $row4_third $row5 $row6_first $row6_second $row6_third";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-data <?php print $classes; ?>">
  <?php if (!empty($content['title'])): ?>
    <div class="l-title region-title">
      <div class="layout-constrain">
        <?php print $content['title']; ?>
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
  <?php if (!empty($content['highlight'])): ?>
    <div class="l-highlight">
      <div class="layout-constrain">
        <?php print $content['highlight']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row1'])): ?>
    <div class="l-row1">
      <div class="layout-constrain">
        <?php print $content['row1']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row2_first']) || !empty($content['row2_second']) || !empty($content['row2_third'])): ?>
    <div class="l-wrapper">
      <div class="layout-constrain">
        <div class="l-row-divider">
          <?php if (!empty($content['row2_first'])): ?>
            <div class="l-row2-first">
              <?php print $content['row2_first']; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($content['row2_second'])): ?>
            <div class="l-row2-second">
              <?php print $content['row2_second']; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($content['row2_third'])): ?>
            <div class="l-row2-third">
              <?php print $content['row2_third']; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row3'])): ?>
    <div class="l-row3">
      <div class="layout-constrain">
        <?php print $content['row3']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row4_first']) || !empty($content['row4_second']) || !empty($content['row4_third'])): ?>
    <div class="l-wrapper">
      <div class="layout-constrain">
        <div class="l-row-divider">
          <?php if (!empty($content['row4_first'])): ?>
            <div class="l-row4-first">
              <?php print $content['row4_first']; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($content['row4_second'])): ?>
            <div class="l-row4-second">
              <?php print $content['row4_second']; ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($content['row4_third'])): ?>
            <div class="l-row4-third">
              <?php print $content['row4_third']; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row5'])): ?>
    <div class="l-row5">
      <div class="layout-constrain">
        <?php print $content['row5']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['row6_first']) || !empty($content['row6_second']) || !empty($content['row6_third'])): ?>
    <div class="l-wrapper">
      <div class="layout-constrain">
        <?php if (!empty($content['row6_first'])): ?>
          <div class="l-row6-first">
            <?php print $content['row6_first']; ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($content['row6_second'])): ?>
          <div class="l-row6-second">
            <?php print $content['row6_second']; ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($content['row6_third'])): ?>
          <div class="l-row6-third">
            <?php print $content['row6_third']; ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
  <?php endif; ?>
</div>








 