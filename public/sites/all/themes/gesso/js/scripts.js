// Custom scripts file
// to load, uncomment the call to this file in gesso.info

(function ($) {

  'use strict';

  Drupal.behaviors.mainSearch = {
    attach: function (context) {
      var $button = $('<button class="block--search__button">Open Search</button>'),
          $block = $('.region-navigation .block--search').eq(0),
          $form = $block.find('form').eq(0);
      $block.prepend($button).wrapInner('<div class="block--search__inner"></div>');
      $button.click(function(){
        $block.toggleClass('is-open');
      }).mouseleave(function(){
        $(this).blur();
      });
      
      

    }
  }

  Drupal.behaviors.shareThis = {
    attach: function (context) {
      $('.sharethis-buttons .st_sharethis_custom').text('share');
    }
  }
 

  // Generic function that runs on window resize.
  function resizeStuff() {
  }

  // Runs function once on window resize.
  var TO = false;
  $(window).resize(function () {
    if (TO !== false) {
      clearTimeout(TO);
    }

    // 200 is time in miliseconds.
    TO = setTimeout(resizeStuff, 200);
  }).resize();

})(jQuery);
