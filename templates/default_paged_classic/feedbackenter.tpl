<H1>{$title}</H1>

<form action=feedback.php method=post>
<table width="50%" border="0" cellspacing="0" cellpadding="0" align="center">
  <tr>
		<td width=18><img src = "templates/{$templatename}images/g-top-left.gif"></td>
		<td width=101><img src = "templates/{$templatename}images/g-top-midleft.gif"></td>
		<td width="100%"><img src = "templates/{$templatename}images/g-top-midright.gif" width="100%" height="20"></td>
		<td width=18><img src = "templates/{$templatename}images/g-top-right.gif"></td>
  </tr>
  <tr>
    <td background="templates/{$templatename}images/g-mid-left.gif">&nbsp;</td>
    <td bgcolor="#000000" valign="top" align="center" colspan=2>
		<table cellspacing = "0" cellpadding = "0" border = "0" width="100%">
			<TR>
				<TD>
{$l_feedback_to}</td><td><input readonly type=text name=dummy size=40 maxlength=40 value=GameAdmin></td></tr>
<tr><td>{$l_feedback_from}</td><td><input readonly type=text name=dummy size=40 maxlength=40 value="{$playername} - {$playeremail}"></td></tr>
<tr><td>{$l_feedback_topi}</td><td><input readonly type=text name=subject size=40 maxlength=40 value={$l_feedback_feedback}></td></tr>
<tr><td>{$l_feedback_message}</td><td><textarea name=content rows=5 cols=40></textarea></td></tr>
<tr><td><input type=submit value={$l_submit}></td><td><input type=reset value={$l_reset}></td></tr>
<tr><td colspan=2><br>{$l_feedback_info}<br></td><td>
				</td>
			</tr>
<tr><td colspan=2><br><br>{$gotomain}<br><br></td></tr>
		</table>
	</td>
    <td background="templates/{$templatename}images/g-mid-right.gif">&nbsp;</td>
  </tr>
  <tr>
		<td width=18><img src = "templates/{$templatename}images/g-bottom-left.gif"></td>
		<td width=101><img src = "templates/{$templatename}images/g-bottom-midleft.gif"></td>
		<td width="100%"><img src = "templates/{$templatename}images/g-bottom-midright.gif" width="100%" height="12"></td>
		<td width=18><img src = "templates/{$templatename}images/g-bottom-right.gif"></td>
  </tr>
</table>

</form>
