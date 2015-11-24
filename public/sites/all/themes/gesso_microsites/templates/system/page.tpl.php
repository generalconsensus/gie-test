<?php
/**
 * @file
 * Theme implementation to display a single Drupal page.
 */
?>
<?php if ($page['utility']): ?>
  <?php print render($page['utility']); ?>
<?php endif; ?>

<header class="site-header" role="banner">
  <div class="layout-constrain">
    <?php if ($page['header']): ?>
      <?php print render($page['header']); ?>
    <?php endif; ?>
    <?php if ($page['navigation']): ?>
      <?php print render($page['navigation']); ?>
    <?php endif; ?>
  </div>
</header>

<?php if ($page['preface']): ?>
  <?php print render($page['preface']); ?>
<?php endif; ?>

<?php if ($page['content']): ?>
  <main id="main" class="main" role="main" tabindex="-1">
    <?php print render($page['content']); ?>
  </main>
<?php endif; ?>

<?php if ($page['postscript']): ?>
  <?php print render($page['postscript']); ?>
<?php endif; ?>

<?php if ($page['footer']): ?>
  <footer class="site-footer" role="contentinfo">
    <?php print render($page['footer']); ?>
  </footer>
<?php endif; ?>
