<?php
defined('_JEXEC') or die('Restricted access');
?>
<?php if ($status!=''):?>
<script type="text/javascript">
	alert('<?php echo $status;?>');
</script>
<?php endif;?>
<div id="<?php echo $params->get('class_suffix','')?>ja-contact-form">
	<div class="<?php echo $params->get('class_suffix','')?>form-info">
		<?php echo $params->get('intro_text','Contact Us')?>
	</div>
	<form  action="#" name="contact" method="post" id="contact" class="form-validate">
		<div class="<?php echo $params->get('class_suffix','')?>form-list">
			
			<!-- Contact message -->
			<div class="<?php echo $params->get('class_suffix','')?>wide clearfix" id="row_contact_text">
				<label id="contact_textmsg" class="required" for="contact_text">
					&nbsp;<?php echo $message_label?>:
				</label>
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
					<textarea class="textarea" id="contact_text" name="text" rows="10" cols="40" onblur="if(this.value=='')this.value='<?php echo $message_label?>';" onfocus="if(this.value=='<?php echo $message_label;?>')this.value='';"><?php if($text!='') echo $text; else echo $message_label?></textarea>
					<div id="error_text" class="<?php echo $params->get('class_suffix','')?>jl_error"><?php if(isset($error['error_text']))echo $error['error_text'] ?></div>
				</div>
			</div>
			
			
			<div class="<?php echo $params->get('class_suffix','')?>guest-info clearfix">
			<div class="<?php echo $params->get('class_suffix','')?>wide clearfix" id="row_subject">
				<label id="contact_textmsg" class="required" for="contact_subject">
					&nbsp;<?php echo $subject_label?>:
				</label>
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
					<input class="input-text" id="contact_subject" name="subject"  value="<?php echo @$subject?>"  size="40"/>
				</div>
				<div id="error_subject" class="<?php echo $params->get('class_suffix','')?>jl_error"><?php if(isset($error['error_subject']))echo $error['error_subject'] ?></div>
			</div>
			
			<div class="<?php echo $params->get('class_suffix','')?>wide clearfix" id="row_name">
				<label for="contact_name" class="required">
					&nbsp;<?php echo $senderlabel;?>:
				</label>
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
					<input  id="contact_name" type="text" name="name" value="<?php if ($name!='')echo $name; else echo $senderlabel; ?>" maxlength="60" size="40" onblur="if(this.value=='')this.value='<?php echo $senderlabel?>';" onfocus="if(this.value=='<?php echo $senderlabel?>')this.value='';" />  
				</div>
				<div id="error_name" class="<?php echo $params->get('class_suffix','')?>jl_error"><?php if(isset($error['name']))echo $error['name'] ?></div>
			</div>
			
			<div class="<?php echo $params->get('class_suffix','')?>wide clearfix" id="row_email">
				<label id="contact_emailmsg" for="contact_email">
				&nbsp;<?php echo $email_label?>:
				</label>
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
					<input class="input-text" id="contact_email" type="text" name="email" value="<?php if ($email!='')echo $email; else echo $email_label; ?>" maxlength="64" size="40" onblur="if(this.value=='')this.value='<?php echo $email_label ?>';" onfocus="if(this.value=='<?php echo $email_label?>')this.value='';" />  
					<div class="<?php echo $params->get('class_suffix','')?>small"><?php echo JText::_('NOTICE_REQUEST_USER_REAL_EMAIL');?> </div>
					<div id="error_email" class="<?php echo $params->get('class_suffix','')?>jl_error"><?php if(isset($error['email']))echo $error['email'] ?></div>
				</div>
			</div>
			
			<?php if ($params->get( 'show_email_copy' ,0)) : ?>
			<div class="<?php echo $params->get('class_suffix','')?>wide clearfix">
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
					<input type="checkbox" name="email_copy" id="contact_email_copy" value="1"  />
					<label for="contact_email_copy" class="email_copy">
					<?php echo JText::_( 'SEND_ME_A_COPIED_EMAIL' ); ?>
					</label>
				</div>
			</div>
			
			<?php endif; ?>
			<?php if ($captcha):?>
			<div class="<?php echo $params->get('class_suffix','')?>wide">
				<div class="<?php echo $params->get('class_suffix','')?>input-box">
				<div id="error_captcha_code" class="<?php echo $params->get('class_suffix','')?>jl_error"><?php if(isset($error['captcha_code']))echo $error['captcha_code'] ?></div>
			<?php 
			
				$mainframe->triggerEvent('onAfterDisplayForm');
			?>
			</div>
			</div>
			<?php endif;?>
			
			<div class="btn-submit clearfix">
				<input type="button" name="bt_submit" id="ac-submit" value="Send Email" class="button validate">
			</div>
			
		</div>
		</div>
		<input type="hidden" name="subject" id="subject" value="<?php echo $params->get('subject','Error 404')?>" />
		<input type="hidden" name="category" value="Error/Problems using site" />
		<input type="hidden" name="do_submit" value="1">
		<?php echo JHTML::_( 'form.token' ); ?>
	</form>
</div>
<script type="text/javascript">
/* <![CDATA[ */
	maxchars = <?php echo $params->get('max_chars',1000);?>;
	captcha = <?php echo intval($captcha)?>;
	var emailabel = '<?php echo $email_label?>';
	var senderlabel = '<?php echo $senderlabel?>';
	var messagelabel = '<?php echo $message_label?>';
	window.addEvent('load', function(){
		el = $('ac-submit');
		$("contact").reset();
	el.onclick = function()
	{
		var email = $('contact_email').value;
		var ck=true;
		var errors = $$('.error');
	    if (!errors || errors.length>0)
	    {
	        errors.removeClass('error');
	    }
		regex=/^[a-zA-Z0-9._-]+@([a-zA-Z0-9.-]+\.)+[a-zA-Z0-9.-]{2,4}$/;
		if(!regex.test(email))
		{
			if((email=='')||(email==emailabel))
			{
				$('error_email').innerHTML ='<?php echo JText::_('ERROR_EMAIL_EMPTY')?>';
			}
			else
			{
				$('error_email').innerHTML ="<?php echo JText::_('ERROR_EMAIL_INVALID')?>";
			}
			$('row_email').addClass('error');
			ck=false;
		}
		else
		{
			$('error_email').innerHTML ='';
		}
		var name = $('contact_name').value;
		if((name=='')||(name==senderlabel))
		{
			$('error_name').innerHTML ='<?php echo  JText::_("ERROR_NAME_INVALID")?>';
			$('row_name').addClass('error');
			ck = false;
		}
		else
		{
			$('error_name').innerHTML ='';
		}
		var subject = $('contact_subject').value;
		if(subject=='')
		{
			$('error_subject').innerHTML ="<?php echo  JText::_("SUBJECT_REQUIRE")?>";
			$('row_subject').addClass('error');
			ck = false;
		}
		else
		{
			$('error_subject').innerHTML ='';
		}
		var message = $('contact_text').value;
		if((message.length>maxchars) ||(message.length<5)||(message==messagelabel))
		{
			
			$('error_text').innerHTML ='<?php $error_message = JText::_('ERROR_MESSAGE_INVALID'); echo addslashes($error_message);?>';
			$('row_text').addClass('error');
			ck = false;
		}
		else
		{
			$('error_text').innerHTML ='';
		}
		if(captcha)
		{
			if ($('captcha_code')){
				var captcha_code = $('captcha_code').value;
				if((captcha_code=='')||(captcha_code=='Type the code shown'))
				{
					$('error_captcha_code').innerHTML = "<?php echo JText::_('EMPTY_CAPTCHA')?>";
					ck = false;
				}
				else $('error_captcha_code').innerHTML = "";
			}
			else if($('recaptcha_response_field')){
				var captcha_code = $('recaptcha_response_field').value;
				if((captcha_code=='')||(captcha_code=='Type the code shown'))
				{
					$('error_captcha_code').innerHTML = "<?php echo JText::_('EMPTY_CAPTCHA')?>";
					ck = false;
				}
				else $('error_captcha_code').innerHTML = "";
			}
			else if ($('mathguard_answer')) {
				var captcha_code = $('mathguard_answer').value;
				if((captcha_code=='')||(captcha_code=='Type the code shown'))
				{
					$('error_captcha_code').innerHTML = "<?php echo JText::_('EMPTY_CAPTCHA')?>";
					ck = false;
				}
				else $('error_captcha_code').innerHTML = "";
			}
		}
		if(ck)
		{
			$("contact").submit();
		}
		return ck;
	};
});
/* ]]> */
</script>