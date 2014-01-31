(function($) {
  Drupal.behaviors.popup_fix = {
    attach: function(context){
      $(".popup-element-title.class-whole-width").bind("click", function() {
        if ($(".popup-element-body").hasClass("class-whole-width")) {
          $(this).addClass("popup-open");
          popupWidth =  $("#page").width();
          $(".class-whole-width td.center .inner").css('width', (popupWidth / 2) + 'px');
        }
      });
    }
  }
})(jQuery);