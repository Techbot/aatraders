<h1>{$title}</h1>

<table width="400" border="1" cellspacing="0" cellpadding="4" align="center">
  <tr>
    <td bgcolor="#000000" valign="top" align="center" colspan=2>
		<table cellspacing = "0" cellpadding = "0" border = "0" width="100%">
			<TR>
				<TD>
{if $l_dump_turn !=''}
{$l_dump_turn}<br><br>
{else}
{$dump_echo}<br><br>
{/if}
				</td>
			</tr>
			<tr><td><br><br>{$gotomain}<br><br></td></tr>
		</table>
	</td>
  </tr>
</table>
