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
<?php
//detect view on mobile - show switch to mobile tools
$layout_switcher = $this->loadBlock('usertools/layout-switcher');
if ($layout_switcher) {
	$layout_switcher = '<li class="layout-switcher">'.$layout_switcher.'</li>';
}
?>

<?php if($this->countModules('breadcrumb')) : ?>
	<jdoc:include type="modules" name="breadcrumb" />
<?php endif; ?> 

<ul class="ja-links">
	<?php echo $layout_switcher ?>
	<li class="top"><a href="<?php echo $this->getCurrentURL();?>#Top" title="Back to Top"><?php echo JText::_('Top') ?></a></li>
</ul>

<?php if($this->countModules('bottombar')) : ?>
<div id="ja-bottombar">
	<jdoc:include type="modules" name="bottombar" />
</div>
<?php endif; ?>