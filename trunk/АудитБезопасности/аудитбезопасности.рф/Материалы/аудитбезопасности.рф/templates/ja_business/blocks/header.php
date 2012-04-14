<?php
/**
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
?>
	<?php $this->genBlockBegin ($block) ?>
	<?php
	$app = & JFactory::getApplication();
	$siteName = $app->getCfg('sitename');
	if ($this->getParam('logoType', 'image')=='image'): ?>
	<h1 class="logo">
		<a href="index.php" title="<?php echo $siteName; ?>"><span><?php echo $siteName; ?></span></a>
	</h1>
	<?php else:
	$logoText = (trim($this->getParam('logoText'))=='') ? $siteName : JText::_(trim($this->getParam('logoText')));
	$sloganText = JText::_(trim($this->getParam('sloganText'))); ?>
	<div class="logo-text">
		<h1><a href="index.php" title="<?php echo $siteName; ?>"><span><?php echo $logoText; ?></span></a></h1>
		<p class="site-slogan"><?php echo $sloganText;?></p>
	</div>
	<?php endif; ?>
	<?php if($this->countModules('header')) : ?>
	<div id="ja-topheader" class="clearfix">
		<jdoc:include type="modules" name="header" />
	</div>
	<?php endif; ?>			
	<?php $this->genBlockEnd ($block) ?>