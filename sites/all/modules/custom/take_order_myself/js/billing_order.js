/**
 * Provide the HTML to create the modal dialog.
 */
Drupal.theme.prototype.TOMModalFormPopup = function () {
  var html = '';

  html += '<div id="ctools-modal" class="popups-box">';
  html += '  <div class="ctools-modal-content modal-forms-modal-content ' + Drupal.CTools.Modal.currentSettings['class'] + '">';
  html += '    <div class="modal-top">';
  html += '      <a class="close" href="#">' + Drupal.CTools.Modal.currentSettings.closeImage + '</a>';
  html += '      <span id="modal-title" class="modal-title"> </span>';
  html += '    </div>';
  html += '    <div id="modal-content" class="modal-content"></div>';
  html += '  </div>';
  html += '</div>';

  return html;
}

jQuery.fn.modal_window_position = function() {
  var topYloc = null;
  var scrollTop = jQuery(document).scrollTop();
  scrollTop = parseInt(scrollTop);
  var offset = topYloc + scrollTop + "px";
  jQuery(this).animate({top:offset},{duration:700,queue:false});
}

jQuery(document).ready(function($) {
  var topYloc = null;
  // center positioned maps.
  jQuery(window).scroll(function () {
    modalWindowPosition("#modalContent")
  });

  function modalWindowPosition(id) {
    var scrollTop = jQuery(document).scrollTop();
    scrollTop = parseInt(scrollTop);
    var offset = topYloc + scrollTop + "px";
    jQuery(id).animate({top:offset},{duration:700,queue:false});
  }

  /*
  $("#edit-myself-fildset input.form-checkbox").click(function() {
    if ($(this).is(":checked")) {
       var group = "input:checkbox[name='" + $(this).attr("name") + "']";
      $(group).prop("checked", false);
      $(this).prop("checked", true);
    } else {
      $(this).prop("checked", false);
    }
  });
  */

  addAttrToStore();

  jQuery('.close-popup').click(function() {
    hideAllMaps();
  });
  /*
  var billingRadio = $("input[type='radio'].take_order").eq(0);
  var deliveryRadio = $("input[type='radio'].take_order").eq(1);
  */

  var addressRadio = $(".addresses.form-radio");
  /*
  isCheckedCheckboxDo(billingRadio);

  billingRadio.change(function() {
    isCheckedCheckboxDo($(this));
  });

  deliveryRadio.change(function() {
    deliveryChecked($(this));
  });
   */
  addressRadio.change(function() {
    isCheckedRadioDo($(this));
  });


function isCheckedCheckboxDo(checkBox) {

  if(checkBox.is(":checked")) {
    $("#edit-store-adresses").removeClass("not-active").addClass("active");
    $(".addresses.form-radio").removeAttr("disabled");
    //add_helping_text(true);
    $("#edit-store-adresses").toggle(true)
    $("#edit-store-adresses").animate({
      }, 3000, 'swing', setReadOnly(true, $("fieldset input.can-disable")));
  } 
  else {
    hideAllMaps();
    //removeHelping();
  }  
}

function deliveryChecked(checkBox) {
  if(checkBox.is(":checked")) {
    //removeHelping();
  }
}

function setReadOnly(is_set, elements) {
  if(is_set) {
    elements.each(function(elementInput) {
      $(this).attr("readonly","readonly").addClass("input-readonly");
    });
  }
  else {
    elements.each(function(elementInput) {
      $(this).val("");
      $(this).removeAttr("readonly").removeClass("input-readonly");
    });
  }
}

function isCheckedRadioDo(radioBox) {
  //hideAllMaps();
  console.warn(radioBox);

  var address = $("input#edit-customer-profile-shipping-commerce-customer-address-und-0-thoroughfare");
  var city = $("input#edit-customer-profile-shipping-commerce-customer-address-und-0-locality");
  //add_helping_text(false);
  address.val(radioBox.data('address'));
  city.val(radioBox.data("city"));
}

function addAttrToStore() {
  hideAllMaps();

  jQuery('.not-link').click(function() {
    show_popup();
    var clickedElem = jQuery(this).data("store-id");
    jQuery('#view_store_loc_nid_' + clickedElem).css({'position': 'relative'}).animate({
    }, 500, function() {
      jQuery('#view_store_loc_nid_' + clickedElem).css({'position': 'relative', 'visibility': 'visible'});
    });
  });
}

function hideAllMaps() {
  hide_popup();
  jQuery('.view_store_loc').css({'position': 'absolute', 'visibility': 'hidden'});
}

function show_popup(){
  var bodyH = jQuery(document).height();
  jQuery('#fone-popup-block').css({
    'width': '100%',
    'height': bodyH + 'px',
    'opacity': '0.8'
  }).fadeIn("slow");
}

function hide_popup() {
  jQuery('#fone-popup-block').fadeOut("slow");
}

function add_helping_text(is_add) {
  if (is_add) {
    var Text = Drupal.t("Please check available addresses");
    $(".can-disable").after("<a class='helping_text' href='#edit-myself-fildset'>" + Text + "</a>");
  }
  else {
    $('.helping_text').remove();
  }
}

function removeHelping() {
  //add_helping_text(false);
  $("span.checked").removeClass("checked");
  $("#edit-store-adresses").toggle(false);
  $("#edit-store-adresses").removeClass("active").addClass("not-active");
  $(".addresses.form-radio").attr("disabled", "disabled").removeAttr("checked");
  setReadOnly(false, $("fieldset input.can-disable"));
}

});

