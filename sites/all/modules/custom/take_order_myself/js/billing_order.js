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

// Called after modal window has loaded.
jQuery.fn.modal_window_position = function() {
  modalWindowPosition(jQuery(this));
}

/**
 * Positioned window.
 * @param string id
 *   element id
 */
function modalWindowPosition(id) {
  var topYloc = null;
  var scrollTop = jQuery(document).scrollTop();
  scrollTop = parseInt(scrollTop);
  var offset = topYloc + scrollTop + "px";
  jQuery(id).animate({top:offset},{duration:700,queue:false});
}

jQuery(document).ajaxComplete(function( event, xhr, settings ) {
  if ( settings.url === "/system/ajax" ) {
    availableAddresses();
  }
});

/**
 * Show / Hide available store addresses.
 */
function availableAddresses() {
  var radio_tom = jQuery(".commerce_shipping input:radio[value=get_order_myself]");
  if (radio_tom.prop("checked")) {
    jQuery("#edit-myself-fildset").slideDown("fast");
    jQuery(".form-item-store-addresses input:radio").prop("checked", false);
  }
  else {
    jQuery("#edit-myself-fildset").slideUp("fast");
  }
}

jQuery(document).ready(function($) {

  availableAddresses();
  // Center positioned maps.
  jQuery(window).scroll(function () {
    modalWindowPosition("#modalContent")
  });

  jQuery(".commerce_shipping input.form-radio").click(function() {
    if ($(this).is(":checked")) {
      var group = "input:checkbox[name='" + $(this).attr("name") + "']";
      $(group).prop("checked", false);
      $(this).prop("checked", true);
    } else {
      $(this).prop("checked", false);
    }
  });

  var addressRadio = $(".addresses.form-radio");
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
  var address = $("input#edit-customer-profile-shipping-commerce-customer-address-und-0-thoroughfare");
  var city = $("input#edit-customer-profile-shipping-commerce-customer-address-und-0-locality");
  //add_helping_text(false);
  address.val(radioBox.data('address'));
  city.val(radioBox.data("city"));
}

});

