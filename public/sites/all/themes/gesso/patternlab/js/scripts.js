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

  function cardView() {
    
    $('.view--card-view').each(function(){
      var items = $(this).find('.views-row');
      items.removeClass('first second third even odd');
      items.find('.card').css("height","auto");

      if (Modernizr.mq('(max-width: 499px)')) { 

      }
      if (Modernizr.mq('(min-width: 500px) and (max-width: 799px)')) { 
        items.filter(":nth-child(2n-1)").addClass('odd');
        items.filter(":nth-child(2n)").addClass('even');
      }
      if (Modernizr.mq('(min-width: 800px)')) { 
        items.filter(":nth-child(3n-2)").addClass('first');
        items.filter(":nth-child(3n-1)").addClass('second');
        items.filter(":nth-child(3n)").addClass('third');
      }  
      items.each(function(){
        var myheight = $(this).find('.card').height();
        if ($(this).is('.odd')) {
          var tallest;
          var evenheight = $(this).next('.even').find('.card').height();
          if (myheight > evenheight) { 
            tallest = myheight;
          }
          if (myheight < evenheight) { 
            tallest = evenheight;
          }
          $(this).find('.card').height(tallest);
          $(this).next('.even').find('.card').height(tallest);
        }
        if ($(this).is('.first')) {
          var tallest;
          var second = $(this).nextAll('.second').eq(0);
          var third = $(this).nextAll('.third').eq(0);
          if (second.find('.card').height() < third.find('.card').height()) {
            tallest = third.find('.card').height();
          }
          if (second.find('.card').height() > third.find('.card').height()) {
            tallest = second.find('.card').height();
          }
          if (myheight > tallest) {
            tallest = myheight;
          }
          $(this).find('.card').height(tallest);
          second.find('.card').height(tallest);
          third.find('.card').height(tallest);
        }
      });
           
    });
  }
 

  // Generic function that runs on window resize.
  function resizeStuff() {
    cardView();
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

  $(window).load(function() {
    cardView();
  });

})(jQuery);
