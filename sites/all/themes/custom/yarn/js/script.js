(function($) {
  Drupal.behaviors.blinkMenuScroll = {
    attach: function (context) {
      $("#block-block-2 .block-title").click(function() {
        $('html, body').animate({
          scrollTop: $("#block-multiblock-1").offset().top
        }, 2000);
      });
    }
  };


  var clickedElements = new Array();
  var settings = $.extend({
    'correctUrlPath': document.URL.substr(0, document.URL.indexOf("?"))
  });

  /*remove element from "Selected elements" table */
  jQuery("#block-custom-yarn-yarn-chosen-elements-block li.chosen_element").bind("click" , function() {
    clickedElements.push(jQuery(this).data("tid").toString());
    var vocabularyQueuNum = jQuery(this).data("vocabulary");
    jQuery(this).remove();

    //counting li into current ul, if li == 1 it is meens we have only ul title and will remove ul
    var countElementInUl = jQuery("ul.vocabulary.number-" + vocabularyQueuNum + " li").length;
    if(countElementInUl === 1) {
      jQuery("ul.vocabulary.number-" + vocabularyQueuNum).remove();
    }

    jQuery("#filter_yarn").attr("disabled", false);
    var applyPic = jQuery("#filter_yarn");
    applyPic.css("visibility", "visible");
    goApllay(applyPic);
  });

  //Clicked Applay button in "Selected elements" table
  jQuery("#filter_yarn").click(function() {
    if (clickedElements.length > 0) {
      var urlPath = settings.correctUrlPath + "?";
      //unchecked all clicked elements
      for (var Elem in clickedElements) {
        jQuery(".form-item-edit-" + clickedElements[Elem] + " input").attr('checked', false);
      }

      //collect all checked element and create url path
      jQuery("#views-exposed-form-yarn-list-page .form-item input, " +
             "#block-views-exp-yarn-list-page-1 .form-item input").each(function() {
        if(jQuery(this).attr('checked') == "checked") {
          urlPath += jQuery(this).attr("name") + "=" + jQuery(this).val() + "&";
        }
      });
      window.open(urlPath, "_self", false);
    }
  });

  //Add button to make more visible from "Chosen elements" form
  function goApllay(e) {
    e.animate({
      opacity: "0.1"
    }, 500, "linear", function() {
      e.animate({
        opacity: "1"
      }, 500);
    });
  }

  function ifHaveCheckedElements(element) {
    var countChecked = 0;
    jQuery("input:checked ", element).each(function () {
      countChecked ++;
    });

    return countChecked > 0 ? true : false;
  }

})(jQuery);