/**
 * @todo
 */
Drupal.smc = Drupal.smc || {};

(function($) {
  
  Drupal.smc.toolbarFix = function() {
    // this function needs to compensate for admin users (or anyone w/access to toolbar) 
    // and rearrange the positioning of the top nav bar accordingly.
    // assuming that the user is anonymous, it already just "works" with the CSS
    $(document).ready(function(){    
      if ($('body').hasClass('toolbar')) {
        // default toolbar height = 30px;
        var toolbarHeight = $('#toolbar').height();
        // reapply padding to body because toolbar module doesn't do this... LOL
        // the padding on the #section-header doesn't need adjusted
        $('body').css('padding-top', toolbarHeight);
      }
    });
  }

  Drupal.behaviors.smcToolbarFix = {
    attach: function (context) {
      
      Drupal.smc.toolbarFix();
      
      $(window).resize(function(){
        Drupal.smc.toolbarFix();
      });
    }
  };
  
  /**
   * @todo
   */
  Drupal.behaviors.smcShowHide = {
    attach: function (context) {
      
      $('.show_hide').showHide({			 
        speed: 500,  // speed you want the toggle to happen	
        easing: '',  // the animation effect you want. Remove this line if you dont want an effect and if you haven't included jQuery UI
        changeText: 0, // if you dont want the button text to change, set this to 0
        showText: 'View',// the button text to show when a div is closed
        hideText: 'Close' // the button text to show when a div is open
      });
    }
  };
  
  Drupal.behaviors.smcFlexnav = {
    attach: function (context) {
      
      $(".flexnav").flexNav();

    }
  };
  
  Drupal.behaviors.smcFlexsliderBlock = {
    attach: function (context) {
      
      for (var i=0; i < Drupal.settings.OpenSanMateoRotator.length; i++) {        
        $('.pane-bundle-rotator-panels-pane .field-collection-container').eq(i).addClass(Drupal.settings.OpenSanMateoRotator[i].type);
        
        var controlNav = true;
        // Add thumbnail data only if we have a rotator
        if (Drupal.settings.OpenSanMateoRotator[i].type == 'rotator') {
          var controlNav = "thumbnails"; 
          $('.rs-slider > li').each(function(i) { 
            var img = $(this).find('img').attr('src');
            $(this).attr('data-thumb', img);
          });
        }
      }
      
      $('.rs-slider.rotator').flexslider({
        selector: 'li.group',
        controlNav: ".thumbnails",
        pauseOnHover: true,
        slideshow: false,
        slideshowSpeed: 4000,
      });
      /*
$('.field-collection-container.carousel').flexslider({
        selector: '.field-name-field-coll-rotator-item > .field-items > .field-item',
        controlNav: false,
        pauseOnHover: true,
        slideshow: false,
        slideshowSpeed: 4000,
      });
*/
    }
  };
})(jQuery);