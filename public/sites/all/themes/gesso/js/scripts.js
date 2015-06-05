// Custom scripts file
// to load, uncomment the call to this file in gesso.info

(function ($) {

  'use strict';

  // from https://coderwall.com/p/qctclg/modernizr-css-value-test
  Modernizr.addValueTest = function(property,value){
    var testName= (property+value).replace(/-/g,'');
    Modernizr.addTest(testName , function () {
      var element = document.createElement('link');
      var body = document.getElementsByTagName('HEAD')[0];
      var properties = [];
      var upcaseProp = property.replace(/(^|-)([a-z])/g, function(a, b, c){ return c.toUpperCase(); });
      properties[property] = property;
      properties['Webkit'+upcaseProp] ='-webkit-'+property;
      properties['Moz'+upcaseProp] ='-moz-'+property;
      properties['ms'+upcaseProp] ='-ms-'+property;

      body.insertBefore(element, null);
      for (var i in properties) {
        if (element.style[i] !== undefined) {
          element.style[i] = value;
        }
      }
      //ie7,ie8 doesnt support getComputedStyle
      //so this is the implementation
      if(!window.getComputedStyle) {
        window.getComputedStyle = function(el, pseudo) {
          this.el = el;
          this.getPropertyValue = function(prop) {
            var re = /(\-([a-z]){1})/g;
            if (prop == 'float') prop = 'styleFloat';
            if (re.test(prop)) {
              prop = prop.replace(re, function () {
                  return arguments[2].toUpperCase();
              });
            }
            return el.currentStyle[prop] ? el.currentStyle[prop] : null;
          };
          return this;
        };
      }

      var st = window.getComputedStyle(element, null),
        currentValue = st.getPropertyValue("-webkit-"+property) ||
          st.getPropertyValue("-moz-"+property) ||
          st.getPropertyValue("-ms-"+property) ||
          st.getPropertyValue(property);

      if(currentValue!== value){
        element.parentNode.removeChild(element);
        return false;
      }
      element.parentNode.removeChild(element);
      return true;
    });
  }
  // adds Modernizr value for preserve-3d, which IE10/11 do not support
  Modernizr.addValueTest('transform-style','preserve-3d');
  // IE 11 (e.g., v11.0.8) on Win10 passes preserve-3d test for some reason.
  // adding this hack to target IE11.  May need to revisit this if IE11 adds
  // true preserve-3d support or if useragent changes.
  if(navigator.userAgent.match(/Trident.*rv:11\./)) { 
    $('html').addClass('no-transformstylepreserve3d').removeClass('transformstylepreserve3d'); 
  }

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

  Drupal.behaviors.betaVersion = {
    attach: function (context) {
      function betaVersion(element) {
        if ($(element).find('.beta-version').length < 1) {
          $(element).prepend('<div class="beta-version"><h2>BETA VERSION</h2></div>');
        }
      }
      betaVersion('.header .region-header');
      betaVersion('.l-panels-home .pane--homepage-header');
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
        return tallest;
      });
      if (tallest > 0) {
        items.css("height",tallest+40+"px"); // add 40 for the 20px padding  
      }
    });
  }


  function cardView() {
    
    $('.view--card-view-2col,.view--card-view-3col,.view--card-view-4col').each(function(){
      var tab = $(this).parents('.quicktabs-hide');
      if (tab.length > 0) { 
        tab.show(); // if in hidden tab, temporarily show it so height can be measured
      }
      if ($(this).is('.view--card-view-4col')) {
        var columns = 4;
      } 
      if ($(this).is('.view--card-view-3col')) {
        var columns = 3;
      } 
      if ($(this).is('.view--card-view-2col')) {
        var columns = 2;
      } 

      var items = $(this).find('.views-row');
      items.removeClass('first second third fourth even odd');
      items.find('.card').css("height","auto");

      if (Modernizr.mq('(min-width: 500px) and (max-width: 799px)')) { 
        var classes = ['odd', 'even'];
        items.addClass(function(i, c) {
          return classes[i % classes.length];
        });
      }
      if (Modernizr.mq('(min-width: 800px)') || Modernizr.mq() == false) { 
        if (columns == 2) {
          var classes = ['odd', 'even'];
        }
        if (columns == 3) {
          var classes = ['first', 'second', 'third'];
        } 
        if (columns == 4) {
          var classes = ['first', 'second', 'third', 'fourth'];
        }
        items.addClass(function(i, c) {
          return classes[i % classes.length];
        });
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
          $(this).find('.card').css("height",tallest+"px");
          $(this).next('.even').find('.card').css("height",tallest+"px");
        }
        if ($(this).is('.first')) {
          var tallest;
          var second = $(this).nextAll('.second').eq(0);
          var third = $(this).nextAll('.third').eq(0);
          if (columns == 4) {
            var fourth = $(this).nextAll('.fourth').eq(0);
          }
          if (second.find('.card').height() <= third.find('.card').height()) {
            tallest = third.find('.card').height();
          }
          if (second.find('.card').height() >= third.find('.card').height()) {
            tallest = second.find('.card').height();
          }
          if (columns == 4) {
            if (fourth.find('.card').height() >= tallest) {
              tallest = fourth.find('.card').height();
            }
          }
          if (myheight >= tallest) {
            tallest = myheight;
          }
          $(this).find('.card').css("height",tallest+"px");
          second.find('.card').css("height",tallest+"px");
          third.find('.card').css("height",tallest+"px");
          if (columns == 4) {
            fourth.find('.card').css("height",tallest+"px");
          }
        }
      });
      if (tab.length > 0) { 
        tab.removeAttr("style");  // reset hidden tab back to hidden
      }
           
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


  function homepagePersonasCards() {
    $('.pane--homepage-views-personas-pane .view--homepage-views').each(function(){
      var items = $(this).find('.card');
      items.css("height","auto");
      var tallest = 0;
      items.each(function(){
        var height = $(this).height();
        if (height >= tallest) { 
          tallest = height;
        }
      });
      if (Modernizr.mq('(min-width: 800px)') || Modernizr.mq() == false) { 
        if (tallest > 0) {
          items.css("height",tallest+"px");
        }
      }
    });
  }

  function filters() {
    $('div[class*="pane--facetapi-"]').each(function(){
      var moi = $(this);
      var title = $(this).find('.pane__title').eq(0);
      var content = $(this).find('.pane__content').eq(0);
      moi.addClass('is-closed');
      content.hide();
      title.click(function(){
        moi.toggleClass('is-open').toggleClass('is-closed');
        content.slideToggle();
      });
    });
    $('div[class*="pane--facetapi-"]').first().addClass('is-open').removeClass('is-closed').find('.pane__content').show();
  }

  function mainmenuDropdown() { // adds responsive width for main menu dropdown based on screen size
    $('.tb-megamenu-submenu.dropdown-menu').each(function(){
      var site = $('.region-navigation .region__inner').eq(0).width();
      $(this).css("width",site);
    });
  }
 

  // Generic function that runs on window resize.
  function resizeStuff() {
    cardView();
    cardFlip();
    homepageFooterCallout();
    homepagePersonasCards();
    mainmenuDropdown();
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
    filters();
  });

})(jQuery);
