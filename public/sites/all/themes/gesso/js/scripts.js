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

  Drupal.behaviors.cardflipClick = {
    attach: function (context) {
      $('.cardflip').click(function(){
        $(this).toggleClass('is-flipped');
      });
    }
  }

  function cardFlip() {
    $('.view--homepage-cardflip').each(function(){
      var items = $(this).find('.cardflip,.cardflip__card,.cardflip__a,.cardflip__b');
      items.css("height","auto");
      var tallest = 0;
      items.each(function(){
        var height = $(this).height();
        if (height >= tallest) { 
          tallest = height;
        }
      });
      //if (Modernizr.mq('(min-width: 500px)')) { 
        if (tallest > 0) {
          items.height(tallest+40); // add 40 for the 20px padding  
        }
      //}
    });
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
          if (myheight >= evenheight) { 
            tallest = myheight;
          }
          if (myheight <= evenheight) { 
            tallest = evenheight;
          }
          $(this).find('.card').height(tallest);
          $(this).next('.even').find('.card').height(tallest);
        }
        if ($(this).is('.first')) {
          var tallest;
          var second = $(this).nextAll('.second').eq(0);
          var third = $(this).nextAll('.third').eq(0);
          if (second.find('.card').height() <= third.find('.card').height()) {
            tallest = third.find('.card').height();
          }
          if (second.find('.card').height() >= third.find('.card').height()) {
            tallest = second.find('.card').height();
          }
          if (myheight >= tallest) {
            tallest = myheight;
          }
          $(this).find('.card').height(tallest);
          second.find('.card').height(tallest);
          third.find('.card').height(tallest);
        }
      });
           
    });
  }

  function homepageFooterCallout() {
    $('.pane--homepage-footer-callout .pane__content').each(function(){
      if ($(this).find('.pane__background').length < 1) {
        $(this).wrapInner('<div class="pane__text"></div>');
        $(this).prepend('<div class="pane__background"></div>')
      }
      var background = $(this).find('.pane__background');
      background.css("min-height","auto");
      var ratio = (596/1100); // height/width of image
      var width = background.width();
      background.css("min-height",Math.floor(width*ratio));
    })
  }
 

  // Generic function that runs on window resize.
  function resizeStuff() {
    cardView();
    cardFlip();
    homepageFooterCallout();
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
    resizeStuff();
  });

})(jQuery);
