<?php
$l_log_months = "array ( &#39;,, janar&#39;, &#39;Shkurt&#39;, &#39;Mars&#39;, &#39;Prill&#39;, &#39;Maj&#39;, &#39;Qershor&#39;, &#39;Korrik&#39;, &#39;Gusht&#39;, &#39;Shtatore&#39;, &#39;Tetore&#39;, &#39;N�ntore&#39;, &#39;Dhjetore&#39;)";
$l_log_months_short = "array ( &#39;Jan&#39;, &#39;Shkurt&#39;, &#39;Mars&#39;, &#39;Prill&#39;, &#39;Maj&#39;, &#39;Qershor&#39;, &#39;Korrik&#39;, &#39;Gusht&#39;, &#39;shtator&#39;, &#39;Tetor&#39;, &#39;N�ntor&#39;, &#39;dhjetor&#39;)";
$l_log_pod = "P�r fat t� mir�, keni pasur nj� mbules� shp�tuar!";
$l_log_nopod 		 = "<font color=yellow><b>You did not have an escape pod, you died.</b></font>";
$l_log_log = "[player] &#39;s Identifikohu";
$l_log_start = "Log hyrjes p�r";
$l_log_end = "Fundi i hyrjes grisjeve p�r";
$l_log_click 		 = "Click <A HREF=main.php><font color=#00ff00>here</font></A> to return to the main menu.";
$l_log_select = "Zgjidh nj� Log:";
$l_log_general = "P�rgjithsh�m Identifikohu";
$l_log_dig = "Dignitary Identifikohu";
$l_log_spy = "Spiun Identifikohu";
$l_log_disaster = "Planet Disaster Identifikohu";
$l_log_nova = "Nova Device Identifikohu";
$l_log_attack = "Sulmi Identifikohu";
$l_log_scan = "Scan Identifikohu";
$l_log_starv = "Planet uria Identifikohu";
$l_log_probe = "Hetim Identifikohu";
$l_log_autotrade = "Auto Trade Identifikohu";
$l_log_combined = "Kombinuar Identifikohu";


// Log entry data

$l_log_text["LOG_LOGIN"] = "Ju keni hyr� brenda, nga [ip].";
$l_log_title["LOG_LOGIN"] = "Loguar";
$l_log_text["LOG_LOGOUT"] = "Ju keni futur jasht�, nga [ip].";
$l_log_title["LOG_LOGOUT"] = "Logged out";

// General Log Entries

$l_log_title["LOG0_ADMIN_DBERROR"] = "Database Error Occurred";
$l_log_title["LOG0_ADMIN_COMBAT"] = "Combat Rezultati i Veprimit";
$l_log_title["LOG0_RAW"] = "Njoftim";
$l_log_text["LOG0_PLANET_EJECT"] = "Ju keni qen� ejected nga planet n� sektorin [sector] sepse [name] la ekip.";
$l_log_title["LOG0_PLANET_EJECT"] = "Ejected!";
$l_log_text["LOG0_BADLOGIN"] = "Ka qen� nj� p�rpjekje e keqe hyrje nga [ip].";
$l_log_title["LOG0_BADLOGIN"] = "Login Bad";
$l_log_title["LOG0_TOW"] = "Towed!";
$l_log_text["LOG0_TOW"] = "Anija juaj ka qen� towed nga sektori [sector] ndaj sektorit [newsector], sepse niveli mesatar tuaj tek tejkaluar vlera limit e [hull] ose keni nj� anije n� ruajtje.";
$l_log_text["LOG0_HARAKIRI"] = "Ju keni qen� t� lodhur nga captaining k�t� ndesh hap�sir�, k�shtu q� ju vendosur universi do t� ishte m� mir� pa t�. Autorizuar nga [ip].";
$l_log_title["LOG0_HARAKIRI"] 		= "<font color=red>Self-destructed!</font>";
$l_log_text["LOG0_TEAM_REJECT"] = "[player] i ka hedhur posht� ftes�n p�r t&#39;u bashkuar ekipit tuaj, [teamname].";
$l_log_title["LOG0_TEAM_REJECT"] = "Ftes� posht�";
$l_log_text["LOG0_TEAM_RENAME"] = "Ju keni riem�ruar ekipin tuaj t� [team].";
$l_log_title["LOG0_TEAM_RENAME"] = "Ekipi i riem�ruar";
$l_log_text["LOG0_TEAM_M_RENAME"] = "Koordinatori i juaj ekip u quajt ekipi t� [team].";
$l_log_title["LOG0_TEAM_M_RENAME"] = "Ekipi i riem�ruar";
$l_log_text["LOG0_TEAM_KICK"] = "Ju keni qen� ejected nga ekipi [team].";
$l_log_title["LOG0_TEAM_KICK"] = "Ejected nga ekipi!";
$l_log_text["LOG0_TEAM_CREATE"] = "Ju keni krijuar nj� ekip t� ri, [team].";
$l_log_title["LOG0_TEAM_CREATE"] = "Created ekip i ri";
$l_log_text["LOG0_TEAM_LEAVE"] = "Ju kan� l�n� ekip [team].";
$l_log_title["LOG0_TEAM_LEAVE"] = "Ekipi Majtas";
$l_log_text["LOG0_TEAM_NEWLEAD"] = "Ju kan� l�n� ekipi [team]. Ju relinquished udh�heqjes ekip t� [name].";
$l_log_title["LOG0_TEAM_NEWLEAD"] = "Ekipi Majtas";
$l_log_text["LOG0_TEAM_LEAD"] = "Koordinatori ekipi juaj ka vendosur t� largohet nga [team]. Ju keni qen� caktuar p�r t� marr� vendin e saj.";
$l_log_title["LOG0_TEAM_LEAD"] = "Promovimi!";
$l_log_text["LOG0_TEAM_JOIN"] = "Ju keni bashkuar ekipit [team].";
$l_log_title["LOG0_TEAM_JOIN"] = "Joined ekip";
$l_log_text["LOG0_TEAM_NEWMEMBER"] = "[name] ka pranuar p�r t&#39;u bashkuar me [team]. Kjo ju sjell nj� hap m� tej n� dominimin galaktik.";
$l_log_title["LOG0_TEAM_NEWMEMBER"] = "An�tar i ri ekipit";
$l_log_text["LOG0_TEAM_INVITE"] = "Ju keni qen� i ftuar t� jet� pjes� e [team].";
$l_log_title["LOG0_TEAM_INVITE"] = "Ftes�";
$l_log_text["LOG0_TEAM_NOT_LEAVE"] = "[player] ka l�n� ekipin tuaj.";
$l_log_title["LOG0_TEAM_NOT_LEAVE"] = "Ekipi i humbet nj� an�tar";
$l_log_text["LOG0_ADMIN_HARAKIRI"] = "[player] ka vet�-destructed nga ip [ip].";
$l_log_title["LOG0_ADMIN_HARAKIRI"] = "Vet�-destruct";
$l_log_text["LOG0_ADMIN_ILLEGVALUE"] = "[player] kishte [quantity] Sasia [type], me max mban t� [holds]";
$l_log_title["LOG0_ADMIN_ILLEGVALUE"] = "Vlera e paligjshme anije";
$l_log_text["LOG0_ADMIN_PLANETDEL"] = "[attacker] �sht� p�rpjekur p�r t� kapur [defender] &#39;s planetin n� sektorin [sector]. Planet ishte shkat�rruar n� vend.";
$l_log_title["LOG0_ADMIN_PLANETDEL"] = "Planet shkat�rruar";
$l_log_text["LOG0_defense_DEGRADE"] = "Sektori mbrojt�se Fighters n� sektorin [sector] degraduar nga [degrade] qind t� energjis� p�r shkak t� pamjaftueshme.";
$l_log_title["LOG0_defense_DEGRADE"] = "Mbrojt�se Sektori i degraduar.";
$l_log_text["LOG0_CHEAT_TEAM"] = "Player [player] n� adres�n IP [ip] u p�rpoq p�r t� shfryt�zuar dikush gjuajtje ekip mashtrojn�. Anija e tij u shkat�rrua.";
$l_log_title["LOG0_CHEAT_TEAM"] = "Team Used Exploit";
$l_log_text["LOG0_BOUNTY_CLAIMED"] = "Ju pohoi nj� dhurat� prej [amount] kredi p�r shkat�rrimin e anijes q� i p�rkasin [bounty_on]. Dhurat� ishte vendosur nga [placed_by].";
$l_log_title["LOG0_BOUNTY_CLAIMED"] = "Mirat e pohoi.";
$l_log_text["LOG0_BOUNTY_PAID"] = "Mirat e juaj n� [bounty_on] ka qen� paguar p�r shum�n prej [amount] credits.";
$l_log_title["LOG0_BOUNTY_PAID"] = "Paid mir�sis�.";
$l_log_text["LOG0_BOUNTY_TAX_PAID"] = "Dhurat� Fedration n� [bounty_on] ka qen� taksohen p�r shum�n prej [amount] kredi.";
$l_log_title["LOG0_BOUNTY_TAX_PAID"] = "Tatimore mir�sis� Paid.";
$l_log_text["LOG0_BOUNTY_CANCELLED"] = "Mirat e juaj n� [bounty_on] p�r shum�n prej [amount] kredive ka qen� kthehet.";
$l_log_title["LOG0_BOUNTY_CANCELLED"] = "Bounty kthehet.";
$l_log_text["LOG0_BOUNTY_FEDBOUNTY"] = "Federata ka vendosur nj� dhurat� p�r ju p�r shum�n prej [amount] credits.";
$l_log_title["LOG0_BOUNTY_FEDBOUNTY"] = "Federata mirat!";
$l_log_text["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "Aleanca ka vendosur nj� dhurat� p�r ju p�r shum�n prej [amount] kredi.";
$l_log_title["LOG0_BOUNTY_ALLIANCEBOUNTY"] = "Aleanca mirat!";
$l_log_text["LOG0_IGB_TRANSFER1"] = "Kredi Player [name] transferohet [sum] t� IGB llogarin� tuaj.";
$l_log_title["LOG0_IGB_TRANSFER1"] = "Kredite transferuar";
$l_log_text["LOG0_IGB_TRANSFER2"] = "Ju transferohet [sum] kredi p�r player [name] &#39;s llogari IGB.";
$l_log_title["LOG0_IGB_TRANSFER2"] = "Kredite transferuar";
$l_log_text["LOG0_ADMIN_PLANETIND"] = "[sector] [planetname] ([planetid]) n� pron�si nga [owner] u b� e pavarur. Average Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_PLANETIND"] = "Planet shkoi pavarur.";
$l_log_text["LOG0_ADMIN_INDYPURGE"] = "Planet e Pavarur [planetname] ([planetid]) n� pron�si nga [owner] n� [sector] ishte purged. Average Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_INDYPURGE"] = "Planet Pavarur Purged.";
$l_log_text["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Asnj�her� planet Owned [planetname] ([planetid]) e krijuar n� [date] n� [sector] ishte purged. Average Tech: [avgtech]";
$l_log_title["LOG0_ADMIN_NEVEROWNEDPURGE"] = "Asnj�her� Owned Planet Purged.";
$l_log_text["LOG0_TEAM_CANCEL"] = "Ju jeni ftes� t� jet� pjes� e [team] ka qen� i anuluar.";
$l_log_title["LOG0_TEAM_CANCEL"] = "Ftes� anuluar";

// Dignitary Log Entries

$l_log_text["LOG1_DIG_PRODUCTION"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] fillon nd�rtimin e prodhimit.";
$l_log_title["LOG1_DIG_PRODUCTION"] = "<font color=#00FF00>Production Building  Started!</font>";
$l_log_text["LOG1_DIG_BIRTHDEC"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] p�rqindje e lindjeve n� r�nie.";
$l_log_title["LOG1_DIG_BIRTHDEC"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG1_DIG_BIRTHINC"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] p�rqindje e lindjeve n� rritje.";
$l_log_title["LOG1_DIG_BIRTHINC"] = "<font color=#00FF00>Birthrate Increased!</font>";
$l_log_text["LOG1_DIG_SPYHUNT"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] filloi n� k�rkim p�r spys n� k�t� planet.";
$l_log_title["LOG1_DIG_SPYHUNT"] = "<font color=#00FF00>Spy Hunter!</font>";
$l_log_text["LOG1_DIG_INTEREST"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] fillon rritja e prodhimit t� kredis�.";
$l_log_title["LOG1_DIG_INTEREST"] = "<font color=#00FF00>Interest Building Started!</font>";
$l_log_text["LOG1_DIG_MONEY"] = "Dignitary [id] n� planetin [planet_name] shp�rdoruar [data] kredi dhe dhuruar p�r ju!";
$l_log_title["LOG1_DIG_MONEY"] = "<font color=#00FF00>You Recieved Embezzled  Credits!</font>";
$l_log_text["LOG1_DIG_KILLED_SPY"] = "Lojtar dignitary juaj zbuluar [name] &#39;s spiun n� planetin tuaj [planet_name] n� sektorin [sector]. Spiuni �sht� vrar� tashm�.";
$l_log_title["LOG1_DIG_KILLED_SPY"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG1_DIG_CATACLYSM"] = "Dig juaj [id] n� planetin [planet_name] n� sektorin [sector] zhdukur n� nj� p�rmbytje e tmerrshme me at� planet.";
$l_log_title["LOG1_DIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_SHIPDIG_CATACLYSM"] = "Dig juaj [id] m� player [name] &#39;s anije [shipname] zhdukur n� nj� p�rmbytje e tmerrshme me at� anije.";
$l_log_title["LOG1_SHIPDIG_CATACLYSM"] = "<font color=yellow>dig Lost!</font>";
$l_log_text["LOG1_DIG_TORPS"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] nd�rtuar [data] planetare silur�t!";
$l_log_title["LOG1_DIG_TORPS"] = "<font color=#00FF00>Torpedoes Built!</font>";
$l_log_text["LOG1_DIG_FITS"] = "Dignitary juaj [id] n� planetin [planet_name] n� sektorin [sector] nd�rtuar [data] luft�tar� planetar!";
$l_log_title["LOG1_DIG_FITS"] = "<font color=#00FF00>Fighters Built!</font>";

// Spy Log Entries

$l_log_text["LOG2_SPY_NEWSHIP"] = "Ju humbur spiun tuaj [id] n� [name] &#39;s anije [shipname], p�r shkak se nj� lojtar i bler� anije t� reja.";
$l_log_title["LOG2_SPY_NEWSHIP"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_SEND_FAIL"] = "[name] u p�rpoq q� t� d�rgoni nj� spiun p�r t� planetit tuaj [planet_name] n� sektorin [sector], por Sensore tuaj zbuluar spiun dhe ai �sht� vrar� tashm�.";
$l_log_title["LOG2_SPY_SEND_FAIL"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SPY_SABOTAGE"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] fillon sabotim. Prodhimi �sht� ulur nga [data] n� k�t� planet.";
$l_log_title["LOG2_SPY_SABOTAGE"] = "<font color=#00FF00>Sabotage Started!</font>";
$l_log_text["LOG2_SPY_BIRTH"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] p�rqindje e lindjeve u ul nga [data] n� k�t� planet.";
$l_log_title["LOG2_SPY_BIRTH"] = "<font color=#00FF00>Birthrate Decreased!</font>";
$l_log_text["LOG2_SPY_INTEREST"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] fillon mbledhjen e interesit planetit nga [data] p�r ju.";
$l_log_title["LOG2_SPY_INTEREST"] = "<font color=#00FF00>Interest Stealing Started!</font>";
$l_log_text["LOG2_SPY_MONEY"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] vodhi [data] kredi p�r ju!";
$l_log_title["LOG2_SPY_MONEY"] = "<font color=#00FF00>Credits Have Stolen!</font>";
$l_log_text["LOG2_SPY_TORPS"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] shkat�rruar [data] planetare silur�t!";
$l_log_title["LOG2_SPY_TORPS"] = "<font color=#00FF00>Torpedoes Destroyed!</font>";
$l_log_text["LOG2_SPY_FITS"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] shkat�rruar [data] luft�tar� planetar!";
$l_log_title["LOG2_SPY_FITS"] = "<font color=#00FF00>Fighters Destroyed!</font>";
$l_log_text["LOG2_SPY_CPTURE"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] kapur se planetit!! Ju jeni nj� djal� me fat ...";
$l_log_title["LOG2_SPY_CPTURE"] = "<font color=#00FF00>PLANET CAPTURED!</font>";
$l_log_text["LOG2_SPY_CPTURE_OWNER"] = "[name] &#39;s spiun kapur planetin tuaj [planet_name] n� sektorin [sector]! Duket se kjo �sht� ideja e men�ur p�r pastrim planetet tuaj m� shpesh ...";
$l_log_title["LOG2_SPY_CPTURE_OWNER"] = "<font color=red>Planet Lost!</font>";
$l_log_text["LOG2_SPY_KILLED_SPYOWNER"] = "Nuk ka mesazhe nga spiun i juaj [id] n� planetin [planet_name] n� sektorin [sector] p�r nj� koh� t� gjat� - duket se pajisja mantel juaj nuk mund t� mbulojn� at� t� mjaftueshme dhe ai �sht� vrar�.";
$l_log_title["LOG2_SPY_KILLED_SPYOWNER"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_KILLED"] = "Sensore juaj zbuloi nj� em�r [name] &#39;s spiun n� planetin tuaj [planet_name] n� sektorin [sector]. Spiuni �sht� vrar� tashm�.";
$l_log_title["LOG2_SPY_KILLED"] = "<font color=yellow>Enemy Spy Killed!</font>";
$l_log_text["LOG2_SHIPSPY_KILLED"] = "Nuk ka mesazhe nga spiun i juaj [id] m� player [name] &#39;s anije [shipname] p�r nj� koh� t� gjat� - duket se pajisja mantel juaj nuk mund t� mbulojn� at� t� mjaftueshme dhe ai �sht� vrar�.";
$l_log_title["LOG2_SHIPSPY_KILLED"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_CATACLYSM"] = "Spiun juaj [id] n� planetin [planet_name] n� sektorin [sector] zhdukur n� nj� p�rmbytje e tmerrshme me at� planet.";
$l_log_title["LOG2_SPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SHIPSPY_CATACLYSM"] = "Spiun juaj [id] m� player [name] &#39;s anije [shipname] zhdukur n� nj� p�rmbytje e tmerrshme me at� anije.";
$l_log_title["LOG2_SHIPSPY_CATACLYSM"] = "<font color=yellow>Spy Lost!</font>";
$l_log_text["LOG2_SPY_TOSHIP"] = "Spiun juaj [id] nga planet [planet_name] n� sektorin [sector] infiltrates nj� lojtar [playername] &#39;s anije [shipname] dhe aktet tani atje.";
$l_log_title["LOG2_SPY_TOSHIP"] = "<font color=#00FF00>Spy Infiltrates Enemy Ship!</font>";
$l_log_text["LOG2_SPY_TOPLANET"] = "Spiun juaj [id] nga player [playername] &#39;s anije [shipname] infiltrates nj� planet [planet_name] n� sektorin [sector] dhe aktet tani atje.";
$l_log_title["LOG2_SPY_TOPLANET"] = "<font color=#00FF00>Spy Infiltrates Enemy Planet!</font>";
$l_log_text["LOG2_SPY_FOUND_EMBEZZLER"] = "Numri i juaj dignitary [DIG] n� planetin [PLANET] �sht� kapur p�r shp�rdorimin. Ju mund t� d�shironi t� shkarkuar ato.";
$l_log_title["LOG2_SPY_FOUND_EMBEZZLER"] 	= "<font color=yellow>Embezzler found!</font>";

// Nova Bomb Logs

$l_log_text["LOG4_PLANET_novaED_D"] = "Planeti juaj [planet_name] n� sektorin [sector] ishte shkat�rruar me nj� bomb� Nova nga [name]. Absolutisht asgj� nuk mbetet p�r t� sh�nuar planetet e ish ekzistenc�s.";
$l_log_title["LOG4_PLANET_novaED_D"] 	= "<font color=yellow>Planet destroyed with a Nova Bomb</font>";
$l_log_text["LOG4_SHIP_novaED_D"] = "Anija juaj �sht� shkat�rruar me nj� Nova ku shp�rtheu bomba nga [name].";
$l_log_title["LOG4_SHIP_novaED_D"] 	= "<font color=yellow>Ship destroyed with a Nova Bomb</font>";

// Attack Logs

$l_log_text["LOG5_PLANET_BOMBED"] = "Planeti juaj [planet_name] n� sektorin [sector] u bombarduan nga [name]. Ju p�rdorur [beams] energji dhe [torps] silur�t n� mbrojtje tuaj. Ju humbur [figs] luft�tar�.";
$l_log_title["LOG5_PLANET_BOMBED"] = "<font color=red>Planet bombed!</font>";
$l_log_text["LOG5_PLANET_YOUR_CAPTURED"] = "Planeti juaj [planet_name] n� sektorin [sector] ishte i mundur dhe pushtua nga fatkeq [name].";
$l_log_title["LOG5_PLANET_YOUR_CAPTURED"]  = "<font color=red>Planet captured!</font>";
$l_log_text["LOG5_ATTACK_OUTMAN"] = "[player] ishte i ndotur n� nj� vektor sulmi, por aft�sit� e madhe tuaj pilote dhe makina t� mira q� ju lejohet q� t� ia hedh armikut.";
$l_log_title["LOG5_ATTACK_OUTMAN"] = "Veprim i paqart�!";
$l_log_text["LOG5_ATTACK_OUTSCAN"] = "Ju zbulohen [player] &#39;s arm� duke u p�rpjekur p�r t� rregulluar n� anije tuaj, por gjenerator�ve tuaj mantel arritur t� luaj qarqeve primitive armikut sensor.";
$l_log_title["LOG5_ATTACK_OUTSCAN"] = "Mantel i suksessh�m!";
$l_log_text["LOG5_ATTACK_EWD"] = "Ju jeni habitur nga [player] &#39;s sulm t� pabes�. Ju mund t� shihni mbushjet e ardhsh�m si keni arritur �mendurisht p�r prishje butonin jasht�zakonshme. Blurs bota rreth jush dhe, p�r nj� milisecond, ju mendoni se ju jeni t� vdekur. Kur ju m� n� fund hapur syt� tuaj, ju shihni se ju u transportuan t� sigurt� tjet�rkund. Por ku pik�risht, ju nuk e dini ...";
$l_log_title["LOG5_ATTACK_EWD"] = "Prishje e urgjenc�s!";
$l_log_text["LOG5_ATTACK_EWDFAIL"] = "Sensor� juaj zbuluar [player] &#39;s anija n� nj� vektor sulmi. &quot;M� i mir� t� jet� e sigurt se sa keq&quot;, ju mendoni se, duke goditur butonin prish jasht�zakonshme. Ju d�gjuar nj� tingull t� �uditshme q� vijn� nga mbytje dhom� motor�t dhe er� t� djegur circuitry. &quot;Cop� Stupid i mut!&quot;, Ju britm�, duke nisur n� kompjuter. Kompjuter l�shon Beeps e solemne si ju p�rgatit p�r betej�n e ardhsh�m ...";
$l_log_title["LOG5_ATTACK_EWDFAIL"] 	= "Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_ATTACK_LOSE"] = "Anija juaj �sht� duke u sulmuar nga [player]. Provoni si ju mund t�, ju nuk mund ta mbroj� veten kund�r [player] &#39;s arm� superiore. Anija juaj �sht� shkat�rruar.";
$l_log_title["LOG5_ATTACK_LOSE"] 		= "<font color=red>Combat lost!</font>";
$l_log_text["LOG5_ATTACKED_WIN"] = "Anija juaj u sulmua nga [player]. Ju betej� p�r nj� koh�, at�her� lufta prishet. Ju humbur [armor] pikat forca t� blinduara dhe [fighters] U�K-s� n� luftim.";
$l_log_title["LOG5_ATTACKED_WIN"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_HIT_MINES"] = "Ju hit [mines] mina kur udh�tojn� n� sektorin [sector].";
$l_log_title["LOG5_HIT_MINES"] 		= "<font color=yellow>Mines alert!</font>";
$l_log_text["LOG5_SHIP_DESTROYED_MINES"] = "Anija juaj u shkat�rrua nga nj� fush� t� minuar n� sektorin [sector].";
$l_log_title["LOG5_SHIP_DESTROYED_MINES"] 	= "<font color=red>Mines alert!</font>";
$l_log_text["LOG5_PLANET_DEFEATED_D"] = "Planeti juaj [planet_name] n� sektorin [sector] u mund n� luft� nga [name]. P�r fat t� mir�, besnik�rin� e fort� e qytetar�ve tuaj luajtur n� favor tuaj. Ata kan� zgjedhur me guxim p�r t� shkat�rruar planetin n� vend se kan� ra n� duart e armikut. Ju organizojn� funeralet shk�lqyer n� kujtes�n e popullit tuaj besnik.";
$l_log_title["LOG5_PLANET_DEFEATED_D"] 	= "<font color=yellow>Planet destroyed</font>";
$l_log_text["LOG5_PLANET_DEFEATED"] = "Planeti juaj [planet_name] n� sektorin [sector] u mund n� luft� nga fatkeq [name]. Njer�zit e planetit mir�pritur sunduesit e tyre t� ri. Ju d�gjoni nj� d�shmi m� FNN: &quot;Ne jemi t� g�zuar q� do t� shp�toj se pjerdh vjetra, ne nuk duam asnj� humb�s i ndyr� i cili nuk mund t� na mbroj�!&quot;. Ju betohem p�r t&#39;i b�r� ata paguajn� p�r arroganc� e tyre.";
$l_log_title["LOG5_PLANET_DEFEATED"] 	= "<font color=red>Planet defeated!</font>";
$l_log_text["LOG5_PLANET_NOT_DEFEATED"] = "Planeti juaj [planet_name] n� sektorin [sector] u sulmua nga [name]. Qytetar�ve t� organizuar nj� mbrojtje valliant megjithat�, dhe ja doli t� shkat�rroj� kund�rshtar. Ata vjedh disa burimeve nga mbeturinat hap�sir�s: [goods] mallrave, [ore] ore, [organics] Organics dhe [salvage]% t� vler� s� anijes [credits] kredi.";
$l_log_title["LOG5_PLANET_NOT_DEFEATED"] = "Fitore!";
$l_log_text["LOG5_DEFS_DESTROYED"] = "[quantity] [type] u shkat�rruan n� sektorin [sector].";
$l_log_title["LOG5_DEFS_DESTROYED"] = "Mbrojt�se Sektori i shkat�rruar";
$l_log_text["LOG5_KABAL_ATTACK"] = "Sulmuar [player] ...";
$l_log_title["LOG5_KABAL_ATTACK"] = "Sulmi";
$l_log_text["LOG5_DEFS_DESTROYED_F"] = "Ju keni shkat�rruar [fighters] luft�tar� t� patrullojn� n� sektorin [sector].";
$l_log_title["LOG5_DEFS_DESTROYED_F"] = "Luft�tar� t� shkat�rruar";
$l_log_text["LOG5_DEFS_KABOOM"] = "Ju u shkat�rruan nga nj� forc� U�K-s� n� sektorin [sector].";
$l_log_title["LOG5_DEFS_KABOOM"] 		= "<font color=red>Ship destroyed!</font>";
$l_log_text["LOG5_PLANET_CAPTURED"] = "Ju kap�n nj� planet i p�rket [owner]. Ajo kishte [cols] kolonist�t dhe [credits] kredi mbi t�.";
$l_log_title["LOG5_PLANET_CAPTURED"] = "Planet kapur!";
$l_log_text["LOG5_STORAGE_EWD"] = "Planeti juaj �sht� i befasuar nga [player] &#39;s sulm. Nj� nga anijet tuaja ruajtur b�r� nj� Warp urgjenc�s t� [sector] dhe zbarkoi n� planetin [planet]";
$l_log_title["LOG5_STORAGE_EWD"] = "Ruajtur anijes prishje e urgjenc�s!";
$l_log_text["LOG5_STORAGE_EWDFAIL"] = "Nj� anije ruajtur e urgjenc�s Device Warp Failed! Anija ruajtur u pushtua nga [player] pasi mundi planetit tuaj!";
$l_log_title["LOG5_STORAGE_EWDFAIL"] 	= "Stored Ship Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_STORAGE_CAPTURED"] = "Nj� anije ruajtur u pushtua nga [player] pasi mundi nj� nga planetet tuaj!";
$l_log_title["LOG5_STORAGE_CAPTURED"] 	= "Stored Ship <font color=red>CAPTURED!</font>";
$l_log_text["LOG5_CONFISCATION"] = "Anija juaj ishte konfiskuar nga [player]. A ndaj sulmeve t� tepruar ndaj lojtar�ve mirat [player] ka konfiskuar nj� nga anijet e juaj ([ship]).";
$l_log_title["LOG5_CONFISCATION"] 		= "<font color=yellow>Skirmish!</font>";
$l_log_text["LOG5_PLANET_CONFISCATION"] = "Planeti juaj ishte konfiskuar nga [player]. A ndaj sulmeve t� tepruar ndaj lojtar�ve mirat [player] ka konfiskuar nj� nga planetet tuaj ([name]) n� sektorin [sector] vler� [score] credits.";
$l_log_title["LOG5_PLANET_CONFISCATION"] 		= "<font color=yellow>Planetary Skirmish!</font>";
$l_log_text["LOG5_STORAGE_SUICIDE"] = "Nj� anije ruajtur suicided kur [player] mundi nj� nga planetet tuaj dhe u p�rpoq�n p�r t� kapur at�!";
$l_log_title["LOG5_STORAGE_SUICIDE"] 	= "Stored Ship <font color=red>SUICIDE!</font>";

$l_log_text["LOG5_SM_ATTACK"] = "Anije Sensore zbuluar nj� hyrje Sektorin e raketave p�r shkarkimin nga [sector] nga [player]!";
$l_log_title["LOG5_SM_ATTACK"] 	= "<font color=red>INCOMING SECTOR MISSILE DETECTED</font>";
$l_log_text["LOG5_SM_OUTMAN"] = "Nj� e raketave Sektori i shkarkuar nga [player] u dalloi warping n� sektor dhe ju shp�toi sulmit.";
$l_log_title["LOG5_SM_OUTMAN"] = "Sektori i raketave veprim i paqart�!";
$l_log_text["LOG5_SM_OUTSCAN"] = "Ju zbuluar [player] &#39;s nj� hyrje Sektorin e raketave duke u p�rpjekur p�r t� rregulluar m� anije tuaj, por gjenerator�ve tuaj mantel arritur t� luaj projektil� sensor Sektorin e qarqeve.";
$l_log_title["LOG5_SM_OUTSCAN"] = "Sektori i raketave mantel i suksessh�m!";
$l_log_text["LOG5_SM_EWD"] = "Ju jeni habitur nga [player] &#39;s Sektori sulm e raketave dhe t� angazhohen Device Warp e urgjenc�s duke k�rcyer n� nj� sektor t� panjohur.";
$l_log_title["LOG5_SM_EWD"] = "Sektori i raketave prishje e urgjenc�s!";
$l_log_text["LOG5_SM_EWDFAIL"] = "Sensor� juaj zbuluar [player] &#39;s Sektori sulm e raketave dhe t� angazhohen Device Warp Jasht�zakonshme. Ju d�gjuar nj� tingull t� �uditshme q� vijn� nga mbytje dhom� motor�t dhe er� t� djegur circuitry. &quot;Cop� Stupid i mut!&quot;, Ju britm�, duke nisur n� kompjuter. Ju shtr�ngoj p�r ndikimin!";
$l_log_title["LOG5_SM_EWDFAIL"] 	= "Sector Missile Emergency warp <font color=red>failed!</font>";
$l_log_text["LOG5_SM_WIN"] = "Anija juaj u sulmua nga [player] duke p�rdorur nj� Sektorin e raketave. Ju humbur [armor] pikat forca t� blinduara dhe [energy] nj�sive t� energjis� t� energjis� n� sulm.";
$l_log_title["LOG5_SM_WIN"] 		= "<font color=yellow>Sector Missile IMPACT!</font>";
$l_log_text["LOG5_SM_LOSE"] = "Anija juaj u shkat�rrua nga nj� predh� e Sektorit nga [player].";
$l_log_title["LOG5_SM_LOSE"] 		= "<font color=red>Sector Missile Combat Lost!</font>";

$l_log_text["LOG5_SURVIVE_PROBE_ATTACK"] = "Anija juaj u sulmua nga nj� hetim n� pron�si nga [player] n� sektorin [sector]. Ju humbur [armor] pikat forca t� blinduara dhe [energy] nj�sive t� energjis� t� energjis� n� sulm.";
$l_log_title["LOG5_SURVIVE_PROBE_ATTACK"] 		= "<font color=yellow>Probe ATTACK!</font>";
$l_log_text["LOG5_PROBE_ATTACK_FAILED"] = "[player] shp�toi nj� sulmi nga hetimi tuaj n� sektorin [sector].";
$l_log_title["LOG5_PROBE_ATTACK_FAILED"] 		= "<font color=red>Probe Attack FAILED!</font>";
$l_log_text["LOG5_PROBE_ATTACK_SUCCEEDED"] = "Hetim juaj shkat�rruar anije n� pron�si nga [player] n� sektorin [sector].";
$l_log_title["LOG5_PROBE_ATTACK_SUCCEEDED"] 		= "<font color=red>Probe Attack Succeeded!</font>";
$l_log_text["LOG5_DESTROYED_PROBE_ATTACK"] = "Anija juaj u shkat�rrua nga nj� hetim nga [player] n� sektorin [sector].";
$l_log_title["LOG5_DESTROYED_PROBE_ATTACK"] 		= "<font color=red>Probe Attack Lost!</font>";
$l_log_title["LOG5_AFTER_ACTION"] = "Pas Action Combat Report";

// Scan Logs

$l_log_text["LOG6_PLANET_SCAN"] = "[name] ka skanuar planetin tuaj [planet_name] n� sektorin [sector].";
$l_log_title["LOG6_PLANET_SCAN"] = "Planet hetim";
$l_log_text["LOG6_PLANET_SCAN_FAIL"] = "[name] ka tentuar t� skanoni planetin tuaj [planet_name] n� sektorin [sector], por nuk arriti.";
$l_log_title["LOG6_PLANET_SCAN_FAIL"] = "Planet scan d�shtuar";
$l_log_text["LOG6_SHIP_SCAN"] = "[player] ka skanuar anije tuaj.";
$l_log_title["LOG6_SHIP_SCAN"] = "Anije hetim";
$l_log_text["LOG6_SHIP_SCAN_FAIL"] = "[player] �sht� p�rpjekur t� scan anije tuaj, por d�shtoi.";
$l_log_title["LOG6_SHIP_SCAN_FAIL"] = "Anije scan d�shtuar";

// Starvation Logs

$l_log_text["LOG7_STARVATION"] = "Planet [name] n� [sector] nuk mund t� mbaj� popullsis� s� saj! Organics M� shum� jan� t� nevojshme. [starvation] kolonist�t vdiq nga uria. Kolonist�t filluar ngordhje n� [date].";
$l_log_title["LOG7_STARVATION"] 		= "<font color=yellow>Starvation!</font>";

// Probe Logs

$l_log_text["LOG9_PROBE_DETECTED_SHIP"]="<font color=yellow>Your probe id [id] detected [ship_name] entering sector [sector]</font>";
$l_log_title["LOG9_PROBE_DETECTED_SHIP"] = "Hetim zbuluar Incoming Ship";
$l_log_text["LOG9_PROBE_SCAN_SHIP"]="<font color=yellow>Your probe id [id] scanned [ship_name] entering sector [sector]<br>Hull: [hull] Engines: [engines] Power: [power] Fighter Bay: [fighter] Sensors: [sensors] Beams: [beams] Torp Launchers: [torps] Armor: [armor] Shields: [shields] Cloak: [cloak]<br>Armor Points: [armor_pts] Fighters: [fighters] Torpedoes: [avail_torps] Ship Energy: [energy] Credits: [credits] <br>Mine Deflectors: [deflectors] Emergency Warp: [ewd] Escape Pod: [pod] ECM: [ecm]</font>";
$l_log_title["LOG9_PROBE_SCAN_SHIP"] = "Hetim skanuar Incoming Ship";
$l_log_text["LOG9_PROBE_DESTROYED"]="<font color='#00ff00'>SECTOR defenses in [sector] destroy your probe.</font>";
$l_log_title["LOG9_PROBE_DESTROYED"] = "Hetim Asgjesuar";
$l_log_text["LOG9_PROBE_NOTURNS"]="<font color='#00ff00'>You do not have enough turns for probe [probe_id] to move to [sector]</font>";
$l_log_title["LOG9_PROBE_NOTURNS"] = "Raporti hetim";
$l_log_text["LOG9_PROBE_INVALIDSECTOR"] = "<font color='#00ff00'>Moving to sector [target_sector] is not allowed</font>";
$l_log_title["LOG9_PROBE_INVALIDSECTOR"] = "Raporti hetim";
$l_log_text["LOG9_PROBE_DETECTPROBE"]="<font color='#00ff00'>Probe [probe_id] in sector [sector] detected [probe_detect]</font>";
$l_log_title["LOG9_PROBE_DETECTPROBE"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_DETECTED_GATEWAY"]="<font color='#00ff00'>Seeker Probe [probe_id] in sector [sector] detected a Gateway Sector</font>";
$l_log_title["LOG9_PROBE_DETECTED_GATEWAY"] 		= "[probe_type] <font color='yellow'>Seeker Probe Report</font>";

$l_log_text["LOG9_PROBE_SCAN_FAIL"] = "[name] p�rpoq t� skanoni nj� nga hetimet tuaj n� sektorin [sector], por nuk arriti.";
$l_log_title["LOG9_PROBE_SCAN_FAIL"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_SCAN"] = "Nj� nga hetimet tuaj n� sektorin [sector] ishte skanuar nga [name].";
$l_log_title["LOG9_PROBE_SCAN"] 		= "[probe_type] <font color='yellow'>Probe Report</font>";
$l_log_text["LOG9_PROBE_ATTACKED"] = "Nj� nga hetimet tuaj n� sektorin [sector] �sht� sulmuar dhe shkat�rruar nga [name].";
$l_log_title["LOG9_PROBE_ATTACKED"] 		= "[probe_type] <font color='yellow'>Probe Destroyed</font>";

$l_log_text["LOG9_PROBEHUNTER_SUCCEED"] = "Nj� nga Gjahtar�t hetimin tuaj ka shkat�rruar nj� probe_type [probe_type] n� pron�si nga [name] n� [sector].";
$l_log_title["LOG9_PROBEHUNTER_SUCCEED"] = "Hetim gjahtari shkat�rruar [probe_type]";
$l_log_text["LOG9_PROBEHUNTER_DESTROYED"] = "Probe_type [probe_type] n� sektorin [sector] �sht� sulmuar dhe shkat�rruar nga nj� gjuetar hetimin n� pron�si nga [name].";
$l_log_title["LOG9_PROBEHUNTER_DESTROYED"] 		= "[probe_type] <font color='yellow'>Probe Attacked and Destroyed</font>";
$l_log_text["LOG9_PROBEHUNTER_EXPLODED"] = "Gjahtari hetimin juaj n� sektorin [sector] �sht� humbur kur shp�rthimi q� rezultojn� nga sulmet e saj mbi probe_type [probe_type] n� pron�si nga [name] mb�shtjell� at�.";
$l_log_title["LOG9_PROBEHUNTER_EXPLODED"] 		= "Probe Hunter Probe <font color='yellow'>Destroyed</font>";

// Auto Trade Logs

$l_log_text["LOG10_AUTOTRADE"]="<font color=yellow>Auto Trade for [planetname] in sector [sector] for [totalcost] credits.<br>Goods: [goodsamount] @ [goodsprice] credits - Ore: [oreamount] @ [oreprice] credits - Organics: [organicsamount] @ [organicsprice] credits - Energy: [energyamount] @ [energyprice] credits - Colonists: [colonistamount] @ [colonistprice] credits<br></font>";
$l_log_title["LOG10_AUTOTRADE"] = "Auto Raporti i Tregtis�";
$l_log_text["LOG10_AUTOTRADE_ABORTED"]="<font color='#00ff00'>Auto Trade for [planetname] in sector [sector] was aborted due to enemy sector defense in sector [destsector].<br></font>";
$l_log_title["LOG10_AUTOTRADE_ABORTED"] = "Auto Raporti i Tregtis�";

?>
<?php
$l_log_title["LOG3_SPACE_PLAGUE"] = "Space Plague!";
$l_log_text["LOG3_SPACE_PLAGUE"] = "Your planet [name] in sector [sector] has been hit by Space Plague. [percentage] percent of the colonists were killed.";
?>
<?php
$l_log_title["LOG3_PLASMA_STORM"] = "Plasma Storm!";
$l_log_text["LOG3_PLASMA_STORM"] = "Your planet [name] in sector [sector] has been hit by a Plasma Storm. All stored Energy has been lost.";
?>
<?php
$l_log_title["LOG3_PLANET_REVOLT"] = "Planetary Revolt";
$l_log_text["LOG3_PLANET_REVOLT"] = "Too many people on your planet [name] in sector [sector] and they have revolted!!! Damages: [credits]% credits lost, [colonists]% colonists killed, [organics]% organics destroyed, [goods]% goods destroyed, [ore]% ore destroyed, [torps]% torps destroyed, [fighters]% fighters destroyed and [energy]% energy lost.";
?>
<?php
$l_log_title["LOG5_PROBE_WARP"] = "";
$l_log_text["LOG5_PROBE_WARP"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_HUNTER"] = "";
$l_log_text["LOG5_PROBE_HUNTER"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_SGSEARCH"] = "";
$l_log_text["LOG5_PROBE_SGSEARCH"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_SENTRY"] = "";
$l_log_text["LOG5_PROBE_SENTRY"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_SEEKER"] = "";
$l_log_text["LOG5_PROBE_SEEKER"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_REALSPACE"] = "";
$l_log_text["LOG5_PROBE_REALSPACE"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_HUNTER_PROBE"] = "";
$l_log_text["LOG5_PROBE_HUNTER_PROBE"] = "";
?>
<?php
$l_log_title["LOG5_PROBE_TRAP"] = "";
$l_log_text["LOG5_PROBE_TRAP"] = "";
?>
