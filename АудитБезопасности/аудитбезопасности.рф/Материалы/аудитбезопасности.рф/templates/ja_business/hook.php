<?php
/*
 * ------------------------------------------------------------------------
 * JA Business Template for Joomla 1.7.x
 * ------------------------------------------------------------------------
 * Copyright (C) 2004-2011 J.O.O.M Solutions Co., Ltd. All Rights Reserved.
 * @license - Copyrighted Commercial Software
 * Author: J.O.O.M Solutions Co., Ltd
 * Websites:  http://www.joomlart.com -  http://www.joomlancers.com
 * This file may not be redistributed in whole or significant part.
 * ------------------------------------------------------------------------
*/
/*
Define hook function allow add custom code. 
The hook function is defined in theme with format: [theme folder]_[theme name]_[hook_name]
Eg: core_blue_custom_body_class: defined in hook.php in theme blue in core folder. 
Eg: custom_body_class: defined in hook.php in default theme of template (template folder)
*/

/* 

//custom_body_class
function custom_body_class () {
	//return custom class for body tag.
	return 'boday-class';
}

//block_begin: return begin markup of a block. Override if need a special markup for a/some blocks
function block_begin ($block, $name) {
}

//block_end: return end markup of a block. Override if need a special markup for a/some blocks
function block_end ($block) {
}

//block_middle_begin: return begin markup of a middle block. Override if need a special markup for a/some blocks
function block_middle_begin ($block, $name) {
}

//block_middle_end: return end markup of a middle block. Override if need a special markup for a/some blocks
function block_middle_end ($block, $name) {
}

*/

//custom_body_class
function custom_body_class () {
	$cls = '';
	$tmpl = & T3Template::getInstance();
	if (!$tmpl->hasBlock ('content-mass-top')) {
		$cls = 'no-cmt';
	}
	return $cls;
}