Drupal.TBMegaMenu = Drupal.TBMegaMenu || {};

(function ($) {
  Drupal.TBMegaMenu.oldWindowWidth = 0;
  Drupal.TBMegaMenu.displayedMenuMobile = false;
  Drupal.TBMegaMenu.supportedScreens = [980];
  Drupal.TBMegaMenu.menuResponsive = function () {
    var windowWidth = window.innerWidth ? window.innerWidth : $(window).width();
    var navCollapse = $('.tb-megamenu').children('.nav-collapse');
    if (windowWidth < Drupal.TBMegaMenu.supportedScreens[0]) {
      navCollapse.addClass('collapse');
      if (Drupal.TBMegaMenu.displayedMenuMobile) {
        navCollapse.css({height: 'auto', overflow: 'visible'});
      } else {
        navCollapse.css({height: 0, overflow: 'hidden'});
      }
    } else {
      // If width of window is greater than 980 (supported screen).
      navCollapse.removeClass('collapse');
      if (navCollapse.height() <= 0) {
        navCollapse.css({height: 'auto', overflow: 'visible'});
      }
    }
  };

  Drupal.behaviors.tbMegaMenuAction = {
    attach: function(context) {

      var showMenu = function ($menuItem, mm_timeout) {

        $menuItem.children('.dropdown-toggle').attr('aria-expanded', 'true');

        if ($menuItem.hasClass ('mega')) {
          $menuItem.addClass ('animating');
          clearTimeout ($menuItem.data('animatingTimeout'));
          $menuItem.data('animatingTimeout', setTimeout(function(){$menuItem.removeClass ('animating')}, mm_timeout));
          clearTimeout ($menuItem.data('hoverTimeout'));
          $menuItem.data('hoverTimeout', setTimeout(function(){$menuItem.addClass ('open')}, 100));
        } else {
          clearTimeout ($menuItem.data('hoverTimeout'));
          $menuItem.data('hoverTimeout',
              setTimeout(function(){$menuItem.addClass ('open')}, 100));
        }
      };
      var hideMenu = function ($menuItem, mm_timeout) {

        $menuItem.children('.dropdown-toggle').attr('aria-expanded', 'false');

        if ($menuItem.hasClass ('mega')) {
          $menuItem.addClass ('animating');
          clearTimeout ($menuItem.data('animatingTimeout'));
          $menuItem.data('animatingTimeout',
              setTimeout(function(){$menuItem.removeClass ('animating')}, mm_timeout));
          clearTimeout ($menuItem.data('hoverTimeout'));
          $menuItem.data('hoverTimeout', setTimeout(function(){$menuItem.removeClass ('open')}, 100));
        } else {
          clearTimeout ($menuItem.data('hoverTimeout'));
          $menuItem.data('hoverTimeout',
              setTimeout(function(){$menuItem.removeClass ('open')}, 100));
        }
      };

      $('.tb-megamenu-button', context).once('menuIstance', function () {
        var This = this;
        $(This).click(function() {
          if(parseInt($(this).parent().children('.nav-collapse').height())) {
            $(this).parent().children('.nav-collapse').css({height: 0, overflow: 'hidden'});
            Drupal.TBMegaMenu.displayedMenuMobile = false;
          }
          else {
            $(this).parent().children('.nav-collapse').css({height: 'auto', overflow: 'visible'});
            Drupal.TBMegaMenu.displayedMenuMobile = true;
          }
        });
      });


      var isTouch = 'ontouchstart' in window && !(/hp-tablet/gi).test(navigator.appVersion);
      if(!isTouch){
        $(document).ready(function($){
          var mm_duration = 0;
          $('.tb-megamenu', context).each (function(){
            if ($(this).data('duration')) {
              mm_duration = $(this).data('duration');
            }
          });
          var mm_timeout = mm_duration ? 100 + mm_duration : 500;
          $('.nav > li, li.mega', context).bind('mouseenter', function(event) {
            showMenu($(this), mm_timeout)
          });
          $('.nav > li > .dropdown-toggle, li.mega > .dropdown-toggle', context).bind('focus', function(event) {
            var $this = $(this);
            var $subMenu = $this.closest('li');

            showMenu($subMenu, mm_timeout);

            // If the focus moves outside of the subMenu, close it.
            $(document).bind('focusin', function(event) {
              if ($subMenu.has(event.target).length) {
                return;
              }
              $(document).unbind(event);
              hideMenu($subMenu, mm_timeout);
            });
          });
          $('.nav > li, li.mega', context).bind('mouseleave', function(event) {
            hideMenu($(this), mm_timeout);
          });
        });
      }

      $(window).resize(function() {
        var windowWidth = window.innerWidth ? window.innerWidth : $(window).width();
        if(windowWidth != Drupal.TBMegaMenu.oldWindowWidth){
          Drupal.TBMegaMenu.oldWindowWidth = windowWidth;
          Drupal.TBMegaMenu.menuResponsive();
        }
      });
    },
  }
})(jQuery);
