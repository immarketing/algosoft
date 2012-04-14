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
if (class_exists('T3Template')) {
	$tmpl = T3Template::getInstance($this);
	$tmpl->render();
	return;
} else {
	//Need to install or enable JAT3 Plugin
	echo JText::_('Missing jat3 framework plugin');
}