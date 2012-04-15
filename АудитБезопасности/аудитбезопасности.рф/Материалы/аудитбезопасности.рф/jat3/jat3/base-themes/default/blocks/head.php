<?php
/**
 * ------------------------------------------------------------------------
 * JA T3 System plugin for Joomla 1.7
 * ------------------------------------------------------------------------
 * Copyright (C) 2004-2011 J.O.O.M Solutions Co., Ltd. All Rights Reserved.
 * @license - GNU/GPL, http://www.gnu.org/licenses/gpl.html
 * Author: J.O.O.M Solutions Co., Ltd
 * Websites: http://www.joomlart.com - http://www.joomlancers.com
 * ------------------------------------------------------------------------
 */
?>
<script type="text/javascript">
var siteurl='<?php echo JURI::base(true) ?>/';
var tmplurl='<?php echo JURI::base(true)."/templates/".T3_ACTIVE_TEMPLATE ?>/';
var isRTL = <?php echo $this->isRTL()?'true':'false' ?>;
</script>

<!-- <link href='http://fonts.googleapis.com/css?family=Open+Sans:400,300,700,400italic,300italic,700italic|Istok+Web:400,400italic,700,700italic|Ubuntu:400,300,500,700,300italic,400italic,500italic,700italic&amp;subset=cyrillic-ext,latin,cyrillic' rel='stylesheet' type='text/css'> -->
<!-- http://www.google.com/webfonts#UsePlace:use/Collection:Open+Sans:400,300,700,400italic,300italic,700italic|Istok+Web:400,400italic,700,700italic|Ubuntu:400,300,500,700,300italic,400italic,500italic,700italic -->
<script type="text/javascript">
  WebFontConfig = {
    google: { families: [ 'Open+Sans:400,300,700,400italic,300italic,700italic:cyrillic-ext,latin,cyrillic', 'Istok+Web:400,400italic,700,700italic:cyrillic-ext,latin,cyrillic', 'Ubuntu:400,300,500,700,300italic,400italic,500italic,700italic:cyrillic-ext,latin,cyrillic' ] }
  };
  (function() {
    var wf = document.createElement('script');
    wf.src = ('https:' == document.location.protocol ? 'https' : 'http') +
      '://ajax.googleapis.com/ajax/libs/webfont/1/webfont.js';
    wf.type = 'text/javascript';
    wf.async = 'true';
    var s = document.getElementsByTagName('script')[0];
    //s.parentNode.insertBefore(wf, s);
  })(); </script>

<jdoc:include type="head" />

<?php if (T3Common::mobile_device_detect()=='iphone'):?>
<meta name="viewport" content="width=device-width; initial-scale=1.0; maximum-scale=1; user-scalable=1;" />
<meta name="apple-touch-fullscreen" content="YES" />
<?php endif;?>

<?php if (T3Common::mobile_device_detect()):?>
<meta name="HandheldFriendly" content="true" />
<?php endif;?>

<link href="<?php echo T3Path::getUrl('images/favicon.ico') ?>" rel="shortcut icon" type="image/x-icon" />

<?php JHTML::stylesheet ('', 'templates/system/css/system.css') ?>
<?php JHTML::stylesheet ('', 'templates/system/css/general.css') ?>
