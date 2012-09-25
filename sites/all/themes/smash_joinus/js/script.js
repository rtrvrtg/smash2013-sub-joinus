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

  var History = window.History, // Note: We are using a capital H instead of a lower h
	State = History.getState();
	
	// Bind to State Change
	History.Adapter.bind(window,'statechange',function(){ // Note: We are using statechange instead of popstate
	  // Log the State
		var State = History.getState(); // Note: We are using History.getState() instead of event.state
		History.log('statechange:', State.data, State.title, State.url);
	});

  $('.pane-departments, .pane-positions').delegate('.view-content a', 'mouseup', function(e){
    $(this).parents('.views-row').siblings('.views-row').find('.active').removeClass('active');
    $(this).addClass('active');
    
    var uri = this.href.replace(/^[a-z]*:\/\/[^\/]*\//, '').replace(/^request\//, '').replace(/\/(nojs)$/, '');
    
    History.pushState({ state: uri }, $(this).text(), '/' + uri);
  });
  
  $('#content form textarea').elastic();

});

})(jQuery, Drupal, this, this.document);
