jQuery(document).ready(function($) {
  $(".image-viewed").each(function() {
    $(this).hide();
  });

  $('.product-item-viewed').bind('hover', function() {
    $('.image-viewed', this).toggle({
      duration: '400'
    });
  });
});

