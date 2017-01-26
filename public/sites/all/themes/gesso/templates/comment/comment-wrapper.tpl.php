<?php
/**
 * @file
 * Theme implementation to provide an HTML container for comments.
 */

// Render the comments and form first to see if we need headings.
$comments = render($content['comments']);
$comment_form = render($content['comment_form']);
?>
<section<?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes ?>><?php print t('Discuss'); ?></h2>
    <?php print render($title_suffix); ?>

    <?php if ($comment_form): ?>
        <?php print $comment_form; ?>
    <?php elseif ($login_link): ?>
        <div class="comments__login"><?php print $login_link; ?></div>
    <?php endif; ?>

    <?php print $comments; ?>

</section>