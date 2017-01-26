(function ($) {
Drupal.theme.prototype.gie_translation_modal = function () {
  var html = '';
  html += '<div id="ctools-modal">';
  html += '  <div class="ctools-modal-content">'; // panels-modal-content
  html += '    <div class="modal-header">';
  html += '      <a class="close" href="#">';
  html +=          Drupal.CTools.Modal.currentSettings.closeImage;
  html += '      </a>';
  html += '      <span id="modal-title" class="modal-title"> </span>';
  html += '    </div>';
  html += '    <div id="modal-content" class="modal-content">';
  html += '    </div>';
  html += '    <div><a class="close" href="#"><button>Cancel</button></a></div>';
  html += '  </div>';
  html += '</div>';
  return html;
}
})(jQuery);
