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



        // Set classes on superfish items.
        if ($isSuperfish || $isMegaMenu) {
          $mainMenu.find('li').each(function(){
            $(this).attr('class', 'nav__item').find('a').attr('class', 'nav__link');
          });
        }

        // Remove menu id, add class, and format subnav menus.
        $mainMenu.removeAttr('id').attr('class', 'nav nav--mobile-menu').find('ul').each(function () {
          while ($(this).parent().is('div')) {
            $(this).unwrap();
          }
          var $parentLink = $(this).siblings('a');
          $parentLink.addClass('nav__link--parent').after('<button class="nav__subnav-arrow">Show</button>').parent('li').addClass('nav__item--parent');

          // Remove inline styles from Superfish.
          if ($isSuperfish || $isMegaMenu) { 
            $(this).removeAttr('style').addClass('nav--subnav').find('ul, li, a').removeAttr('style');
          }
        });

        // Remove third level menu items.
        $mainMenu.find('ul ul').remove();

        // add utility links
        $('.block--system-user-menu').eq(0).find('> ul.nav .nav__item').clone().appendTo($mainMenu);

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
          $(this).toggleClass('is-active').prev('a').toggleClass('is-active')
          $(this).next('ul').slideToggle();

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
