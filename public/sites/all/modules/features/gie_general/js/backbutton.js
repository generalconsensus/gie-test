(function ($) { 
  $(document).ready(function(){ 
   //here we can add our JS code
   window.addEventListener('pageshow', PageShowHandler, false);
   window.addEventListener('unload', UnloadHandler, false);
   
    function PageShowHandler() {
       window.addEventListener('unload', UnloadHandler, false);
    }
   
    function UnloadHandler() {
       //enable button here
       window.removeEventListener('unload', UnloadHandler, false);
    }   
  }); 
})(jQuery);