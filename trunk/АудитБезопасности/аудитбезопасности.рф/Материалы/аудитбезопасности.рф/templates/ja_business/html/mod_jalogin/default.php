<?php // no direct access
defined('_JEXEC') or die('Restricted access'); ?>
<div class="formlogin">
<?php if($type == 'logout') : ?>
<ul id="ja-logout" class="clearfix">
	<li style="padding-left: 0;">
	<form action="<?php echo JRoute::_('index.php', true, $params->get('usesecure')); ?>" method="post" name="form-login" id="login-form">
<?php if ($params->get('greeting')) : ?>
	<span class="userName">
	<?php if($params->get('name') == 0) : {
		echo JText::sprintf('HINAME', $user->get('name'));
	} else : {
		echo JText::sprintf('HINAME', $user->get('username'));
	} endif; ?>
	</span>
<?php endif; ?>
		<a href="javascript:;" name="Submit" class="button" onclick="$('login-form').submit();"><?php echo JText::_('JLOGOUT'); ?></a> 
	<input type="hidden" name="option" value="com_users" />
	<input type="hidden" name="task" value="user.logout" />
	<input type="hidden" name="return" value="<?php echo $return; ?>" />
	<?php echo JHtml::_('form.token'); ?>		
</form>
	</li>
</ul>
<?php else : ?>
<div id="ja-login" class="clearfix">
	<ul class="clearfix">
	<li class="view-login">
		<a class="login-switch" href="<?php echo JRoute::_('index.php?option=com_user&view=login');?>" onclick="showBox('ja-user-login','mod_login_username',this, window.event || event);return false;" title="<?php echo JText::_('TXT_LOGIN');?>"><span><?php echo JText::_('TXT_LOGIN');?></span></a>
	
	<!--LOFIN FORM content-->
	<div id="ja-user-login" style="width:450px;">
	<?php if(JPluginHelper::isEnabled('authentication', 'openid')) : ?>
        <?php JHTML::_('script', 'openid.js'); ?>
    <?php endif; ?>
	  <form action="<?php echo JRoute::_('index.php', true, $params->get('usesecure')); ?>" method="post" name="form-login" id="login-form" >
	<div class="pretext">
	<?php echo $params->get('pretext'); ?>
	</div>
	<div class="header-module clearfix">
                	<span class="title-module">Login</span>
  </div>
	<fieldset class="userdata">
	<p id="form-login-username">
		<label for="modlgn-username" class="ja-login-user clearfix">
			<span><?php echo JText::_('MOD_LOGIN_VALUE_USERNAME') ?></span>
			<input id="modlgn-username" type="text" name="username" class="inputbox"  size="18" />
		</label>
	</p>
	<p id="form-login-password">
		<label for="modlgn-passwd" class="ja-login-password clearfix">
		<span><?php echo JText::_('JGLOBAL_PASSWORD') ?></span>
		<input id="modlgn-passwd" type="password" name="password" class="inputbox" size="18"  />
		</label>
	</p>
	<?php if (JPluginHelper::isEnabled('system', 'remember')) : ?>
	<p id="form-login-remember" class="login-remem clearfix">
		<input type="submit" name="Submit" class="button" value="<?php echo JText::_('BUTTON_LOGIN'); ?>" />
		<label for="modlgn-remember" class="login_remember clearfix">
		<input id="modlgn-remember" type="checkbox" name="remember" class="inputbox" value="yes"/>
		<span><?php echo JText::_('MOD_LOGIN_REMEMBER_ME') ?></span>
		</label>
	</p>
	<?php endif; ?>
	
	<input type="hidden" name="option" value="com_users" />
	<input type="hidden" name="task" value="user.login" />
	<input type="hidden" name="return" value="<?php echo $return; ?>" />
	<?php echo JHtml::_('form.token'); ?>
	</fieldset>
		        <ul class="ja-login-links clearfix" style="display: none;">
							<li>
								<a href="<?php echo JRoute::_('index.php?option=com_users&view=reset'); ?>">
								<?php echo JText::_('FORGOT_YOUR_PASSWORD'); ?></a>
							</li>
							<li>
								<a href="<?php echo JRoute::_('index.php?option=com_users&view=remind'); ?>">
								<?php echo JText::_('FORGOT_YOUR_USERNAME'); ?></a>
							</li>
							<?php
							$usersConfig = JComponentHelper::getParams('com_users');
							if ($usersConfig->get('allowUserRegistration')) : ?>
							<li>
								<a href="<?php echo JRoute::_('index.php?option=com_users&view=registration'); ?>">
									<?php echo JText::_('REGISTER'); ?></a>
							</li>
							<?php endif; ?>
						</ul>
	        <?php echo $params->get('posttext'); ?>
	    </form>
    </div>
	</li>	
	<?php 
				$option = JRequest::getCmd('option');
				$task = JRequest::getCmd('task');
				if($option!='com_user' && $task != 'register') { ?>
	<li class="view-register">
		<a class="register-switch" href="<?php echo JRoute::_("index.php?option=com_users&task=registration");?>" onclick="showBox('ja-user-register','namemsg',this, window.event || event);return false;" >
			<span><?php echo JText::_('REGISTER');?></span>
		</a>
		<!--LOFIN FORM content-->
		<script type="text/javascript" src="<?php echo JURI::base();?>media/system/js/validate.js"></script>
		<div id="ja-user-register" style="width:370px;">
				<script type="text/javascript">
				<!--
					window.addEvent('domready', function(){
						document.formvalidator.setHandler('passverify', function (value) { return ($('password').value == value); }	);
					});
				// -->
				</script>
				
				<?php
					///if(isset($this->message)){
					//	$this->display('message');
					//}
				?>
				<form id="member-registration" action="<?php echo JRoute::_('index.php?option=com_users&task=registration.register'); ?>" method="post" class="form-validate">
		<fieldset>
		<?php if (isset($fieldset->label)):// If the fieldset has a label set, display it as the legend.?>
			<legend><?php echo JText::_($fieldset->label);?></legend>
		<?php endif;?>
							<div class="header-module clearfix">
                	<span class="title-module">Register</span>
  </div>
							<label  class="hasTip required" for="jform_name" id="jform_name-lbl" title="">
								<span><?php echo JText::_( 'Name' ); ?> * :</span>						
								<input type="text" size="30" class="inputbox required" value="" id="jform_name" name="jform[name]"/>
							</label>
							<label title="" class="hasTip required" for="jform_username" id="jform_username-lbl">
								<span><?php echo JText::_( 'Username' ); ?>: *</span>
								<input type="text" size="30" class="inputbox validate-username required" value="" id="jform_username" name="jform[username]"/>
							</label>
							<label title="" class="hasTip required" for="jform_password1" id="jform_password1-lbl">
								<span><?php echo JText::_( 'Password' ); ?>: * </span>
								<input type="password" size="30" class="inputbox validate-password required" value="" id="jform_password1" name="jform[password1]"/> 
							</label>
							<label title="" class="hasTip required" for="jform_password2" id="jform_password2-lbl">
								<span><?php echo JText::_( 'Verify Pass' ); ?>: * </span>
								<input type="password" size="30" class="inputbox validate-password required" value="" id="jform_password2" name="jform[password2]"/> 
							</label>
							<label title="" class="hasTip required" for="jform_email1" id="jform_email1-lbl">
								<span><?php echo JText::_( 'Email' ); ?>: * </span>
								<input type="text" size="30" class="inputbox validate-email required" value="" id="jform_email1" name="jform[email1]"/>
							</label>
							<label title="" class="hasTip required" for="jform_email2" id="jform_email2-lbl">
								<span><?php echo JText::_( 'Verify mail'); ?>: * </span>
								<input type="text" size="30" class="inputbox validate-email required" value="" id="jform_email2" name="jform[email2]"/> 
							</label>
		</fieldset>
		<div class="clearfix">
		<span class="right"><?php echo "All fields are required(*) ."; ?></span>
		<button type="submit" class="validate button"><?php echo JText::_('REGISTER');?></button>
		</div>
		<div>
			<input type="hidden" name="option" value="com_users" />
			<input type="hidden" name="task" value="registration.register" />
			<?php echo JHtml::_('form.token');?>
		</div>
	</form>
				<!-- Old code -->
		</div>
		</li>
	<?php } ?>
	</ul>
	</div>
		<!--LOFIN FORM content-->
<?php endif; ?>
</div>