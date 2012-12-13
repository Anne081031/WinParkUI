mw.loader.implement("ext.vector.footerCleanup",function(){(function($){$.fn.footerCollapsibleList=function(config){if(!('title'in config)||!('name'in config)){return;}return this.each(function(){$(this).parent().prepend($('<a>').addClass('collapsible-list').text(config.title).on('click',function(e){e.preventDefault();var state=($.cookie(config.name)!=='expanded')?'expanded':'collapsed';$.cookie(config.name,state);$(this).next().toggle();$(this).find('span').toggleClass('collapsed');}).append($('<span>'))).end().prev().remove();if($.cookie(config.name)===null||$.cookie(config.name)==='collapsed'){$(this).slideUp().prev().find('span').addClass('collapsed');}});};}(jQuery));(function($){window.onload=function(){if('wikiEditor'in $){$('.editButtons').find('.editHelp').remove();var $cancelLink=$('#mw-editform-cancel');$cancelLink.parent().empty().append($cancelLink);$('.editOptions, #editpage-specialchars').css('margin-right','-2px');}};$(document).ready(function(){$('.templatesUsed ul').
footerCollapsibleList({name:'templates-used-list',title:mw.msg('vector-footercleanup-templates')});$('.hiddencats ul').footerCollapsibleList({name:'hidden-categories-list',title:mw.msg('vector-footercleanup-categories')});});}(jQuery));;},{"css":[
"#wpTextbox1{margin:0;display:block}.editOptions{background-color:#F0F0F0;border:1px solid silver;border-top:none;padding:1em 1em 1.5em 1em;margin-bottom:2em}.collapsible-list{display:inline;cursor:pointer;min-width:400px}.collapsible-list \x3e span{float:left;background:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAD1BMVEX////d3d2ampqxsbF5eXmCtCYvAAAAAXRSTlMAQObYZgAAADBJREFUeF6dzNEJACAMA1HdINQJCp1Ebv+ZlLYLaD4f4cbnDNi6MAO8KCHJ+7X02j3mzgMQe93HcQAAAABJRU5ErkJggg==);background:url(//bits.wikimedia.org/static-1.21wmf5/extensions/Vector/modules/./images/open.png?2012-11-26T17:55:00Z)!ie;background-repeat:no-repeat;background-position:50% 50%;display:block;height:16px;width:16px}.collapsible-list \x3e span.collapsed{background:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQAgMAAABinRfyAAAADFBMVEX///95eXnd3d2dnZ3aAo3QAAAAAXRSTlMAQObYZgAAADFJREFUeF5dyzEKACAMA0CXolNe2Id09Kl5igZahWY4AiGjZwmIuS9GEcJfY63Ix88Bol4EYP1O7JMAAAAASUVORK5CYII=);background:url(//bits.wikimedia.org/static-1.21wmf5/extensions/Vector/modules/./images/closed-ltr.png?2012-11-26T17:55:00Z)!ie;background-repeat:no-repeat;background-position:50% 50%}.hiddencats \x3e ul,.templatesUsed \x3e ul{margin:1em 2.5em}.editCheckboxes{margin-bottom:1em}.editCheckboxes input[type=\'checkbox\']:first-child{margin-left:0}.cancelLink{margin:0 0.5em}.cancelLinkPipeSpace{display:inline-block;width:0.5em;height:0.5em}#editpage-copywarn{font-size:0.9em}input#wpSummary{display:block;margin-top:0;margin-bottom:0.5em}.editButtons \x3e input[type=\'submit\']:first-child{margin-left:.1em}\n/* cache key: enwiki:resourceloader:filter:minify-css:7:b1b38865a52ef994d3b8067e48aa7341 */"
]},{"vector-footercleanup-transclusion":"This page contains {{PLURAL:$1|transclusion|transclusions}} of {{PLURAL:$1|one other page|$1 other pages}}.","vector-footercleanup-templates":"View templates on this page","vector-footercleanup-categories":"View hidden categories on this page"});
/* cache key: enwiki:resourceloader:filter:minify-js:7:4e62bf238319b98ae55a885a056046c4 */