/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(document).ready(function(){

// Place your code here.
  
  var assignActivity = function(button) {
    var isDepartment = button.parents('.pane-departments').length > 0;
    if (isDepartment) {
      $('.pane-positions').find('.view-content .active').removeClass('active');
    }
    button.closest('.pane-departments, .pane-positions').find('.view-content .active').removeClass('active');
    button.addClass('active');
  };

  var History = window.History, // Note: We are using a capital H instead of a lower h
	State = History.getState();
	
	// Bind to State Change
	History.Adapter.bind(window,'statechange',function(){ // Note: We are using statechange instead of popstate
		var State = History.getState();
		if (!!State.data.state) {
      var button = $('.view-content a[href$="request/' + State.data.state + '/nojs"]', '.pane-departments, .pane-positions');
      if (button.length > 0 && !button.hasClass('active')) {
        // @TODO: refine back behaviour
        button.click();
        assignActivity(button);
      }
		}
	});

  $('.pane-departments, .pane-positions').delegate('.view-content a', 'mouseup', function(e){
    assignActivity($(this));
    var uri = this.href.replace(/^[a-z]*:\/\/[^\/]*\//, '').replace(/^request\//, '').replace(/\/(nojs)$/, '');
    History.pushState({ state: uri }, $(this).text(), '/' + uri);
  });
  
  var uri = window.location.href.replace(/^[a-z]*:\/\/[^\/]*\//, '');
  History.pushState({ state: uri }, document.title, '/' + uri);
  
  $('#content form textarea').elastic();

});

})(jQuery, Drupal, this, this.document);
