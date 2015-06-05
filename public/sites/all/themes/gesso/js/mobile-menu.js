(function ($) {

  'use strict';

  // The styling for this mobile menu is located in sass/components/mobile-menu/_mobile-menu.scss.

  Drupal.behaviors.mobileMenu = {
    attach: function (context) {

      // Create mobile menu container, create mobile bar, and clone the main
      // menu in the navigation region.
      var $mobileNav = $('<nav class="mobile-menu" role="navigation"></nav>'),
          $mobileBar = $('<div class="mobile-menu__bar"><button class="mobile-menu__button js-mobile-menu-button mobile-menu__button--menu"><span class="mobile-menu__icon mobile-menu__icon--menu">Menu</span></button><a class="mobile-menu__button mobile-menu__button--home" href="/" rel="home"><span class="mobile-menu__icon mobile-menu__icon--home">Home</span></a><button class="mobile-menu__button js-mobile-search-button mobile-menu__button--search"><span class="mobile-menu__icon mobile-menu__icon--search">Search</span></button></div>'),
          $mobileLinks = $('<div class="mobile-menu__links element-hidden"></div>'),
          $mainMenu = $('.region-navigation', context).find('.nav--main-menu, .block--system-main-menu .nav, .block--tb-megamenu-main-menu .nav').not('.contextual-links').first().clone(),
          $isSuperfish = ($mainMenu.hasClass('sf-menu')) ? true : false,
          $isMegaMenu = ($mainMenu.hasClass('tb-megamenu-nav')) ? true : false;

      // Only create mobile menu if there is a main menu.
      if ($mainMenu.length > 0) {

        // Set classes on menu items.
        if ($isSuperfish || $isMegaMenu) {
          $mainMenu.find('li').each(function(){
            $(this).attr('class', 'nav__item').find('a').attr('class', 'nav__link');
          });
        }

        // Remove menu id, add class, and format subnav menus.
        $mainMenu.removeAttr('id').attr('class', 'nav nav--mobile-menu').find('.tb-megamenu-subnav,.view').each(function () {
          // remove any wrappers
          while ($(this).parent().is('div')) {
            $(this).unwrap();
          }
          var $parentLink = $(this).siblings('a');
          $parentLink.addClass('nav__link--parent').parent('li').addClass('nav__item--parent');
          if ($parentLink.siblings('.nav__subnav-arrow').length < 1) {
            $parentLink.after('<button class="nav__subnav-arrow">Show</button>');
          } 

          if ($(this).is('.tb-megamenu-subnav')) {
            $(this).addClass('nav--subnav');
          }

          if ($(this).is('.view')) {
            $(this).addClass('nav__view');
            var $childLink = $(this).find('h2');
            $childLink.addClass('nav__header').parent('.view__header').addClass('nav__item--lvl2parent');
            if ($childLink.siblings('.nav__lvl2subnav-arrow').length < 1) {
              $childLink.after('<button class="nav__lvl2subnav-arrow">Show</button>');
            }
            $(this).find('.item-list ul').addClass('nav--lvl2subnav').unwrap();
            $(this).find('.view__footer a').appendTo($(this).find('.nav--lvl2subnav')).addClass('nav__link--view-all').wrap('<li class="nav__item"></li>');
            $(this).find('.view__footer').remove();
          } 

          // Remove any inline styles.
          $(this).removeAttr('style').find('ul, li, a').removeAttr('style');
          
        });

        $mainMenu.find('.nav__item--parent').each(function(){
          $(this).find('.nav--subnav,.nav__view').wrapAll('<div class="nav__toggler"></div>');
        });

        // Remove third level menu items.
        $mainMenu.find('ul ul').remove();

        // add utility links
        $('.block--system-user-menu').eq(0).find('> ul.nav .nav__item').clone().appendTo($mainMenu);

        // add a home link
        $('<li class="nav__item"><a href="/" class="nav__link">Home</a></li>').prependTo($mainMenu);

        // Insert the cloned menus into the mobile menu container.
        $mainMenu.appendTo($mobileLinks);

        // Insert the top bar into mobile menu container.
        $mobileBar.prependTo($mobileNav);

        // Insert the mobile links into mobile menu container.
        $mobileLinks.appendTo($mobileNav);

        // Add mobile menu to the page.
        $('.skiplinks', context).after($mobileNav);

        var $mobileMenuWrapper = $('.mobile-menu__links', context),
            $mobileMenuLinks = $mobileMenuWrapper.find('a');

        // Initially take mobile menu links out of tab flow.
        $mobileMenuLinks.attr('tabindex', -1);

        // Open/close mobile menu when menu button is clicked.
        $('.js-mobile-menu-button', context).click(function (e) {
          $(this).toggleClass('is-active');
          $mobileMenuWrapper.toggleClass('element-hidden');

            // Close searchbar if open
          if ($('.js-mobile-search-button').hasClass('is-active')) {
            $('.js-mobile-search-button').removeClass('is-active');
            $('.mobile-menu .mobile-menu__search').hide();
          }

          // Remove focus for mouse clicks after closing the menu.
          $(this).not('.is-active').mouseleave(function () {
            $(this).blur();
          });

          // Take mobile menu links out of tab flow if hidden.
          if ($mobileMenuWrapper.hasClass('element-hidden')) {
            $mobileMenuLinks.attr('tabindex', -1);
          }
          else {
            $mobileMenuLinks.removeAttr('tabindex');
          }

          e.preventDefault();
        });

        // Open/close submenus.
        $('.nav__subnav-arrow', context).click(function (e) {
          $(this).toggleClass('is-active').parent().toggleClass('is-open');
          $(this).siblings('.nav__toggler').slideToggle();

          // Remove focus for mouse clicks after closing the menu.
          $(this).not('.is-active').mouseleave(function () {
            $(this).blur();
          });

          e.preventDefault();
        });

        // Open/close sub-submenus 
        $('.nav__lvl2subnav-arrow',context).click(function (e) {
          $(this).toggleClass('is-active').prev('.nav__link--subparent').toggleClass('is-open');
          $(this).parent('.nav__item--lvl2parent').siblings('.nav--lvl2subnav').slideToggle();

          // Remove focus for mouse clicks after closing the menu.
          $(this).not('.is-active').mouseleave(function () {
            $(this).blur();
          });

          e.preventDefault();
        });

        // Show/Hide search bar
        $('.js-mobile-search-button', context).click(function (e) {
          $(this).toggleClass('is-active');

          if (!($('.mobile-menu .mobile-menu__search').length > 0)) {
            $('.block--search').clone().addClass('mobile-menu__search').find('.block--search__button').remove().end().appendTo('.mobile-menu');
          }

          // Close menu if open
          if ($('.js-mobile-menu-button').hasClass('is-active')) {
            $('.js-mobile-menu-button').removeClass('is-active');
            $mobileMenuWrapper.addClass('element-hidden');
            $mobileMenuLinks.attr('tabindex', -1);
          }
           
          // Remove focus for mouse clicks after closing the menu.
          $(this).not('.is-active').mouseleave(function () {
            $(this).blur();
          });

         $('.mobile-menu .mobile-menu__search').slideToggle(200);
         e.preventDefault();

        });


        // Set the height of the menu.
        $mobileMenuWrapper.height($(document).height());

      }
    }
  };

})(jQuery);
