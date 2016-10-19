<?php
/**
 * @file
 * long-form-background-video.tpl.php
 */
?>

<?php if (!empty($content['field_background_video_text'][0]['#markup'])): ?>
  <div class="section__video-text">
    <h1><?php echo $content['field_background_video_text'][0]['#markup']; ?></h1>
  </div>
<?php endif; ?>

<?php if (!empty($content['field_background_video_video']['#object']) && is_object(
    $content['field_background_video_video']['#object']
  ) && !empty($content['field_background_video_video']['#object']->field_background_video_video['und'][0]['entity']) && is_object(
    $content['field_background_video_video']['#object']->field_background_video_video['und'][0]['entity']
  )
):
  $url = $content['field_background_video_video']['#object']->field_background_video_video['und'][0]['entity']->field_background_video_upload['und'][0]['uri'];
  $url = (file_create_url($url)); ?>

  <div id="long_form_background_video_wrapper">

    <div class="section__video-wrapper">
      <video class="section__video" width="1920" height="10800" autoplay=""
             muted="" loop="">
        <source class="video" src="<?php print $url ?>"
                type="video/mp4">
      </video>
    </div>

  </div>

<?php endif; ?>

