<?php
/**
 * ------------------------------------------------------------------------
 * JA T3 System plugin for Joomla 1.7
 * ------------------------------------------------------------------------
 * Copyright (C) 2004-2011 JoomlArt.com. All Rights Reserved.
 * @license GNU/GPLv3 http://www.gnu.org/licenses/gpl-3.0.html
 * Author: JoomlArt.com
 * Websites: http://www.joomlart.com - http://www.joomlancers.com.
 * ------------------------------------------------------------------------
 */

/*
 * Enable, re-order the plugin to last position after install
 */
class plgSystemJAT3InstallerScript {
	function postflight($type, $parent) {
		
		$db = JFactory::getDBO();
   		//Get this plugin groupn, element
   		$group = 'system';
   		$element = 'jat3';
   		//enable plugin and update ordering to 1000 (great enough to be last ordering) 
		$query = 'update `#__extensions`' .
				' set `ordering`=1000, `enabled`=1' .
				' WHERE folder = '.$db->Quote($group) .
				' AND element = '.$db->Quote($element);
		$db->setQuery($query);
		try {
			$db->Query();
		}
		catch(JException $e)
		{
			// Return warning message that cannot update order			
			echo JText::_('JAT3_INSTALL_FAIL_UPDATE_ORDER');
		}
   }
}