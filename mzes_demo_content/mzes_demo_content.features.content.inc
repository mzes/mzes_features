<?php
/**
 * @file
 * mzes_demo_content.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function mzes_demo_content_content_defaults() {
$content = array();
$content['about_us'] = (object)array(
  'exported_path' => 'page/about-us',
  'title' => 'About Us',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1306157747',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'about_us',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The Mannheim Centre for European Social Research (MZES) is an interdisciplinary research institute of the University of Mannheim. In close association with the Department of Social Sciences it has dedicated itself since its founding in 1989 to the investigation of political and societal developments in Europe. Its foci are on comparative research on Europe and an exploration of the European integration process.

The research at the MZES is organized within two research departments and their respective foci.
A. 	European societies and their integration
B. 	European political systems and their integration

The research is supported by a well-established infrastructure. It includes the Europe Library, the data archive Eurodata, and other institutions, which prepare comprehensive basic information as well as numerous databases for research on Europe and make these available for downloading.

The research in Department A concentrates on the cultural, social, economic and welfare state foundations for the living conditions of the populations in the European countries, as well as on changes in these foundations and the variations among the different societies. Foci are the investigation of social structures and inequalities, especially in the educational and employment systems; the analysis of the welfare state and its institutions; the development of relationships within the (extended) family; migration and interethnic relations, and the moral foundations for societal integration.

Department B links comparative research on the national political systems of Europe with research on European integration. The foci in the first of these two topic areas are political participation, voter behavior, political parties and electoral systems in the individual European states and their development on the European level. The second topic area examines the political system of the EU and the international embeddedness of European institutions; the institutionalization of international negotiation systems, and the development of a broader European regional system in Eastern Europe.
In its research the MZES concentrates on:

* long-term fundamental research of an interdisciplinary and international nature
* cooperation with similar institutions in Germany and abroad
* the regular convening of international conferences and workshops
* education of young scholars

The MZES is involved in several international research networks.
In addition to basic funding from the German state of Baden-W√ºrttemberg the Centre is primarily financed by outside funding sources such as the German Research Foundation and other organizations which promote scientific research, as well as by research funds from the EU.',
        'summary' => 'The Mannheim Centre for European Social Research (MZES) is an interdisciplinary research institute of the University of Mannheim. In close association with the Department of Social Sciences it has dedicated itself since its founding in 1989 to the investigation of political and societal developments in Europe. Its foci are on comparative research on Europe and an exploration of the European integration process.',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Mannheim Centre for European Social Research (MZES) is an interdisciplinary research institute of the University of Mannheim. In close association with the Department of Social Sciences it has dedicated itself since its founding in 1989 to the investigation of political and societal developments in Europe. Its foci are on comparative research on Europe and an exploration of the European integration process.</p>
<p>The research at the MZES is organized within two research departments and their respective foci.<br />
A. 	European societies and their integration<br />
B. 	European political systems and their integration</p>
<p>The research is supported by a well-established infrastructure. It includes the Europe Library, the data archive Eurodata, and other institutions, which prepare comprehensive basic information as well as numerous databases for research on Europe and make these available for downloading.</p>
<p>The research in Department A concentrates on the cultural, social, economic and welfare state foundations for the living conditions of the populations in the European countries, as well as on changes in these foundations and the variations among the different societies. Foci are the investigation of social structures and inequalities, especially in the educational and employment systems; the analysis of the welfare state and its institutions; the development of relationships within the (extended) family; migration and interethnic relations, and the moral foundations for societal integration.</p>
<p>Department B links comparative research on the national political systems of Europe with research on European integration. The foci in the first of these two topic areas are political participation, voter behavior, political parties and electoral systems in the individual European states and their development on the European level. The second topic area examines the political system of the EU and the international embeddedness of European institutions; the institutionalization of international negotiation systems, and the development of a broader European regional system in Eastern Europe.<br />
In its research the MZES concentrates on:</p>
<p>* long-term fundamental research of an interdisciplinary and international nature<br />
* cooperation with similar institutions in Germany and abroad<br />
* the regular convening of international conferences and workshops<br />
* education of young scholars</p>
<p>The MZES is involved in several international research networks.<br />
In addition to basic funding from the German state of Baden-W√ºrttemberg the Centre is primarily financed by outside funding sources such as the German Research Foundation and other organizations which promote scientific research, as well as by research funds from the EU.</p>
',
        'safe_summary' => '<p>The Mannheim Centre for European Social Research (MZES) is an interdisciplinary research institute of the University of Mannheim. In close association with the Department of Social Sciences it has dedicated itself since its founding in 1989 to the investigation of political and societal developments in Europe. Its foci are on comparative research on Europe and an exploration of the European integration process.</p>
',
      ),
    ),
  ),
);
$content['test_profile_biedinger'] = (object)array(
  'exported_path' => 'profile/nicole-biedinger',
  'title' => 'Nicole Biedinger',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'profile',
  'language' => 'und',
  'created' => '1306163717',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'test_profile_biedinger',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Description goes here.',
        'summary' => 'Description summary goes here.',
        'format' => 'filtered_html',
        'safe_value' => '<p>Description goes here.</p>
',
        'safe_summary' => '<p>Description summary goes here.</p>
',
      ),
    ),
  ),
  'field_profile_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Nicole',
        'format' => NULL,
        'safe_value' => 'Nicole',
      ),
    ),
  ),
  'field_profile_image' => array(
    'und' => array(
      0 => array(
        'alt' => '',
        'title' => '',
        'filename' => 'biedinger.jpg',
        'uri' => 'public://biedinger.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '3280',
        'status' => '1',
        'type' => 'image',
        'rdf_mapping' => array(),
        'image' => 'ˇÿˇ‡' . "\0" . 'JFIF' . "\0" . '' . "\0" . '' . "\0" . 'd' . "\0" . 'd' . "\0" . '' . "\0" . 'ˇÏ' . "\0" . 'Ducky' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇÓ' . "\0" . 'Adobe' . "\0" . 'd¿' . "\0" . '' . "\0" . '' . "\0" . 'ˇ€' . "\0" . 'Ñ' . "\0" . '#%\'%#//33//@@@@@@@@@@@@@@@&&0##0+.\'\'\'.+550055@@?@@@@@@@@@@@@ˇ¿' . "\0" . '' . "\0" . 'æ' . "\0" . 'ë"' . "\0" . 'ˇƒ' . "\0" . 'y' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '!1AQa"q2Åë°±¡BR#3—brC≤' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '1Qˇ⁄' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . '◊!UB‚Í\\$JÆ¶ƒ≠#ÇV∂“µ@§&˝xÜnº_ò|–:ÑñΩé»ÇïTBÄ]\\]@!A‘!BÉ´àQØn≈¥uØ&çP.‚Í+vÍë¿W!ƒ™ªç˙’µmKùï†‹∑IŒk]ìﬂ«·…UâúMI≈kW≥o24óWH^
+˝√xZ◊Q•RœrÁ∏4‰8.wÍ ®≤~·xˇ' . "\0" . '4´¨º∏Ã\\8–™∆Í¶«ë]lí4ÁBÇÍ=≈ÊödsH‰HS ﬁÔ¢8I≠£Éø™†cõ1“{d
D2∏?”êQæœ‹1ÀFNœM«èqåë°Ã5í√BﬂÕàÆ*uΩ˝≈£¡åÍé¥sJñ÷Æ®÷W±]«©áªà‚ïïBuàE4Ñ!«ú(0Î…f∑Õ≈±@˚Üû˜~ï≥O#ã§ˇ' . "\0" . 'ùŒÊÁ:6€∞—”Ú3Ù€Ê˘‰∞û‚Ω˛E˚‚i˝8MÄeÜj¬†≤Gós«™|H¬‹ÖBÇ^Bz‘>g—™£Ö≈Æ.¶$ÊúeÀ2®J¥f’©ΩŸï]òÉQÖ6fTRº¬`7”xä\\èïÈ√–:πé+ì8L‹1#.hÑœöÕ`—Ï5RÌﬁ€®uÂ4Yéj<s«›Êoká1Õ5ÕΩ€iÉ\\h~(´®KA9>≠ßU◊Ω√ò4?ÿ’ëï»á4}S≤Ω•Œ√µ‡8}Ë\'Ì∑f#påtZ∆89°√"*∞ñÓ##ãqòZ˝¢c5õI5-Ì≈fë9BäÑ iB
› OI≥‹üı±≠)ﬁ~x/5ïÂÔs›ô5\'©≈z?∏Üç¶ÚJ–zdì‘/5{®—^KQ	5sÉFe_ÌvÕçÄëä•¥è‘∫hÃ
-,† ú◊aÇÓÜªÇDm4O±®"Mj◊pUñ.éØ`Z]MMj⁄Q5Æ1Àé' . "\0" . '‡S∑L˝&Ω∏ëöõ∏ÌœàπÌ@çÓ|Nà‡GœEì\'âè9πö	Í8•≤]Q¥ëP0<≈T+wBËèãOT‰Rñ∫éë¶EòÁº€\\<ka∞mùß H#‰±ÏØ•NÖ§ˆÏÌcülM+ã:Ö/–°YQT!¶êÑ")˝ÿÌ;–¸˙X>.ÕçH^üÓY.ˆâ‚åj}5˛8Ø3ßnGëV%K⁄"’3è%¢ctUFÿﬂF›”ô |5‹Ôq“ÍSÄZbP0™~9-¸€ñ5z+¿ tú–^±È√4MÓ≈3.í=Yaä©‹∆ˆ‘w
ïçÃ÷≤¡ƒÚTWñ:Í∆*8—*Ü6M;Kø(mUƒ1' . "\0" . 'G¥Ú·‚ª`Ê8äT*H\\¿$èÊ’†n¡Œ∂‡°ﬂBluBÿÉâ…ı?b
∆N÷˘¢©<H®V;U√dΩáHv∞‡é	ç¢ÿ_≈p˚©â¬6ÜÀ≤$îΩ°èáyçé1K°«ÏAª]BUBêÑ +ﬁ;Mµ¥±\\€≥I∏.ı' . "\0" . 'Ê⁄bŸVÔ÷M∫∞{èû
»”‡1
¬±ˆ—ü¸ˆ' . "\0" . '9˝™0¥töÑÜÄäñ< ≥±-u£O"AÒN:›≤
ê¥äFŸ∂ªY44¯•ÌÒiπkÅÃ‚¨_h–jL5≤TAA£∑n´W4gL’%Ì®äJéÁ8’ﬂ—h∂5Êìsk±pPg†¥ÜYƒÚ.ËÆ€o»tbè8π‹Jk¯Ìmt©v¨†≈®£“–=ŒÕí—Ó¿âËÉ	õ“—µcZ' . "\0" . '9íh¢™≠‡∑˛Ò[˘›GüöŸÑWµÛö<≤≤Ñ`Ó˙ß˝)6Î{ãôhYHÿ9ª' . "\0" . '°{1èu‘Ø«Hkú„’ŒÌØ…TlPÑ,®BÅ§!h≥˛Ô›?âa¸hœÍNh„«HŒû*ˆp˜DÊ«ÉàÌ=V+uˆ˛Ôq+Ô∑;òŸc6‘ù#ÉZ¨)r4⁄â¯Œ¢>âÊ…N*ßj∫å>KZdgFÊj¶π‘ZDâfÌ©M⁄;]dv≠' . "\0" . 'LΩ‰∂â}íE8›ÆVñi™vıœc5gçﬂu†üPOoZX@$Éé8®"2‡8©÷ÓW\\@cõSp52ÿ8' . "\0" . 'ÓãJC›Í\\∂Ÿîtî’§“‚ƒí›}≈wµ˚ä‰€' . "\0" . '˙5ëÈ9T6∏¸JäùÓ≥,ﬂƒbﬂPsê‰>' . "\0" . '´Ωènfﬂbÿˇ' . "\0" . 'Ÿ\'táØ/ÇÕ{nwßMrK›´’ïÁÒ9mR¯GP∏ÖjÑ!HB	ã»<çÑ5ŒZW¢êÑ€iYÿ=ÛπÊYHÕ‹<$Õm]§‘T–≠µ–ëÒò£¿ºi/‰%ù›ˆ∆Ÿà›§T”‡B‘J•ùédZ€â#$‘R\\ºP≥F8 ∏◊OT∞‘*%⁄√r„HÒÊ√Ã]°¡Ó' . "\0" . '' . "\0" . '©°‚™mÓI”ïFJÊ“L%J"‹≈“µ“5çä¥£| uª@å”ã™äúRúJ	ê' . "\0" . 'ÆC‡û EˆÎ=”èl“πÕˇ' . "\0" . 'iˆ∂›K€¥›òÎ¨∆Z⁄gé,s=Ωºjlë√â=±Í¿ä¬∂>›¥e•è®Ï;™zö’p≥{◊º	£ìqvãxcÑ∫•Œ‡M0†ZE*¿Ñ!@!@⁄∏\\ôßä!0Î∏i™æ	ª2π¬6—çÕ«üD∞U{‰,ö’¿Lÿ‰n#VG¢v‚r∆>G;Çz,{=ÙÔ∫ôÓí}6Wád(ë∫MjÊ2KnóS~£ekú‹Å-˘`∏@†ZD€hY®JÍ›ç' . "\0" . ',˝ª‹
∂µπ•Rãfä.åJf9∆\'Ü
+óbk õW•NÌjWÖRÿﬁÈ≠^«∂S_¶jÃ
¥É≈T√∂‹ßµE#D—∑ë≠D°›ü%–Ä9‘©´4∂É8´◊D⁄jÉä©≤àIr_LÖ~™ﬁ∫»`»yäîÜ‰o¶9íA	7á»ﬂ#>‘Ü 2@ÍjÇóO9#êQ§óô©ÊêÁî”…Z@È*T€QKPFn$üö≠<’Öãı@»êÅçÏñÌsñÊ[J¯‡®"`oÇ“Óp∂Ÿ„ù$¸±Y∏ÒãI
âlÕ6ÌÍOâ)XÒ	Q–F °pÇ®‰n ‡Uù´ÈBUkEÀpHÂºÄåùj∏£Tê¸Tc5
„wykNŸ•TñIAS¡%åótHáqˇ' . "\0" . '.E2∆3«Ã¸~jK›Ë€π«Ã„A‚P¿©¡£ÚmriXO/íù†¢\'„@£Ω‘irUª≥=˝RÖPÊÑ5
„ö„ÖrQÀÍ‡•f–™-√≈;c&ósI¶	¶;Lï.»cëÕfn¨Õ¨ÔáÊ√˝•hÿ‡¯ÉõòL][2Ú*
	ô‰?rëY=S©ïj4ûJiÅÕïÃ{Hp¡√™C·"ºñëJë!$DsJ-Õî2P\'õ Æj®\\Jùgc{{M ≈‚ï„˛£äÇPñI^-Ì∆π]ó ?3∫+ã[f[1∞≥ÁøãèªgeîE±
ìÁê‚Á®tÕãTáRÓ\'2ç˝«a‡9™ÈIkzî≠eÚU∆•…3ä»—…1≠KèµµMNk 	“(≈PçE	™°(A{™x)¥ÌFµ¶ûºT∞ÉÑv®¥´à˘)n•3˚Ö€;†√È…Ä8UIÚ»(pvJ≠·§Q∆úèÏ.∫' . "\0" . '3S?™>Ù.!Çz˙£L¥†x˚‘K´¿ZAT˘(cßk©Ò˙"Ë4⁄B^t»¥é°≈AL-®ÍÆM' . "\0" . 'Ä¶äqM‹i¢¢6”kÎÓq4GW∏∞…j»ßh„Ù
£bèTá1#Sy4d≠$2' . "\0" . 't
∏Á–)VãÜ∆›#>@‘d$ª!≈"oTæé√Ûúíü˚]òÑ	ÄóŒ]¿dï!Ô%r€NìL◊$Æ<–G“◊íêˇ' . "\0" . '"bj5Õ?\'ïTE¢ÑˇŸ',
      ),
    ),
  ),
  'field_profile_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Biedinger',
        'format' => NULL,
        'safe_value' => 'Biedinger',
      ),
    ),
  ),
  'field_profile_postal_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails PartyType="Organisation"><NameLine>Universit&#xE4;t Mannheim - MZES</NameLine></NameDetails>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => 'Universit√§t Mannheim - MZES',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68131',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => '',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_research' => array(
    'und' => array(
      0 => array(
        'value' => 'Ethnische Bildungsungleichheit (ethnische Schichtung), Migration und Integration, vorschulische Kompetenzentwicklung, Bildungsungleichheit, Frauenerwerbst√§tigkeit, Vorschulwahl',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Ethnische Bildungsungleichheit (ethnische Schichtung), Migration und Integration, vorschulische Kompetenzentwicklung, Bildungsungleichheit, Frauenerwerbst√§tigkeit, Vorschulwahl</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_research_interests' => array(
    'und' => array(
      0 => array(
        'value' => 'Ethnische Bildungsungleichheit (ethnische Schichtung)',
        'format' => NULL,
        'safe_value' => 'Ethnische Bildungsungleichheit (ethnische Schichtung)',
      ),
      1 => array(
        'value' => 'Migration und Integration',
        'format' => NULL,
        'safe_value' => 'Migration und Integration',
      ),
      2 => array(
        'value' => 'vorschulische Kompetenzentwicklung',
        'format' => NULL,
        'safe_value' => 'vorschulische Kompetenzentwicklung',
      ),
      3 => array(
        'value' => 'Bildungsungleichheit',
        'format' => NULL,
        'safe_value' => 'Bildungsungleichheit',
      ),
      4 => array(
        'value' => 'Frauenerwerbst√§tigkeit',
        'format' => NULL,
        'safe_value' => 'Frauenerwerbst√§tigkeit',
      ),
      5 => array(
        'value' => 'Vorschulwahl',
        'format' => NULL,
        'safe_value' => 'Vorschulwahl',
      ),
    ),
  ),
  'field_profile_titles' => array(
    'und' => array(
      0 => array(
        'value' => 'Dr.',
        'format' => NULL,
        'safe_value' => 'Dr.',
      ),
    ),
  ),
  'field_profile_visitor_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails/>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => '',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68159',
        'thoroughfare' => '',
        'premise' => 'A5, 6 (Geb√§udeteil A)',
        'sub_premise' => 'Raum: 316',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_staff' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_staff_status' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_title_job' => array(
    'und' => array(
      0 => array(
        'value' => 'Researcher',
        'format' => NULL,
        'safe_value' => 'Researcher',
      ),
    ),
  ),
  'field_profile_gender' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_internal_email' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_staff_external' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_staff_position' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_titles_rendering' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['test_profile_esser'] = (object)array(
  'exported_path' => 'profile/hartmut-esser',
  'title' => 'Hartmut Esser',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'profile',
  'language' => 'und',
  'created' => '1306162283',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'test_profile_esser',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Hartmut Esser, geb. 1943 in Elend/Sachsen-Anhalt; Studium der Volkswirtschaftslehre und Soziologie in K√∂ln 1971 Diplom (Volkswirt sozialwissenschaftlicher Richtung) in K√∂ln; 1974 Promotion in K√∂ln (Dr.rer.pol.); 1981 Habilitation in Bochum; 1974 ‚Äì 1978 Akademischer Rat Ruhruniversit√§t Bochum; 1978 ‚Äì 1982 Wissenschaftlicher Rat und Professor Universit√§t Duisburg GHS; 1982 ‚Äì 1987 o. Professor f√ºr Empirische Sozialforschung Universit√§t Essen GHS; 1985 ‚Äì 1987 Gesch√§ftsf√ºhrender Direktor des ZUMA, Mannheim; 1987 ‚Äì 1991 o. Professor f√ºr Soziologie Universit√§t zu K√∂ln; seit 1991 o. Professor f√ºr Soziologie und Wissenschaftslehre an der Fakult√§t f√ºr Sozialwissenschaften der Universit√§t Mannheim.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Hartmut Esser, geb. 1943 in Elend/Sachsen-Anhalt; Studium der Volkswirtschaftslehre und Soziologie in K√∂ln 1971 Diplom (Volkswirt sozialwissenschaftlicher Richtung) in K√∂ln; 1974 Promotion in K√∂ln (Dr.rer.pol.); 1981 Habilitation in Bochum; 1974 ‚Äì 1978 Akademischer Rat Ruhruniversit√§t Bochum; 1978 ‚Äì 1982 Wissenschaftlicher Rat und Professor Universit√§t Duisburg GHS; 1982 ‚Äì 1987 o. Professor f√ºr Empirische Sozialforschung Universit√§t Essen GHS; 1985 ‚Äì 1987 Gesch√§ftsf√ºhrender Direktor des ZUMA, Mannheim; 1987 ‚Äì 1991 o. Professor f√ºr Soziologie Universit√§t zu K√∂ln; seit 1991 o. Professor f√ºr Soziologie und Wissenschaftslehre an der Fakult√§t f√ºr Sozialwissenschaften der Universit√§t Mannheim.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_biography' => array(
    'und' => array(
      0 => array(
        'value' => 'Habilitation an der Ruhruniversit√§t Bochum, Promotion zum Dr. rer. pol. an der Wirtschafts- und Sozialwissenschaftlichen Fakult√§t der Universit√§t zu K√∂ln',
        'summary' => 'Habilitation an der Ruhruniversit√§t Bochum, Promotion zum Dr. rer. pol. an der Wirtschafts- und Sozialwissenschaftlichen Fakult√§t der Universit√§t zu K√∂ln',
        'format' => 'filtered_html',
        'safe_value' => '<p>Habilitation an der Ruhruniversit√§t Bochum, Promotion zum Dr. rer. pol. an der Wirtschafts- und Sozialwissenschaftlichen Fakult√§t der Universit√§t zu K√∂ln</p>
',
        'safe_summary' => '<p>Habilitation an der Ruhruniversit√§t Bochum, Promotion zum Dr. rer. pol. an der Wirtschafts- und Sozialwissenschaftlichen Fakult√§t der Universit√§t zu K√∂ln</p>
',
      ),
    ),
  ),
  'field_profile_contact_note' => array(
    'und' => array(
      0 => array(
        'value' => 'Note: Please contact via secretary only!',
        'format' => NULL,
        'safe_value' => 'Note: Please contact via secretary only!',
      ),
    ),
  ),
  'field_profile_email' => array(
    'und' => array(
      0 => array(
        'email' => 'Esser@sowi.uni-mannheim.de',
      ),
    ),
  ),
  'field_profile_fax' => array(
    'und' => array(
      0 => array(
        'value' => '+49-621-181-2803 ',
        'format' => NULL,
        'safe_value' => '+49-621-181-2803 ',
      ),
    ),
  ),
  'field_profile_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Hartmut',
        'format' => NULL,
        'safe_value' => 'Hartmut',
      ),
    ),
  ),
  'field_profile_image' => array(
    'und' => array(
      0 => array(
        'alt' => '',
        'title' => '',
        'filename' => 'esser.jpg',
        'uri' => 'public://esser.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '5991',
        'status' => '1',
        'type' => 'image',
        'rdf_mapping' => array(),
        'image' => 'ˇÿˇ‡' . "\0" . 'JFIF' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇ˛' . "\0" . ';CREATOR: gd-jpeg v1.0 (using IJG JPEG v62), quality = 75
ˇ€' . "\0" . 'C' . "\0" . '		
 $.\' ",#(7),01444\'9=82<.342ˇ€' . "\0" . 'C			2!!22222222222222222222222222222222222222222222222222ˇ¿' . "\0" . '' . "\0" . '”' . "\0" . 'ë"' . "\0" . 'ˇƒ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
ˇƒ' . "\0" . 'µ' . "\0" . '' . "\0" . '' . "\0" . '}' . "\0" . '!1AQa"q2Åë°#B±¡R—$3brÇ	
%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyzÉÑÖÜáàâäíìîïñóòôö¢£§•¶ß®©™≤≥¥µ∂∑∏π∫¬√ƒ≈∆«»… “”‘’÷◊ÿŸ⁄·‚„‰ÂÊÁËÈÍÒÚÛÙıˆ˜¯˘˙ˇƒ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
ˇƒ' . "\0" . 'µ' . "\0" . '' . "\0" . 'w' . "\0" . '!1AQaq"2ÅBë°±¡	#3Rbr—
$4·%Ò&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyzÇÉÑÖÜáàâäíìîïñóòôö¢£§•¶ß®©™≤≥¥µ∂∑∏π∫¬√ƒ≈∆«»… “”‘’÷◊ÿŸ⁄‚„‰ÂÊÁËÈÍÚÛÙıˆ˜¯˘˙ˇ⁄' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . 'Ù≈ßäà`w5 ÈZêH:tßJfÔNÁö' . "\0" . 'x˙”≈F:S∫
@<K⁄ö6ıgTíÃxüoue8«õ∏v`qúu"Ä?ï8W2|Xè©-·Qdü3]»rt
b}MZ∫÷^`[∆õ¢#ÇºÌ„8o®ßfFÔ^)jÖÆ©mpŸUY∏⁄NjË|éº{R%ç74¥' . "\0" . 'ˇ' . "\0" . 'J)π•†
)3E äO∆ä' . "\0" . 'ƒ:TÄqL' . "\0" . '˚”Ä"®CÒäp÷ö)AÊÄØ&π›S∆öuƒ∂ÈìM8' . "\0" . '`3·æıw\\‘ìN∞b÷∏(ÄMp\'IiëûE>|„h_Óéøü~zU$& I‚õ…u9nn€ŒådŒ6´û¿ﬁî/à\'Õr∑†¨òâãıM£Ç=w5∑e‡Âé‹˝†˘≤Jp2πG•A/Çƒ™Õ	`IﬂÛåÛ⁄´Bu3Óµæ—D:Ä˚<∂◊CqÉ8unåzdvßMe<F›?Qò4;pÂŒ' . "\0" . '2{ıÌTµ]hmn#gg⁄Ï±»ˇ' . "\0" . '*•·˝F˘/ﬁŒGgdÚ◊<®\\p>ù©ÿ.zIπ9ªâxbvﬁÍBí∏˘î˚èº=G”û≥Kqg«π„w#Ωx•∆≥q¢ÕgyopÌorÂf∑ë∑(t8!ÅÎêAJΩ¢¯∆˛ÀVÚ!∏cÊ1∆øw9‡b°∆„Lˆ¡É É∏u˜˜¶˚u©¥ÕE5.⁄ÌFHïŸ}	"•*í«Ê\'*√p#“≥πeZ^îùÈiÄΩÈi¢ñÄ4RQ@‡”á^î¡÷ü”4ƒ;ΩV‘/¢”Ì‚bpº' . "\0" . ':±ÏI=ƒv∞ºÛ:«≥1¿¿‹]_Îöâ1ôLˇ' . "\0" . 'ËË ä:π˜Ê©+â≤æ∫˜o€ò3]»‚8U€pçÿÙQÌè“ª=+Gxl"KØûÈÄ39ÍN9™⁄fñóZå mc@#;ßnK{·p?]LkóhlÏhbT
0º
CipñUÉÄ=M^çp)Ô‚ﬁ+;ïcîΩ—bê—+qñ˜œj‰n¸0ñìmà(ë	B@∆W∑‚+‘^1œ' . "\0" . 'ìXz¨cv@\'Ò5jD∏û=‚M8ºvˆÏ°ùÓLÉh«R†˛T∫ä…ÆºÆ≈T0LzEu”i77Ëœ.§≤.3ÖÃ‰÷≈ûà∂ƒK"çÂ∑∂=jÓMà-Ó/4õ∞È+˘IπY$2ì¡˙É¸Î≠–µswm#ÛÑ|Ø∫0»˛¢π…ø~§.7p{“iÏm5FÇE!∞A@N’<©¸-]ô€ ‡È˜eiµ_JΩY«Ÿ‹≥)Ë[±´•©ÍAAJ)Ω)¬Ä
)sÔE' . "\0" . 'c”â«9È÷êq◊•2‡˘v≤7L)&®Gòj⁄‰ﬁ#Ò⁄s»…¶¿ƒlSè1≥è«Ωv≥Kò-≠≠c<¿&·…EöÂ<)£∆˜œ<…5—#π' . "\0" . 'ˇ' . "\0" . 'çuˆ÷±‹xñI6‰@ò?Ôì˙’2QµmäŸ(S’ΩœzπEW$d[å©≥(≥∆3÷•f%j∏»<
îì∂ê»ME$i(√ÆiÁÜ Ø5l±Åö`Fm‚åÂP}Pæ¬©#ß†´≥HAÔì“≥Ø	aûww–ôÖñy«
ßé‹WQmSZ∆ﬂ.ıLgπïÀ‹¸≠…ÌäŸ“n~UàøŒ¿„¸*§$fi˙Í«ÆM•Mvë‹£êæg˜q‘ZÌ„ënÌñ·A—îıqÕxßƒÀ	a‘óQÄ√ÿ`ˆ˛U›¯[∏ø∂éÊ‚„ÃÛìm ú¨' . "\0" . 'a∏ÈêR]A>á^i@¢L,Ñ/N‘Ä‘î-Q@=j+–Z e∆rÑc©E$√t‰©B24kÉDánäŸ8ıÙ´⁄\\9nXeùüs?v&≠i∂^Núäˇ' . "\0" . 'x‰“¶µDäD%éhlINÆjÏgé=*á˘ÔVZ_&"« (‰éM"ãÀÔRÌ„9ÈXZ˚<k$†˛&=Ko‚K;ì∂)Ué2p{R≥öÆÄÁ€ΩPÑÓΩtœ' . "\0" . 'd‘øléXã!ˆÕ@ÄTÆqòÕ	$@d‰c≠gÃ	ﬁ@8Ø›M∞Ãå„œz≈π÷¥Ë>Wªågù§åöhL≠ˆôôîFsÌO≥≥ñÑ8»˚ pŒjƒ†ÇÍ6ÏïIﬁ:{+U$émÎªú¿?Áöm±ã¨"’Ì2£c˛ƒVoÇ,ÙÔ$ÜI>˚)Ëy»>«¸™O,≤(v⁄€XÑÍH≠oZÖ≥K¨	Â\\„£éù≤ü∆´°=NÈ»ä≈≥ê)ı∞≈≤ÿ5fX¥QE 2≈=F‚åÉ≈0
zùß>ï@Hó)+É«–‡‘"ÍﬁS∫	Uî1ÛüCY1({£kp≈$4êú„˙ÛÙ≠+}∆ Ÿ⁄(ˆK3ÉIß¢eö8#ﬁ˘c∏' . "\0" . 'díz
gë¬Ö@26ÜoÊ+m4¡‚X.VIKIä≈òï;J„è\\S_¡y9Ú°õ…WºïF[òıßa\\«ÒãÏ,#k3rgôR èßØ9Ø8¥÷ÕŒ¢≤,∑EeIlÒË@¿ØK∫&á5íÓwÛÃ$aè"±‚–4€HV“ﬁ<(pÏÏŸ<tÙ¶≠–ñ2”V÷ö\'éﬂUõ‰ÀåÓ∂J˜¸kºˇ' . "\0" . 'ââ?lKïdA‘<c)ë–q◊ÎöÂoçΩéå˜†$Æ•Dò9f∆ÆHÆ°-ƒª:â%˚2˘Ñírÿ?ùhÛ_¯ñKKuYµãªçI§b–UHó8' . "\0" . 'Äºü“∏3™kS›ô£w=\\îESÄ3‘V5' . "\0" . 'ó"∫ﬁáâ-ÉÎ]’éï¢œ§¡¬6‘9r9=zSâß¸BõÏ—⁄»å®ü.‚°ø^øïz?ÜØ“ˆ‘]Gtc,∏$ÚûÃ2¡˜√^h˙•ª√«˝–yœ„W<$¬_(üÙpp™TúÛEÇÊ∆¶#}AÙœ;¿¡§ùvå.Ï(lgû¿t´˙F£o⁄‡äEF39ñ&áoøò¸´^“∆ª˘gô' . "\0" . 'FÖ∞p7‰ûGr+SS≠ïÌ‰zíI‰\\HŸìåá8˙t©rC±zÀõ([éWµOHë,(#Nz
wzÇÖ¢ä)ñ§”¿ŒFj1ıßä†+‹i±^_Y‹H2a|˛Üµ.ò-™∞9¿⁄j£n(v0Z≠∂H¨"gï›úí‰û¶Ä\'kau
BÀ’å‡˝*´M∏[Iôc∫∆BúÄ«’Oz–±e#iÅÕ_{h.†1OK(Í¿—p±Œ‹Ÿñ\\RGQ“©ù	d[ô∞Éí⁄' . "\0" . '˜Æët»mc	ÄFl{rz{tFM2⁄K°$ªÂ ‰$í3*ë‹)8‹
wóH∑‘!Ú¡µãûGC€ÎVµßÚ≠d(01Zq¸ëÑPG8ı5OV∂Û qúÄ:Ræ°m:XkÈ%éêªÓpG$˝kØ∞≥≤˚<Jè‰HAƒNpxÙ™ûZ&´"#lQëÅÎR√wjoÕµ‚FÍ‹√?ùj»-=Ñ{ÂÿYÄ
>§‘∂Í…ÊZÆPõrˆ◊◊¸ı≠’µ¥⁄æLQ¶(!@„”ÈV"∏∞CÂÕnõõ¯∆Fjn;4´ö&∂g1‡±-…\'úìÔ⁄¶O¿˙ù∂ë du*Yª 0ë˘,-˛ÃÎ>\\œñ‰Û”?“≤Fío≈t u∑1£¥ÑpYF1ı‡R–gmúí(†Á<—PPQIä(ö:sOò:S˙ö`=s∏ﬂÉÓ*≤i‡+gû’0Ïj+…‚1ëÊ+éÙ' . "\0" . '¯$
πu´IyÚsY—`ƒHÎé›ÈÈ1ÜÓqEÄöÔQÿß,¥∂»^ÿJsæAïœÈM±—÷`∑WeôæÚGÿzf∂å
P(¸)7aÿ‡n5ØE©…v0¥∑F$1†Ù®ıOÕ≥õXÆ@\'\'Æı≠#/ÄÉß&π´ﬂi˜∑AeVÀ‰„wl˙U)"Zgä‹Î∫§◊ém„3ddM\\OÌ	í9fç£r2IÔŒ+Ÿ-¸•€<ÅmîÇ>VnH#ˇ' . "\0" . '◊Q…†[ã+Àƒ|‰z‹Us°r≥è”µ)‹C);‘üÔ’Ó•êŸ¸+gU“c€ÉÂñàsﬂ<C\\f¥è»™Ÿ(Hlu™Bgs·MPj≠o!;„<zûkWA’døk∏Pò§r9x„Ù˛UÊûΩí◊V∂‰ÌîÌ?ùzááÙ©4ÀY¸‚<Ÿ•g¿9¬Áé}j$¨4Óiì\'∂)ì9ÌÈR—PP‹J)‘P`ıÌOœCR)‚òS‘v™óñÃÏ≤©Wí1ﬁ≠®ÊúT2≤Û»≈' . "\0" . 'g€±\'' . "\0" . '˜ÏjÏ' . "\0" . '4çMcá6˜û0q»≠$ìÀeêrõø$Åjˆ#÷ú,û¿„¨ã˝O»ç§ ç£Ôë\\Œ°¨j∑∞±”b√≤ï‹‡å{ı¸©(‹mùî⁄¢GuÂ0 ≤ıâ{‚K[}D3©2∆∏∆:ÁØ÷π[Ø[∞{ãE∏Ö# bé‘Êõs©‹¥÷MÉ\'õûi:q◊å‰U(ÿ\\«|û ≥xL¢U?>¬	∆ÆwUÒçúVÓ»Í¿	‰nÆUóZ∏R"∞µé1)ê‰∑å~xÆR}SñÂ§ñrÄ±eç~Ë>ÇöäëÍ—Î–_yqGRz∞Î˘
„|A3,“1Î/ÕÅÎö£ß¡nd
[?·SÍ2≈q‰∆»¨‡ñﬁ3ªá∑z§âl±·´gªÒônß\'pf«†‰◊∂b∏_áöïÎ.$îÑg¯{öÓ∫÷swe≈Y§†—R0¢óèJ)í4Ò≈0S◊≠P-HΩG•F94‚¡A$(çÂØöYáM±˘’°s»„öπÅ„ﬂ¡à?N’∞ﬂÃN¶ù¿µ∫NÜ)î?*ùl·Ä' . "\0" . 'àµ2ÇU¡Î‘{’AÌ”öñ2#*F' . "\0" . 'V5€∆7I∞dúd
€ñ›dCú„æcO•¨ÆŸrq¯SBf5‚!RXè¬π…-ÖÕ÷x¶ª6“‘+F]±◊ä£wmmhç¥s‹ûıií—Œ›@ñ∂Nˇ' . "\0" . 'Ú—øë¨mImkZé€¢ô˚´û†≠r¸≤à◊©ÎèJË|bñ—¨Ä~ˆsñ\'˚†d~∏¶›êñÁgkkç§VñÍV(‘*jó•¢≤,L—÷åQä' . "\0" . '1E-Ä»\\˛ï"Á
	\'“ûñecÃ‰ÇÖz÷ûñcfdE¥d˜\'5MÇ3^&Ä3	ë¸Gõq3Ã†tåÙøZÏ/¥˚{¯∂Ã£#Ó∏Íß⁄πõõ)-Óå2Ä>FÎ∏ç	ÉC†!BÒÚ0¡œ≠N¿' . "\0" . 'PûúÊ°àyjQ«N‘Á=è ~ÎzP9§kg‹ú©9#ØÂZV∑È$kö»∫,´3‘zW?=˝Œü)ÿrÑUÆ+ÿÔ˛÷§êxZ¶˜cŒ„oZ‚€≈måÕﬁŸÌT[≈Í∑‰/ö9CòÓÆnbå3ºÉö‰uÌPe\\c<W;}‚ÊöB#å099¨iıÆ¶.Á<‚©+Ÿye˚U€8Á‹◊£¯.3$rÃ«Ñ9ˇ' . "\0" . 'ıWó€I∑öıœ@a–ë»8ëâŒ:‚âl‹ËΩ&i(¨ãäL—@ö)¥Rï<˛l≤"Ó‹‡˙RZ^…¬O¿`1¥˜Üj)	¿1/l£/^I™Á, UÆzƒq¯u´±\'{ã4K"Ùaöe≈¥w1Ï~›q\\æô™æû∆)0Ò–WÈÎ]dn≤∆≤#eXdÕ´2”πÉqhbfB9Ïq÷´nU±ÔöÈfâ&R¨>Ñu¨õ´GÑÚ/f¶òö1•ÉÃ]ù@Ë;ä»π”UúÄŸıÎ}◊hÁÊÁä©4k7PUª2úVòö9◊–RHùP˝·‹W·ΩQdênUM«Î‡nWoˆ∏«¯÷n≥$QBK„wqÈTô-H∫|êπY[$w≈!èn’£©KÊÃÂ=s“≥J;' . "\0" . 'π¿ùMYõg2]G∆k‘n^„√⁄$ÂúŒÈ
¨w6ls†∞á˜X{uØ>Âüü™«¿#9Ø_≥±éˇ' . "\0" . 'M{;êL(ﬁa˜¡»ò®ôq/¿Ò›€$Ò®lzgµ*≈XsT-XCg!∏ÚˆÁ⁄¥¨Ÿo4€i[Ç—©Œ}´=ã#≈,ê2TÓ_QPè≠ üZ)8ı¢òåi2ÌR∏«9„ç2h¡;◊ú|ß¶:}j‹|¶H€9Í1Ä}*ƒs,@¥lX∞∆7Uà§Í∆6d`XúÏœ9ı≠k^M?ÃR„!	«_J¢Í&cÛ∑ò@…
xˇ' . "\0" . '"â(0óyÁmÅ⁄⁄]≈y…û£<äú®aÇ2=1^{˜Ã>Õ)I' . "\0" . 'ŒXëı–Z¯û!≤;∏ù\\\\f‡˙§iO¶+íQ±Ïk.‚…„?ºCÄ~˜jﬂÜxß@Ò:∏#?)Õ<Û«cI;«-ˆ`‡ì\\èàÆ&√G…Î¸Ω2ki2Jl\'∫ÒXóﬁ3Ó1]ëüÔä∏…—„/k1rYzér1KˆRò9ÁúuØKì¿“≥ˆ®=æSPè≤ ∑ëÑŒ~E9≠9—¨≈éíÚMΩ#-!∆:W¢›ºz^ñ∂€≥$§Æs‘ûI§±éœKµ⁄«µBÄÃyf¿ÔX:ÆßÁ‹æﬁV0‰q˘˙‘_ôó≤Í≈j≈‰ä…9‡Vîwm•ÈPï#U\'˝æïÉlÚu>b™∆AR›≥]-Ω¨€H™bê}–z{PÏ$f…‚§K+™õ‘…˜Xc¸è¬§Ôà≠ºIÖQÒ˝·ûµœx´B[k·’•µ£êÁ%OQö‚º7¨djÒ‹ç€ZL?œåä|©≠Ì=Or˚0ˇ' . "\0" . 'û¢äÕˇ' . "\0" . 'ÑøM˛ˇ' . "\0" . 'æ®®Âc∫2tıÈÔ$És¡œ¯T∂ëFne%rqﬁä*ƒ%úœ$ÓÉÜ8˘GjdÁÃiÚqEÄß3çéT+})ˆ‰»∏s∏' . "\0" . '04QL„∫û÷Fh%d*º`◊ßJÛiI#nv@Iı¢äâé$≠Pö(©(è÷™\\“ä)âúÌ¸“,W;\\ç™∏«nkî,…sr™ƒ/ñßıŒh¢∂â,”“‰êêÜG⁄a‹F„åÊ∫ÎªwbI¸ÖTHK∆q´h≤í†ï^?*ÒhpÕñ' . "\0" . 'ú˙QET6&[ù>•QV#ˇŸ',
      ),
    ),
  ),
  'field_profile_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Esser',
        'format' => NULL,
        'safe_value' => 'Esser',
      ),
    ),
  ),
  'field_profile_phone' => array(
    'und' => array(
      0 => array(
        'value' => '+49-621-181-2818',
        'format' => NULL,
        'safe_value' => '+49-621-181-2818',
      ),
    ),
  ),
  'field_profile_postal_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails PartyType="Organisation"><NameLine>Universit&#xE4;t Mannheim - MZES</NameLine></NameDetails>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => 'Universit√§t Mannheim - MZES',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68131',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => '',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_research' => array(
    'und' => array(
      0 => array(
        'value' => '- Erwerb von sprachlichen und kulturellen Kompetenzen von Migrantenkindern in der Vorschulzeit und der √úbergang in die Grundschule
- Wohnungssuche und Wohnortwahlen
- Ethnische Bildungsungleichheiten
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>- Erwerb von sprachlichen und kulturellen Kompetenzen von Migrantenkindern in der Vorschulzeit und der √úbergang in die Grundschule<br />
- Wohnungssuche und Wohnortwahlen<br />
- Ethnische Bildungsungleichheiten</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_research_interests' => array(
    'und' => array(
      0 => array(
        'value' => 'Probleme der Theoriebildung in den Sozialwissenschaften',
        'format' => NULL,
        'safe_value' => 'Probleme der Theoriebildung in den Sozialwissenschaften',
      ),
      1 => array(
        'value' => 'Familien-Soziologie',
        'format' => NULL,
        'safe_value' => 'Familien-Soziologie',
      ),
      2 => array(
        'value' => 'Migration, interethnische Beziehungen, ethnische Konflikte',
        'format' => NULL,
        'safe_value' => 'Migration, interethnische Beziehungen, ethnische Konflikte',
      ),
      3 => array(
        'value' => 'Soziologische Handlungstheorien',
        'format' => NULL,
        'safe_value' => 'Soziologische Handlungstheorien',
      ),
    ),
  ),
  'field_profile_titles' => array(
    'und' => array(
      0 => array(
        'value' => 'Prof. Dr.',
        'format' => NULL,
        'safe_value' => 'Prof. Dr.',
      ),
    ),
  ),
  'field_profile_visitor_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails/>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => '',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68159',
        'thoroughfare' => '',
        'premise' => 'A5, 6 (Geb√§udeteil A)',
        'sub_premise' => 'Raum: 320',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_staff' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_staff_status' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_title_job' => array(
    'und' => array(
      0 => array(
        'value' => 'Projektleiter',
        'format' => NULL,
        'safe_value' => 'Projektleiter',
      ),
    ),
  ),
  'field_profile_urls' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www2.sowi.uni-mannheim.de/lssw/?page_id=52',
        'title' => 'Homepage Lehrstuhl',
        'attributes' => array(),
      ),
    ),
  ),
  'field_profile_gender' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_internal_email' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_staff_external' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_staff_position' => array(
    'und' => array(
      0 => array(
        'value' => '2',
      ),
    ),
  ),
  'field_profile_titles_rendering' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
$content['test_profile_oklein'] = (object)array(
  'exported_path' => 'profile/oliver-klein',
  'title' => 'Oliver Klein',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'profile',
  'language' => 'und',
  'created' => '1306164073',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'test_profile_oklein',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Description goes here.',
        'summary' => 'Summary of description goes here.',
        'format' => 'filtered_html',
        'safe_value' => '<p>Description goes here.</p>
',
        'safe_summary' => '<p>Summary of description goes here.</p>
',
      ),
    ),
  ),
  'field_profile_biography' => array(
    'und' => array(
      0 => array(
        'value' => 'Bio goes here',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Bio goes here</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_cv' => array(
    'und' => array(
      0 => array(
        'value' => 'CV goes here.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>CV goes here.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_email' => array(
    'und' => array(
      0 => array(
        'email' => 'Oliver.Klein@mzes.uni-mannheim.de',
      ),
    ),
  ),
  'field_profile_fax' => array(
    'und' => array(
      0 => array(
        'value' => '+49-621-181-2803 ',
        'format' => NULL,
        'safe_value' => '+49-621-181-2803 ',
      ),
    ),
  ),
  'field_profile_first_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Oliver',
        'format' => NULL,
        'safe_value' => 'Oliver',
      ),
    ),
  ),
  'field_profile_image' => array(
    'und' => array(
      0 => array(
        'alt' => '',
        'title' => '',
        'filename' => 'oklein.jpg',
        'uri' => 'public://oklein.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '26866',
        'status' => '1',
        'type' => 'image',
        'rdf_mapping' => array(),
        'image' => 'ˇÿˇ‡' . "\0" . 'JFIF' . "\0" . '' . "\0" . 'H' . "\0" . 'H' . "\0" . '' . "\0" . 'ˇ·#êExif' . "\0" . '' . "\0" . 'MM' . "\0" . '*' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '™' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '∞' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ø' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '«(' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'œ2' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Î' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'úù' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Í' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇái' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	à%' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Canon' . "\0" . 'Canon EOS 500D' . "\0" . '' . "\0" . '
¸Ä' . "\0" . '' . "\0" . '\'' . "\0" . '
¸Ä' . "\0" . '' . "\0" . '\'Adobe Photoshop CS3 Windows' . "\0" . '2011:05:09 12:17:36' . "\0" . 'Í' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Çö' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
ÜÇù' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
éà"' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'à\'' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'd' . "\0" . '' . "\0" . 'ê' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '0221ê' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
ñê' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
™ë' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'í' . "\0" . '
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
æí' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
∆í' . "\0" . '
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
Œí' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'í	' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'í
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
÷íÜ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
ﬁíê' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '37' . "\0" . '' . "\0" . 'íë' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '37' . "\0" . '' . "\0" . 'íí' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '37' . "\0" . '' . "\0" . '†' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '0100†' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '†' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ë†' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'æ¢' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Ê¢' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Ó¢' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '§' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '§' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '§' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '§' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Í' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˆÍ' . "\0" . '	' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '<' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'd' . "\0" . '' . "\0" . '' . "\0" . '8' . "\0" . '' . "\0" . '' . "\0" . '
2011:05:04 15:58:11' . "\0" . '2011:05:04 15:58:11' . "\0" . '' . "\0" . '†' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'F' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '0W' . "\0" . '' . "\0" . '' . "\0" . 'Q' . "\0" . 'HÇÄ' . "\0" . '' . "\0" . '~Í' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'f' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'n(' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'v' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . '' . "\0" . '' . "\0" . 'ˇÿˇ‡' . "\0" . 'JFIF' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . 'H' . "\0" . '' . "\0" . 'ˇÌ' . "\0" . 'Adobe_CM' . "\0" . 'ˇÓ' . "\0" . 'Adobe' . "\0" . 'dÄ' . "\0" . '' . "\0" . '' . "\0" . 'ˇ€' . "\0" . 'Ñ' . "\0" . '			
ˇ¿' . "\0" . '' . "\0" . '†' . "\0" . 'z"' . "\0" . 'ˇ›' . "\0" . '' . "\0" . 'ˇƒ?' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '3' . "\0" . '!1AQa"qÅ2ë°±B#$R¡b34rÇ—C%íS·Òcs5¢≤É&DìTdE¬£t6“U‚eÚ≥Ñ√”u„ÛF\'î§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ7GWgwáóß∑«◊Á˜' . "\0" . '5' . "\0" . '!1AQaq"2Åë°±B#¡R—3$b·rÇíCScs4Ò%¢≤É&5¬“DìT£dEU6te‚Ú≥Ñ√”u„ÛFî§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ\'7GWgwáóß∑«ˇ⁄' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . 'ÙƒíI9jíI#' . "\0" . 'L' . "\0" . '$ì†' . "\0" . 'wIK§π.≠˛1:^+›OOaÃ{L¯¶Gjœ“ª˙ÃXŒˇ' . "\0" . ']IÆ]EŒ‚®ˇ' . "\0" . 'øsS∏J8ÉË›“^}W¯ÃŒ”~-lâ2ˆ4<Ô›˛b‘≈ˇ' . "\0" . ')Ô€ùçv	Åx˝-=õmˇ' . "\0" . '¿“·*‚ZùãË…°ôˆ6Í-´±Ñ9Æª\\W):I$•\'I$î§íNíüˇ–ÙƒíI9j§' . "\0" . 'Kàk@ó`' . "\0" . '9.+Ã>ª˝vª®Xz_M∞’Å$[ct}ÒÙø‚Ò?Û˙◊ˇ' . "\0" . '?Z;z>3«≠{wem:µá˘™å}[Èø˛˛1ys¨>˚Ï;ã˝≠ıI¿uZOF¡»,árÁZ;5£ËüÎπ¶∑4Ωåi¥Ík& ~sÑürÃ¨∫«8…&4‡2¿˚ª†ÜàN¥S¢_SK}B¬‡=£ò\'Èm≠ëˇ' . "\0" . 'V¨}ÆªÒ-ÿ·&±=€˘Ìo—ˆ˛{N÷2ævÃóˇ' . "\0" . '˘ìûçY€~9,ÅX2√‡`πß˘_ºç¢ù~Ö÷∫óJ ‡‰∫ÜZïk%–Á÷˙_˙/säÙ™ü]1˙Îæ…í∆‚ı&5É,≥o”uΩﬁﬂŒ•˛ıÂ@WèëW§}J[ y∑íœÛlG≈»≥6ºñ<áá2¡ŒÊ˚õc·œ˝ªZêH}Ÿ%_ßÁQüáV]eçë§˜7ÛUÖ"È$íJRZ\'KDîˇ' . "\0" . 'ˇ—Ù≈[©u
znŸ◊j⁄Z\\˚«ÛX¨Æ7¸gÊ?¢’[Nô∏%çıèˆÕ…‡YZv|ø;"˛£î¸Ã´=KÚ,}óXO.\'n÷‰µª*o˙5BÀ=[ p=≠ÄEµØ™ıˆâyÒs˝Ój®˜' . "\0" . '\\G' . "\0" . '¿˛Ù‚¥\'6∏Ä∆h!9∞≤ûO“¥ˇ' . "\0" . 'ﬂZ´í@˜k:¬5.684|\\vè$≠Tí∑3|9q÷¸Á-
ôπ‡9Ü!Ä˝)¯)œ‹ıo•}XÍy.´—˙^£åÅjÍ1>ØÙÓïS≤2ûrr;ü—§˚Q/ìKùéÔP≈åxÜé' . "\0" . '-h’3û”Elc°√⁄A‡ÍÔM”˚ÕZô∆æ©gßáΩ•ƒó3”$ùés·€v™6`e„~e™CÄÌo?G‘¸‘P˜‚˜´8a9–◊√}2~ã„{vˇ' . "\0" . '"œzÙ®”‰ºSÍ˛c∞Û©∂c“oÚáOˆW∂D;Nâì_$íI´óI$íSˇ“Ùµ¬ˇ' . "\0" . 'ç7µıÙÃ_Œ{≠∞ˇ' . "\0" . 'T0ˇ' . "\0" . '’.Èy˜¯”w•ë“Ó1ÓV—Ò5πŒ˛Æ÷©#∫…l˘Ω≤Ÿs∏væd¨ÒÙÃÒ+W05µùﬁ‚d4›«ù\\aëû »–∏›5F}:äﬂqª!°Ï0òÒ˘ä›ƒØ9∑7T¸vÓ∞ö∆ëßÛm≥÷ˇ' . "\0" . '¿ïÏ~çX;Í≠≤“`#_§Â°F5µ÷Fåù£S˝ß\'KI∂ßBÀ±óågç0X[¡˜WY’1›N\'©KMí›ŒùLˆ⁄ﬂŒrÊCõî◊I6\\y—vÌÆºåv±‚ZˆÄG˚R*Å‘s~ﬂˆW·X`ãM¶±n0Êµ‘≥k5ˇ' . "\0" . 'ˆ‚‘Î5≥+Í÷n@©·’Rm\\›∂Lã,›öˇ' . "\0" . '—µ˚Ô≠i’—Ω7c‹Ì§Í«â?Á«+∑b∞Æ°˙˙’æ≤¨“œ˚Ú§ ∫kay≠“€™-÷v›≤Ì´›jüIìŒ÷œ‹Å}\\süu-s°ç‰¿˚ÛÇ˜NëíÏÆüMØ2˝°Ø>cD%∞)éÂ∏íA$≈ÍI$íSˇ”ÙµÂˇ' . "\0" . '„:ÁŸ◊h√i≈«äA‘íÛ6>?wÛ?ÎK”«˚◊ã}wœª;Æ‰‰π±XÜPv6Y[øË©"≤O9ôatøYà`¯˛zµıfê˛§›”µç.r°cŒﬂw“¸Ôñã_Í£€gP5~w§Ë>!Û Ïˆî8V¿O\'R<äÜ~_£CüXó∆çÛUAπœÙY£ùsò{5¢ÍUl´YQåÇ)ÀtìŸ=bˇ' . "\0" . 'µ)™÷Ïc‹‚∏çıóUÉ÷¨}
ÒlΩØ0ÔLgmÓﬁˆ{™π<kpEçs√‹Ám ~!u∏9òï’ÏeŒ¨¡ñ∞üûç@§6≠Œ8Ÿ-eÇ+≥Ëœc˚´Júä‹‡Œ\\`Å‰VGVË˘v?Vª.<RÛ≤¡ü∞ç ˝,´‘‰9ƒWK_c§Ë÷5ª¨˛«∑zõ|ßÏ£-Ïa÷€Ï≠Ñ~h.{w7˛•{áB§—“Òÿ·˜Ì™æáàr:ˆ-Å’åßö©!‰⁄ÕÉ˜_Ój˜Ïkvi‘|uMñ…à’2t…&ØRI%))ˇ‘Ùí$A‡Æ¸b}Zª\'#;
∞Êò¢÷ÙH%‘ºÌˇ' . "\0" . 'Ô˜ÆˆS:-pñùOñoœ˝[ÍÔYÈòÏ»Œ≈},µÂ¨q{YÍ›˛á[«:Åaun˛–è˙•Ï]©∑/£?ÌvYª£mQØØÔMüôÔ^Pﬂ´›K6ó›Cö÷ÿ›÷4Óh–~ì˘I’±Ωzù˚/sèÁﬂ⁄kìuL,>•K]kx2ÀG“iCc¡wºCª¸QÍ∞üc¸¯=ì÷\'ËŸN≈mxÔ∆nCË€Óp⁄˝„Ùo˙£?æ∫å™Î©.n§MÑÌµÏˆÃ<Ì˙üùÙk\\ò∆ m¡ÖÅ‰v:=¬‹È˘ç|∫∂÷~ÁÒ@ÑÇ[#§bVÁ‰öôˆª‹,æ˝æ„œ‰÷œ‹K®±πV‚ÿÔMπm8¿éK^¨˝zÉ´ˇ' . "\0" . 'Æ+ˆmm`øæß˛˚˛rñ.8 :˝*≤ﬂn÷◊vﬂÌ2ƒ€]M¨.Ö“±û◊UãSm•≠evm·†4lﬁÔvﬂ—µiÄ&{¶' . "\0" . '8L%pdídÈ%I$íJˇ’ÙrCZ^‚¡Àú`Ìj¿Íü^˛¨t€æœnA ¥	s1[Îë˘Ø∞’ΩﬂªΩy7V˙—’∫≥À≥≤_p<VLV<õS}ã*Ãã"N—˘£@§†≤ÀÈ_¸h`YSõÉÅpq˙6‰=å◊˘T3◊ﬁﬂ‰zãáÍ?Y˙ØZŒ«v]±K-gßèX≠æÊ˛c' . "\0" . 'ﬂ«Á¨óÌJjÃX«x9ßÒJ’OyyÁ¬J	πÌiÉ ˆÓCıÏPS∑jt?≈H∆Èt˛∏”cYy⁄' . "\0" . 'ÇË1˙Ó3^‡\\6ë°ê∏ÍzW⁄.hst=˚«ú.ü†Ùj∏[mcsO¥ùcœTäGÉ∑å_êˆ‹Ò' . "\0" . '}ë?ï¸•¡uŒΩóÉ÷:ûF-◊Qe∂W∫óAˆ{€*w≤Íû÷~zÙÄ–' . "\0" . '^Sı˙°G÷£=oJﬂôg“¸µ’≥“ÙüÒ•‘Mm9îWñ¬Ÿ¢¥∆üõæ≠ﬂÿ]ON˙ˇ' . "\0" . 'ıg:ÏÉâcÄÜﬁÿˆÌ{Íˇ' . "\0" . '§º_≈ïU‰&>%IŒ' . "\0" . 'ê<„‡Ö´!˙ãË…`≥÷_Y¸˙‹?Ë¢/û1Ú≤1›Íc⁄˙^5≠Œa”Õ§.ß£å/¨8d2Î∆mcÛrF„Úπªmˇ' . "\0" . ';‘Cá≤xü^Ir˝ÎÔNÍŸU‡›KÚ≠“πp}NtN∆€ÌvÁ~f˙◊O™\'dÿ›ˇ÷ÛÖ Jp$)X–ˆC#êè¬Öçë∏r)]—≥ôå«œº{l˘%•n4≥p∏Nü‘.¿º]T8,¨··ˇ' . "\0" . 'ë]ˇ' . "\0" . 'CÍ˝;™T+©·∑«ª˙?˚?Èˇ' . "\0" . 'üZ”cÉeµXﬁA]n%˛´Êç≥ÚX5bÌ¥Ä8<-¨)' . "\0" . 'ë@tÿÔo¡yü¯Œ`=v∂7ÈYèHw»⁄?ÍW†›õèâI∂◊Üµ∫ÍWó}dÍåÍ›]˘uÍ–—]d¯	‘ZSiuπS¥K~‰ë%ˆCxÒCsÂ–;hà»héÁ∫(f‚∑ÀTÏv∫rÉ∏…¯©AIMÏLó≥%õ\\An†éA‡·˝U‹ˇ' . "\0" . '„á‘¸k˛è≥èü˜+˛3˛˘µÁòœ˝`ø≥A?pMˆáxˆî≠Oˇ◊Ûßˆp·¡*ù&A›é$(‘Ôt©X“ë˙D0FÚ”Æ®ŒÊît∂BEAÉŸµﬁI6Ar5Ñg' . "\0" . 'ˆ‹†∑GB	uq>±ı¨xÂπ¿v∂¯øﬂˇ' . "\0" . 'I\\ˇ' . "\0" . 'ûøX—∫∂˘Ü	¸J√p{x;‚√¡j6QAΩô÷:ßQ1ôí˚Z?0@o˘≠ÑK#ì¬Í\'∫~‰î∆∞¿¢8…”Ä°Gwx$\\wJJP‘§ÁF≤ê‡ËÑÁ@ÓRRfùµXÓ˚O‚°?≠1CæÚÑ=ß˛åˇ' . "\0" . '±%?ˇ–ÛZèËH˘˛)™ÊTbøäï_F|”˚-Ó⁄@=Â%æÈD≠…d7Ó)›çÿc∫F”Q∂≤àm;]‡¨◊Ñ7	:©∞kî›_Üì¬	n◊H—X	D ∞kH‰Ëô2ú•))ì}¨î2|;)∏Ä¿>HdàILã°ìÊÇ”6Ä¶Á~èÊáQõB		≠v‡Êˇ' . "\0" . 'VŒ>©ˇ' . "\0" . 'ß)ÀÂÔ¯ˇ' . "\0" . '√ÒJ’OˇŸˇÌ˛Photoshop 3.0' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'm' . "\0" . '8BIM%' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˆ¯ûÒi(õDò¢tÇ˝roÑ8BIMÌ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM&' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '?Ä' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIMÛ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM\'' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIMı' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . '/ff' . "\0" . '' . "\0" . 'lff' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '/ff' . "\0" . '' . "\0" . '°ôö' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '2' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Z' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '5' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '-' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM¯' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'p' . "\0" . '' . "\0" . 'ˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇË' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇË' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇË' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇˇË' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '@' . "\0" . '' . "\0" . '@' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'M' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'æ' . "\0" . '' . "\0" . '' . "\0" . 'ë' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'O' . "\0" . 'l' . "\0" . 'i' . "\0" . 'v' . "\0" . 'e' . "\0" . 'r' . "\0" . ' ' . "\0" . 'K' . "\0" . 'l' . "\0" . 'e' . "\0" . 'i' . "\0" . 'n' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ë' . "\0" . '' . "\0" . '' . "\0" . 'æ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'null' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'boundsObjc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Rct1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Top long' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Leftlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Btomlong' . "\0" . '' . "\0" . '' . "\0" . 'æ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Rghtlong' . "\0" . '' . "\0" . '' . "\0" . 'ë' . "\0" . '' . "\0" . '' . "\0" . 'slicesVlLs' . "\0" . '' . "\0" . '' . "\0" . 'Objc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'slice' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'sliceIDlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'groupIDlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'originenum' . "\0" . '' . "\0" . '' . "\0" . 'ESliceOrigin' . "\0" . '' . "\0" . '' . "\0" . 'autoGenerated' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Typeenum' . "\0" . '' . "\0" . '' . "\0" . '
ESliceType' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Img ' . "\0" . '' . "\0" . '' . "\0" . 'boundsObjc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Rct1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Top long' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Leftlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Btomlong' . "\0" . '' . "\0" . '' . "\0" . 'æ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Rghtlong' . "\0" . '' . "\0" . '' . "\0" . 'ë' . "\0" . '' . "\0" . '' . "\0" . 'urlTEXT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'nullTEXT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'MsgeTEXT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'altTagTEXT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'cellTextIsHTMLbool' . "\0" . '' . "\0" . '' . "\0" . 'cellTextTEXT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	horzAlignenum' . "\0" . '' . "\0" . '' . "\0" . 'ESliceHorzAlign' . "\0" . '' . "\0" . '' . "\0" . 'default' . "\0" . '' . "\0" . '' . "\0" . '	vertAlignenum' . "\0" . '' . "\0" . '' . "\0" . 'ESliceVertAlign' . "\0" . '' . "\0" . '' . "\0" . 'default' . "\0" . '' . "\0" . '' . "\0" . 'bgColorTypeenum' . "\0" . '' . "\0" . '' . "\0" . 'ESliceBGColorType' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'None' . "\0" . '' . "\0" . '' . "\0" . '	topOutsetlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
leftOutsetlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'bottomOutsetlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'rightOutsetlong' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM(' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '.' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'z' . "\0" . '' . "\0" . '' . "\0" . '†' . "\0" . '' . "\0" . 'p' . "\0" . '' . "\0" . 'Ê' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇÿˇ‡' . "\0" . 'JFIF' . "\0" . '' . "\0" . '' . "\0" . 'H' . "\0" . 'H' . "\0" . '' . "\0" . 'ˇÌ' . "\0" . 'Adobe_CM' . "\0" . 'ˇÓ' . "\0" . 'Adobe' . "\0" . 'dÄ' . "\0" . '' . "\0" . '' . "\0" . 'ˇ€' . "\0" . 'Ñ' . "\0" . '			
ˇ¿' . "\0" . '' . "\0" . '†' . "\0" . 'z"' . "\0" . 'ˇ›' . "\0" . '' . "\0" . 'ˇƒ?' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '3' . "\0" . '!1AQa"qÅ2ë°±B#$R¡b34rÇ—C%íS·Òcs5¢≤É&DìTdE¬£t6“U‚eÚ≥Ñ√”u„ÛF\'î§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ7GWgwáóß∑«◊Á˜' . "\0" . '5' . "\0" . '!1AQaq"2Åë°±B#¡R—3$b·rÇíCScs4Ò%¢≤É&5¬“DìT£dEU6te‚Ú≥Ñ√”u„ÛFî§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ\'7GWgwáóß∑«ˇ⁄' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . 'ÙƒíI9jíI#' . "\0" . 'L' . "\0" . '$ì†' . "\0" . 'wIK§π.≠˛1:^+›OOaÃ{L¯¶Gjœ“ª˙ÃXŒˇ' . "\0" . ']IÆ]EŒ‚®ˇ' . "\0" . 'øsS∏J8ÉË›“^}W¯ÃŒ”~-lâ2ˆ4<Ô›˛b‘≈ˇ' . "\0" . ')Ô€ùçv	Åx˝-=õmˇ' . "\0" . '¿“·*‚ZùãË…°ôˆ6Í-´±Ñ9Æª\\W):I$•\'I$î§íNíüˇ–ÙƒíI9j§' . "\0" . 'Kàk@ó`' . "\0" . '9.+Ã>ª˝vª®Xz_M∞’Å$[ct}ÒÙø‚Ò?Û˙◊ˇ' . "\0" . '?Z;z>3«≠{wem:µá˘™å}[Èø˛˛1ys¨>˚Ï;ã˝≠ıI¿uZOF¡»,árÁZ;5£ËüÎπ¶∑4Ωåi¥Ík& ~sÑürÃ¨∫«8…&4‡2¿˚ª†ÜàN¥S¢_SK}B¬‡=£ò\'Èm≠ëˇ' . "\0" . 'V¨}ÆªÒ-ÿ·&±=€˘Ìo—ˆ˛{N÷2ævÃóˇ' . "\0" . '˘ìûçY€~9,ÅX2√‡`πß˘_ºç¢ù~Ö÷∫óJ ‡‰∫ÜZïk%–Á÷˙_˙/säÙ™ü]1˙Îæ…í∆‚ı&5É,≥o”uΩﬁﬂŒ•˛ıÂ@WèëW§}J[ y∑íœÛlG≈»≥6ºñ<áá2¡ŒÊ˚õc·œ˝ªZêH}Ÿ%_ßÁQüáV]eçë§˜7ÛUÖ"È$íJRZ\'KDîˇ' . "\0" . 'ˇ—Ù≈[©u
znŸ◊j⁄Z\\˚«ÛX¨Æ7¸gÊ?¢’[Nô∏%çıèˆÕ…‡YZv|ø;"˛£î¸Ã´=KÚ,}óXO.\'n÷‰µª*o˙5BÀ=[ p=≠ÄEµØ™ıˆâyÒs˝Ój®˜' . "\0" . '\\G' . "\0" . '¿˛Ù‚¥\'6∏Ä∆h!9∞≤ûO“¥ˇ' . "\0" . 'ﬂZ´í@˜k:¬5.684|\\vè$≠Tí∑3|9q÷¸Á-
ôπ‡9Ü!Ä˝)¯)œ‹ıo•}XÍy.´—˙^£åÅjÍ1>ØÙÓïS≤2ûrr;ü—§˚Q/ìKùéÔP≈åxÜé' . "\0" . '-h’3û”Elc°√⁄A‡ÍÔM”˚ÕZô∆æ©gßáΩ•ƒó3”$ùés·€v™6`e„~e™CÄÌo?G‘¸‘P˜‚˜´8a9–◊√}2~ã„{vˇ' . "\0" . '"œzÙ®”‰ºSÍ˛c∞Û©∂c“oÚáOˆW∂D;Nâì_$íI´óI$íSˇ“Ùµ¬ˇ' . "\0" . 'ç7µıÙÃ_Œ{≠∞ˇ' . "\0" . 'T0ˇ' . "\0" . '’.Èy˜¯”w•ë“Ó1ÓV—Ò5πŒ˛Æ÷©#∫…l˘Ω≤Ÿs∏væd¨ÒÙÃÒ+W05µùﬁ‚d4›«ù\\aëû »–∏›5F}:äﬂqª!°Ï0òÒ˘ä›ƒØ9∑7T¸vÓ∞ö∆ëßÛm≥÷ˇ' . "\0" . '¿ïÏ~çX;Í≠≤“`#_§Â°F5µ÷Fåù£S˝ß\'KI∂ßBÀ±óågç0X[¡˜WY’1›N\'©KMí›ŒùLˆ⁄ﬂŒrÊCõî◊I6\\y—vÌÆºåv±‚ZˆÄG˚R*Å‘s~ﬂˆW·X`ãM¶±n0Êµ‘≥k5ˇ' . "\0" . 'ˆ‚‘Î5≥+Í÷n@©·’Rm\\›∂Lã,›öˇ' . "\0" . '—µ˚Ô≠i’—Ω7c‹Ì§Í«â?Á«+∑b∞Æ°˙˙’æ≤¨“œ˚Ú§ ∫kay≠“€™-÷v›≤Ì´›jüIìŒ÷œ‹Å}\\süu-s°ç‰¿˚ÛÇ˜NëíÏÆüMØ2˝°Ø>cD%∞)éÂ∏íA$≈ÍI$íSˇ”ÙµÂˇ' . "\0" . '„:ÁŸ◊h√i≈«äA‘íÛ6>?wÛ?ÎK”«˚◊ã}wœª;Æ‰‰π±XÜPv6Y[øË©"≤O9ôatøYà`¯˛zµıfê˛§›”µç.r°cŒﬂw“¸Ôñã_Í£€gP5~w§Ë>!Û Ïˆî8V¿O\'R<äÜ~_£CüXó∆çÛUAπœÙY£ùsò{5¢ÍUl´YQåÇ)ÀtìŸ=bˇ' . "\0" . 'µ)™÷Ïc‹‚∏çıóUÉ÷¨}
ÒlΩØ0ÔLgmÓﬁˆ{™π<kpEçs√‹Ám ~!u∏9òï’ÏeŒ¨¡ñ∞üûç@§6≠Œ8Ÿ-eÇ+≥Ëœc˚´Júä‹‡Œ\\`Å‰VGVË˘v?Vª.<RÛ≤¡ü∞ç ˝,´‘‰9ƒWK_c§Ë÷5ª¨˛«∑zõ|ßÏ£-Ïa÷€Ï≠Ñ~h.{w7˛•{áB§—“Òÿ·˜Ì™æáàr:ˆ-Å’åßö©!‰⁄ÕÉ˜_Ój˜Ïkvi‘|uMñ…à’2t…&ØRI%))ˇ‘Ùí$A‡Æ¸b}Zª\'#;
∞Êò¢÷ÙH%‘ºÌˇ' . "\0" . 'Ô˜ÆˆS:-pñùOñoœ˝[ÍÔYÈòÏ»Œ≈},µÂ¨q{YÍ›˛á[«:Åaun˛–è˙•Ï]©∑/£?ÌvYª£mQØØÔMüôÔ^Pﬂ´›K6ó›Cö÷ÿ›÷4Óh–~ì˘I’±Ωzù˚/sèÁﬂ⁄kìuL,>•K]kx2ÀG“iCc¡wºCª¸QÍ∞üc¸¯=ì÷\'ËŸN≈mxÔ∆nCË€Óp⁄˝„Ùo˙£?æ∫å™Î©.n§MÑÌµÏˆÃ<Ì˙üùÙk\\ò∆ m¡ÖÅ‰v:=¬‹È˘ç|∫∂÷~ÁÒ@ÑÇ[#§bVÁ‰öôˆª‹,æ˝æ„œ‰÷œ‹K®±πV‚ÿÔMπm8¿éK^¨˝zÉ´ˇ' . "\0" . 'Æ+ˆmm`øæß˛˚˛rñ.8 :˝*≤ﬂn÷◊vﬂÌ2ƒ€]M¨.Ö“±û◊UãSm•≠evm·†4lﬁÔvﬂ—µiÄ&{¶' . "\0" . '8L%pdídÈ%I$íJˇ’ÙrCZ^‚¡Àú`Ìj¿Íü^˛¨t€æœnA ¥	s1[Îë˘Ø∞’ΩﬂªΩy7V˙—’∫≥À≥≤_p<VLV<õS}ã*Ãã"N—˘£@§†≤ÀÈ_¸h`YSõÉÅpq˙6‰=å◊˘T3◊ﬁﬂ‰zãáÍ?Y˙ØZŒ«v]±K-gßèX≠æÊ˛c' . "\0" . 'ﬂ«Á¨óÌJjÃX«x9ßÒJ’OyyÁ¬J	πÌiÉ ˆÓCıÏPS∑jt?≈H∆Èt˛∏”cYy⁄' . "\0" . 'ÇË1˙Ó3^‡\\6ë°ê∏ÍzW⁄.hst=˚«ú.ü†Ùj∏[mcsO¥ùcœTäGÉ∑å_êˆ‹Ò' . "\0" . '}ë?ï¸•¡uŒΩóÉ÷:ûF-◊Qe∂W∫óAˆ{€*w≤Íû÷~zÙÄ–' . "\0" . '^Sı˙°G÷£=oJﬂôg“¸µ’≥“ÙüÒ•‘Mm9îWñ¬Ÿ¢¥∆üõæ≠ﬂÿ]ON˙ˇ' . "\0" . 'ıg:ÏÉâcÄÜﬁÿˆÌ{Íˇ' . "\0" . '§º_≈ïU‰&>%IŒ' . "\0" . 'ê<„‡Ö´!˙ãË…`≥÷_Y¸˙‹?Ë¢/û1Ú≤1›Íc⁄˙^5≠Œa”Õ§.ß£å/¨8d2Î∆mcÛrF„Úπªmˇ' . "\0" . ';‘Cá≤xü^Ir˝ÎÔNÍŸU‡›KÚ≠“πp}NtN∆€ÌvÁ~f˙◊O™\'dÿ›ˇ÷ÛÖ Jp$)X–ˆC#êè¬Öçë∏r)]—≥ôå«œº{l˘%•n4≥p∏Nü‘.¿º]T8,¨··ˇ' . "\0" . 'ë]ˇ' . "\0" . 'CÍ˝;™T+©·∑«ª˙?˚?Èˇ' . "\0" . 'üZ”cÉeµXﬁA]n%˛´Êç≥ÚX5bÌ¥Ä8<-¨)' . "\0" . 'ë@tÿÔo¡yü¯Œ`=v∂7ÈYèHw»⁄?ÍW†›õèâI∂◊Üµ∫ÍWó}dÍåÍ›]˘uÍ–—]d¯	‘ZSiuπS¥K~‰ë%ˆCxÒCsÂ–;hà»héÁ∫(f‚∑ÀTÏv∫rÉ∏…¯©AIMÏLó≥%õ\\An†éA‡·˝U‹ˇ' . "\0" . '„á‘¸k˛è≥èü˜+˛3˛˘µÁòœ˝`ø≥A?pMˆáxˆî≠Oˇ◊Ûßˆp·¡*ù&A›é$(‘Ôt©X“ë˙D0FÚ”Æ®ŒÊît∂BEAÉŸµﬁI6Ar5Ñg' . "\0" . 'ˆ‹†∑GB	uq>±ı¨xÂπ¿v∂¯øﬂˇ' . "\0" . 'I\\ˇ' . "\0" . 'ûøX—∫∂˘Ü	¸J√p{x;‚√¡j6QAΩô÷:ßQ1ôí˚Z?0@o˘≠ÑK#ì¬Í\'∫~‰î∆∞¿¢8…”Ä°Gwx$\\wJJP‘§ÁF≤ê‡ËÑÁ@ÓRRfùµXÓ˚O‚°?≠1CæÚÑ=ß˛åˇ' . "\0" . '±%?ˇ–ÛZèËH˘˛)™ÊTbøäï_F|”˚-Ó⁄@=Â%æÈD≠…d7Ó)›çÿc∫F”Q∂≤àm;]‡¨◊Ñ7	:©∞kî›_Üì¬	n◊H—X	D ∞kH‰Ëô2ú•))ì}¨î2|;)∏Ä¿>HdàILã°ìÊÇ”6Ä¶Á~èÊáQõB		≠v‡Êˇ' . "\0" . 'VŒ>©ˇ' . "\0" . 'ß)ÀÂÔ¯ˇ' . "\0" . '√ÒJ’OˇŸ8BIM!' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'U' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'A' . "\0" . 'd' . "\0" . 'o' . "\0" . 'b' . "\0" . 'e' . "\0" . ' ' . "\0" . 'P' . "\0" . 'h' . "\0" . 'o' . "\0" . 't' . "\0" . 'o' . "\0" . 's' . "\0" . 'h' . "\0" . 'o' . "\0" . 'p' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'A' . "\0" . 'd' . "\0" . 'o' . "\0" . 'b' . "\0" . 'e' . "\0" . ' ' . "\0" . 'P' . "\0" . 'h' . "\0" . 'o' . "\0" . 't' . "\0" . 'o' . "\0" . 's' . "\0" . 'h' . "\0" . 'o' . "\0" . 'p' . "\0" . ' ' . "\0" . 'C' . "\0" . 'S' . "\0" . '3' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '8BIM' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˇ·0http://ns.adobe.com/xap/1.0/' . "\0" . '<?xpacket begin="Ôªø" id="W5M0MpCehiHzreSzNTczkc9d"?> <x:xmpmeta xmlns:x="adobe:ns:meta/" x:xmptk="Adobe XMP Core 4.1-c036 46.276720, Mon Feb 19 2007 22:40:08        "> <rdf:RDF xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"> <rdf:Description rdf:about="" xmlns:exif="http://ns.adobe.com/exif/1.0/" xmlns:dc="http://purl.org/dc/elements/1.1/" xmlns:tiff="http://ns.adobe.com/tiff/1.0/" xmlns:xapMM="http://ns.adobe.com/xap/1.0/mm/" xmlns:stRef="http://ns.adobe.com/xap/1.0/sType/ResourceRef#" xmlns:xap="http://ns.adobe.com/xap/1.0/" xmlns:photoshop="http://ns.adobe.com/photoshop/1.0/" exif:FocalLength="70/1" exif:FNumber="56/10" exif:ApertureValue="327680/65536" exif:ExposureTime="1/100" exif:ShutterSpeedValue="434176/65536" exif:ExposureBiasValue="0/1" exif:ExifVersion="0221" exif:ProgramMode="2" exif:DateTimeOriginal="2011-05-04T13:58:11Z" exif:MeteringMode="5" exif:ISOSpeed="100" exif:GPSVersionID="2.2.0.0" exif:FlashpixVersion="0100" exif:ColorSpace="1" exif:PixelXDimension="145" exif:PixelYDimension="190" exif:DateTimeDigitized="2011-05-04T15:58:11+02:00" exif:ExposureProgram="2" exif:FocalPlaneXResolution="3168000/593" exif:FocalPlaneYResolution="4752000/894" exif:FocalPlaneResolutionUnit="2" exif:CustomRendered="0" exif:ExposureMode="0" exif:WhiteBalance="0" exif:SceneCaptureType="0" exif:NativeDigest="36864,40960,40961,37121,37122,40962,40963,37510,40964,36867,36868,33434,33437,34850,34852,34855,34856,37377,37378,37379,37380,37381,37382,37383,37384,37385,37386,37396,41483,41484,41486,41487,41488,41492,41493,41495,41728,41729,41730,41985,41986,41987,41988,41989,41990,41991,41992,41993,41994,41995,41996,42016,0,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20,22,23,24,25,26,27,28,30;7721C9CEFB28F562E69FAEF2E7FA8F04" dc:format="image/jpeg" tiff:make="Canon" tiff:model="Canon EOS 500D" tiff:artist="" tiff:YCbCrPositioning="2" tiff:Make="Canon" tiff:Model="Canon EOS 500D" tiff:Orientation="1" tiff:XResolution="720000/10000" tiff:YResolution="720000/10000" tiff:ResolutionUnit="2" tiff:NativeDigest="256,257,258,259,262,274,277,284,530,531,282,283,296,301,318,319,529,532,306,270,271,272,305,315,33432;2EB6428E23953858068821703CEF50E2" xapMM:InstanceID="uuid:13E72A62257AE011BF6990D475A48D1E" xapMM:DocumentID="uuid:12E72A62257AE011BF6990D475A48D1E" xap:ModifyDate="2011-05-09T12:17:36+02:00" xap:CreateDate="2011-05-09T12:17:36+02:00" xap:MetadataDate="2011-05-09T12:17:36+02:00" xap:CreatorTool="Adobe Photoshop CS3 Windows" photoshop:ColorMode="3" photoshop:ICCProfile="sRGB IEC61966-2.1" photoshop:History=""> <exif:Flash exif:Fired="False" exif:Return="0" exif:Mode="2" exif:Function="False" exif:RedEyeMode="False"/> <exif:ComponentsConfiguration> <rdf:Seq> <rdf:li>1</rdf:li> <rdf:li>2</rdf:li> <rdf:li>3</rdf:li> <rdf:li>0</rdf:li> </rdf:Seq> </exif:ComponentsConfiguration> <exif:ISOSpeedRatings> <rdf:Seq> <rdf:li>100</rdf:li> </rdf:Seq> </exif:ISOSpeedRatings> <dc:creator> <rdf:Seq/> </dc:creator> <xapMM:DerivedFrom stRef:instanceID="uuid:faf5bdd5-ba3d-11da-ad31-d33d75182f1b"/> </rdf:Description> </rdf:RDF> </x:xmpmeta>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 <?xpacket end="w"?>ˇ‚XICC_PROFILE' . "\0" . '' . "\0" . '' . "\0" . 'HLino' . "\0" . '' . "\0" . 'mntrRGB XYZ Œ' . "\0" . '' . "\0" . '	' . "\0" . '' . "\0" . '1' . "\0" . '' . "\0" . 'acspMSFT' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'IEC sRGB' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ˆ÷' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '”-HP  ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'cprt' . "\0" . '' . "\0" . 'P' . "\0" . '' . "\0" . '' . "\0" . '3desc' . "\0" . '' . "\0" . 'Ñ' . "\0" . '' . "\0" . '' . "\0" . 'lwtpt' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'bkpt' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'rXYZ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'gXYZ' . "\0" . '' . "\0" . ',' . "\0" . '' . "\0" . '' . "\0" . 'bXYZ' . "\0" . '' . "\0" . '@' . "\0" . '' . "\0" . '' . "\0" . 'dmnd' . "\0" . '' . "\0" . 'T' . "\0" . '' . "\0" . '' . "\0" . 'pdmdd' . "\0" . '' . "\0" . 'ƒ' . "\0" . '' . "\0" . '' . "\0" . 'àvued' . "\0" . '' . "\0" . 'L' . "\0" . '' . "\0" . '' . "\0" . 'Üview' . "\0" . '' . "\0" . '‘' . "\0" . '' . "\0" . '' . "\0" . '$lumi' . "\0" . '' . "\0" . '¯' . "\0" . '' . "\0" . '' . "\0" . 'meas' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '$tech' . "\0" . '' . "\0" . '0' . "\0" . '' . "\0" . '' . "\0" . 'rTRC' . "\0" . '' . "\0" . '<' . "\0" . '' . "\0" . 'gTRC' . "\0" . '' . "\0" . '<' . "\0" . '' . "\0" . 'bTRC' . "\0" . '' . "\0" . '<' . "\0" . '' . "\0" . 'text' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'Copyright (c) 1998 Hewlett-Packard Company' . "\0" . '' . "\0" . 'desc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'sRGB IEC61966-2.1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'sRGB IEC61966-2.1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'XYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ÛQ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'ÃXYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'XYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'o¢' . "\0" . '' . "\0" . '8ı' . "\0" . '' . "\0" . 'êXYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'bô' . "\0" . '' . "\0" . '∑Ö' . "\0" . '' . "\0" . '⁄XYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '$†' . "\0" . '' . "\0" . 'Ñ' . "\0" . '' . "\0" . '∂œdesc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'IEC http://www.iec.ch' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'IEC http://www.iec.ch' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'desc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '.IEC 61966-2.1 Default RGB colour space - sRGB' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '.IEC 61966-2.1 Default RGB colour space - sRGB' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'desc' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . ',Reference Viewing Condition in IEC61966-2.1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . ',Reference Viewing Condition in IEC61966-2.1' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'view' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '§˛' . "\0" . '_.' . "\0" . 'œ' . "\0" . 'ÌÃ' . "\0" . '' . "\0" . '\\û' . "\0" . '' . "\0" . '' . "\0" . 'XYZ ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'L	V' . "\0" . 'P' . "\0" . '' . "\0" . '' . "\0" . 'WÁmeas' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'è' . "\0" . '' . "\0" . '' . "\0" . 'sig ' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'CRT curv' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '#' . "\0" . '(' . "\0" . '-' . "\0" . '2' . "\0" . '7' . "\0" . ';' . "\0" . '@' . "\0" . 'E' . "\0" . 'J' . "\0" . 'O' . "\0" . 'T' . "\0" . 'Y' . "\0" . '^' . "\0" . 'c' . "\0" . 'h' . "\0" . 'm' . "\0" . 'r' . "\0" . 'w' . "\0" . '|' . "\0" . 'Å' . "\0" . 'Ü' . "\0" . 'ã' . "\0" . 'ê' . "\0" . 'ï' . "\0" . 'ö' . "\0" . 'ü' . "\0" . '§' . "\0" . '©' . "\0" . 'Æ' . "\0" . '≤' . "\0" . '∑' . "\0" . 'º' . "\0" . '¡' . "\0" . '∆' . "\0" . 'À' . "\0" . '–' . "\0" . '’' . "\0" . '€' . "\0" . '‡' . "\0" . 'Â' . "\0" . 'Î' . "\0" . '' . "\0" . 'ˆ' . "\0" . '˚%+28>ELRY`gnu|Éãíö°©±π¡…—Ÿ·ÈÚ˙&/8AKT]gqzÑéò¢¨∂¡À’‡Îı' . "\0" . '!-8COZfr~äñ¢Æ∫«”‡Ï˘ -;HUcq~åö®∂ƒ”·˛+:IXgwÜñ¶µ≈’Âˆ\'7HYj{åùØ¿—„ı+=OatÜô¨ø“Â¯2FZnÇñ™æ“Á˚		%	:	O	d	y	è	§	∫	œ	Â	˚

\'
=
T
j
Å
ò
Æ
≈
‹
Û"9QiÄò∞»·˘*C\\uéß¿ŸÛ&@Zté©√ﬁ¯.Idõ∂“Ó	%A^zñ≥œÏ	&Ca~õπ◊ı1Omå™…Ë&EdÑ£√„#CcÉ§≈Â\'Ijã≠Œ4VxõΩ‡&Ilè≤÷˙AeâÆ“˜@eäØ’˙ Ekë∑›*Qwû≈Ï;cä≤⁄*R{£ÃıGpô√Ï@jîæÈ>iîøÍ  A l ò ƒ !!H!u!°!Œ!˚"\'"U"Ç"Ø"›#
#8#f#î#¬#$$M$|$´$⁄%	%8%h%ó%«%˜&\'&W&á&∑&Ë\'\'I\'z\'´\'‹((?(q(¢(‘))8)k)ù)–**5*h*õ*œ++6+i+ù+—,,9,n,¢,◊--A-v-´-·..L.Ç.∑.Ó/$/Z/ë/«/˛050l0§0€11J1Ç1∫1Ú2*2c2õ2‘33F33∏3Ò4+4e4û4ÿ55M5á5¬5˝676r6Æ6È7$7`7ú7◊88P8å8»99B99º9˘:6:t:≤:Ô;-;k;™;Ë<\'<e<§<„="=a=°=‡> >`>†>‡?!?a?¢?‚@#@d@¶@ÁA)AjA¨AÓB0BrBµB˜C:C}C¿DDGDäDŒEEUEöEﬁF"FgF´FG5G{G¿HHKHëH◊IIcI©IJ7J}JƒKKSKöK‚L*LrL∫MMJMìM‹N%NnN∑O' . "\0" . 'OIOìO›P\'PqPªQQPQõQÊR1R|R«SS_S™SˆTBTèT€U(UuU¬VV\\V©V˜WDWíW‡X/X}XÀYYiY∏ZZVZ¶Zı[E[ï[Â\\5\\Ü\\÷]\']x]…^^l^Ω__a_≥``W`™`¸aOa¢aıbIbúbcCcócÎd@dîdÈe=eíeÁf=fífËg=gìgÈh?hñhÏiCiöiÒjHjüj˜kOkßkˇlWlØmm`mπnnknƒooxo—p+pÜp‡q:qïqrKr¶ss]s∏ttptÃu(uÖu·v>võv¯wVw≥xxnxÃy*yâyÁzFz•{{c{¬|!|Å|·}A}°~~b~¬#ÑÂÄGÄ®Å
ÅkÅÕÇ0ÇíÇÙÉWÉ∫ÑÑÄÑ„ÖGÖ´ÜÜrÜ◊á;áüààiàŒâ3âôâ˛ädä ã0ãñã¸åcå ç1çòçˇéféŒè6èûêênê÷ë?ë®íízí„ìMì∂î îäîÙï_ï…ñ4ñüó
óuó‡òLò∏ô$ôêô¸öhö’õBõØúúâú˜ùdù“û@ûÆüüãü˙†i†ÿ°G°∂¢&¢ñ££v£Ê§V§«•8•©¶¶ã¶˝ßnß‡®R®ƒ©7©©™™è´´u´È¨\\¨–≠D≠∏Æ-Æ°ØØã∞' . "\0" . '∞u∞Í±`±÷≤K≤¬≥8≥Æ¥%¥úµµä∂∂y∂∑h∑‡∏Y∏—πJπ¬∫;∫µª.ªßº!ºõΩΩèæ
æÑæˇøzøı¿p¿Ï¡g¡„¬_¬€√X√‘ƒQƒŒ≈K≈»∆F∆√«A«ø»=»º…:…π 8 ∑À6À∂Ã5ÃµÕ5ÕµŒ6Œ∂œ7œ∏–9–∫—<—æ“?“¡”D”∆‘I‘À’N’—÷U÷ÿ◊\\◊‡ÿdÿËŸlŸÒ⁄v⁄˚€Ä‹‹ä››ñﬁﬁ¢ﬂ)ﬂØ‡6‡Ω·D·Ã‚S‚€„c„Î‰s‰¸ÂÑÊÊñÁÁ©Ë2ËºÈFÈ–Í[ÍÂÎpÎ˚ÏÜÌÌúÓ(Ó¥Ô@ÔÃXÂÒrÒˇÚåÛÛßÙ4Ù¬ıPıﬁˆmˆ˚˜ä¯¯®˘8˘«˙W˙Á˚w¸¸ò˝)˝∫˛K˛‹ˇmˇˇˇÓ' . "\0" . 'Adobe' . "\0" . 'dÄ' . "\0" . '' . "\0" . '' . "\0" . 'ˇ€' . "\0" . 'Ñ' . "\0" . '			
ˇ¿' . "\0" . '' . "\0" . 'æ' . "\0" . 'ë"' . "\0" . 'ˇ›' . "\0" . '' . "\0" . '
ˇƒ?' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . '	
' . "\0" . '3' . "\0" . '!1AQa"qÅ2ë°±B#$R¡b34rÇ—C%íS·Òcs5¢≤É&DìTdE¬£t6“U‚eÚ≥Ñ√”u„ÛF\'î§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ7GWgwáóß∑«◊Á˜' . "\0" . '5' . "\0" . '!1AQaq"2Åë°±B#¡R—3$b·rÇíCScs4Ò%¢≤É&5¬“DìT£dEU6te‚Ú≥Ñ√”u„ÛFî§Ö¥ïƒ‘‰Ù•µ≈’ÂıVfvÜñ¶∂∆÷Êˆ\'7GWgwáóß∑«ˇ⁄' . "\0" . '' . "\0" . '' . "\0" . '?' . "\0" . 'ÙƒíI9jíI$î†íK7®˝aÈ]8ñ_s}A©≠§#Jt”.d˝}ÈS;∑˜ø÷ıÛ°ªRlh˝Ì∫~TxOdqÔFí…«˙”–≤' . "\0" . '- k7híœ˙øj‘Æ Ïh}na‘9¶A˘Ñ),ì¶NÇîíI“JíI:JY:I$•“LíJˇ–ÙƒíI9jí$$¿“\\\'◊œ≠ûÉ_”1^[§d=ßSˇ' . "\0" . 'ﬂ˚˙ Zâ¶[ææ' . "\0" . 'ÁÙÓêÚ“Ï¶È«,®ˇ' . "\0" . 'ﬂ◊ˆóXw8êu$Íî©z¶¿^ÌâèÍÑ7]æÕ8ÿ\'ç]\'ûÌ\\67]&<ª\'w-;ù¿$Á*_mo§ÊÔÆ>rùπR!ïÜÜ]‚ç¢ùlp®·li?˘í≥”~≤u.ÉñMDÉm2«4˛~üEÎ
¨ãÕƒœ§	¯ˇ' . "\0" . '&UÄ˜‰i€XZcâ‰∑SÍΩÎ«Lœ,Ø#ı[ü£wcâ„mü˘%“5¡¬Aê|Ç‚€˙≥Ë:¡Ü`˝&èÌ.ÁÍ÷õEçÈπØ.©ﬁ⁄^„%Æ¸÷8üÃwÊ¶òˆ\\%›Ù$Èì¶/]$íIJI$íRµI$íSˇ—ÙƒíLÁ¥π∆' . "\0" . '‘îÂÆ?÷ûøODÈèπ«Ùˆ˛èùÀ»˙_’ØÈØ… ∑2˜9‰ªq&I¸I]/◊ŒÆzè\\sA>û;]]M=à˙n˛≥◊)cõ]fÆ–˘\'ÅAi6X_d˛çüDißtJ€≥ivÅWc¢IÌ€‚ü{úe∆›%RvñπÓ1Î \'®¡"dï]÷π√e~÷˜= Mxl0	è≈+U6ÿÊ8ÅhﬂÙÈJΩÉsYé˙úŸÚ! ùmw¶ CIíOr<8W>œk™‹5£R;Ò?ÙìÇ“‘§˙yO≠¸8ñüø⁄ŒZy¬ÃÆ·˘Æ‹> çÌw˝R´ñ €ï∏˝ï÷6À70ñ∏Ã¯H“Ë§ß€∫/Uß©·≤ˆ@q{Gb¥ú˝HÍÇºÅQ;CŒ«7¥ò,rÙVô£ê¢æ&√$íIÀ§ô:JRIjíJˇ“Ù≈K¨ﬁq˙nE„¸ny˘#r∏≤æµΩ¨˙ΩúÁqÈ˜Ëû7Zv|K.◊YïuÓ%Œì…sµqT!ÖŒ◊√¯+˘s^	¸ÚÁ‡≥Ú4`¯…N+B)2' . "\0" . '‰ß&9’Eáπ‰w¶·◊{À≤	ÿ4' . "\0" . 's(RtC[∑ê–	?r‘√ËŸ˘∫É∑yË∫˙gK∑áŸDXŸˇ' . "\0" . '™W˙NSq.¡aû
pInÙÔ™∏ã:Öçk˛üëZÍwtÃF≤Ü√Aé⁄@ˇ' . "\0" . 'rﬁ≈™À±ΩmﬂGUœu{Ò*¥∫ €RKwÚn®Ñúª€úÎÈÆ¿–‰µ‘>ñ˛ô¶∑Ì$ﬂwÇÌ:NLΩçÙ¨Ù…Ä÷ÿÕ≠$˝≠b◊*Y”´…-Ç€Dp7	)ƒËŸG3‘Fœñ–ﬂ¸äˆä∫∂∏p‡ﬁáÙ⁄›ÎΩ§À\\√Ã˝Ì= ótºBÔ§iÆ~;Zõ=ÇËn[i$íbı\'I$î§íI%?ˇ”Ùµœ˝z\'˛m‰¥~v¿œbË9ı˚%òˇ' . "\0" . 'V≤A˚∂÷¿|Iü˙-jx‹-;>Oì±Ói¿?ïïY…‘â>K@ø”ß›¨	èäÀæ…q.‘ª_ÄNíÿßÈ∏Àyh– €∆ÈEö<ùë¿8ˇ' . "\0" . '+˘*?UÍk›h%uîcTXáòF#DHÍÂtÃlB˜09ﬁ† ≥Bÿ:qµB‹P,≠⁄Igï∂jemT¨«{~â<ß-znÇÚ¸#…TÍ˝"À¨u≠®X◊pJ<’éÜX+€ ®˜Ü7q„πMÿÆ‹8]7ßb◊W¢h-a πéÇµ)˛∏b6œ´9l˘∂Â∞áË∑™Ùﬁ$F™ø^«ı˙6eCÛË±£Ê◊%iß ˙>A}’∞I◊lû˝◊∂t[ŸwM°ÕÏ¿“<⁄6ØË[a·ö ˆ/™/±˝5Æ#C|!/ïQ›ﬁI$ì©$íIJI(I%?ˇ‘Ù•≈ˇ' . "\0" . 'å◊V:~?®gﬂ-gòÂﬂ˜’ŸØ2ˇ' . "\0" . ' ø-Æ åjà≠ß±to*HÓ≤[<=ˆóíNÉê<Oö¢Ê€ÒF∞∏?q<»
π∞áOÕ"†ıﬂVô≥]%–W@/' . "\0" . 'áÖÖı]Ìø¶F°ŒëÁBäùq°Ñ˚C$˘ê"∆ÀÈrÚ∑‘Z”œe∫‹œMµ1ÒLkŸ˘·ëˆó¿<' . "\0" . '<c^ÎÍSCú“`¯¢áW¢78ÀK∂á›Œ´°√ƒ»ÆáW~CØ&bCDy{BÃÈwdπÄ7É»“$+π}^ÃvV1eMl`}ËÖce]çêi∂vÚ◊vÖo+/~U}ŸS›‰F◊B°”z≠=N-§;d˚w¥¥ë„™\']µòù\'>·Ìäm˛≥Ê∂“µæYÉì∂ X›' . "\0" . 'p.Ú/t˙π@£¶Tœ”·ÀZÂ„•dU◊®«æì`qkàH ;_ÍÓ^„Ü√MmcÑKDxq¬Ÿ1›∂ídÈã‘íI$•$íI)ˇ’ÙïÉı√£ß—ÌÆë˙jˇ' . "\0" . 'H¡‚@:-‘ì¡Z_’^±q¨”éÁ3ƒ#q˜òπ€È≤õ]ç-sLA–ÖÙ•UmsöfIÄºsÎÆ%7ıküÖCÉ˝#Ä0Á˛˛—ªbvËŸ≠ı2¯fE<|˝•o“Ò[£¿í> Ê>Æ÷˙2≠:¿hü=atå⁄‚ùñKv∆u8˘îm±°Ì:œp|BI±˝5¬ñ±∑∑xpkŒ”CΩ—Ó˙Ju%Ñ˚O
6aÃ‹(z^ü÷nı)®‚9•çÄÊÌ=ÕÁwÊ´πwPºä⁄⁄FÆ®j∑w˘´öƒ∞Ól0œ`JÈÒ7∫∂»€)§.°ï?s' . "\0" . 'h‡' . "\0" . '#@ÉïãNs©√æ_cl{?x5Õ˘;éÂvÿûH–l\\AfEçe°‰˘?ıHZiøçÉçY;kkH‡Ä\'˝}™‡3Z¶.]:dÈ%I$íJRIíIOˇ÷ÙtÎåÍø„+¶cK0Xr^?=ﬁ÷‰ùˇ' . "\0" . 'AqΩkÎﬂXÍl5>ˇ' . "\0" . 'Fíu™Å∞Î;›g˝5\'
À}w*Ãjk.æ÷TﬁÓy{∂Æ+Æ˝i˙øäÁá9πDµ¥9•§˛Îãw{óô›ú˚æ«:«xΩ≈«ÒU,µœÁ∑Ï≠ﬁó¨ª®ıwÅS1ÈÙ›≤∂†ªw9jì¥»0BÂ~≠ªoTlp]=â—6HQf2H—‹é
–≈œ¶ˆ±ñ¿x¸ÂäÁv@qΩÆñ;P˜¯÷–∆4»3›hª*¶4fê∏\\Æ§5„U÷ÙúÉ[m…tª≥G‹µÓØ#%¸◊[‹>M.\\ﬂM˙˜óÄ)e¨fE`i‘6∆Å∆øEÕ]?P«ı∫fV8ëÍ“ˆOıöZº_=Ôv=m≥È◊-\'‡aÖ=_nÈﬂ]˙l4›ˆwûE∫	ˇ' . "\0" . 'å˙vªkµÅı=Øa·Õ ÉÛÁÃ,á
Îû`˘´∏ùk©Ù˜Œ6CÍ-:Ì$Lx¬!\\E˜ÑÎ…?∆wZ«Ü‰6ºñç=¬˛sG”ˇ' . "\0" . '∆áJ»!ôòˆc8ÚÊêˆˇ' . "\0" . 'ﬂ_ˇ' . "\0" . 'E7Ñßà=™R©‡ınù‘ª!ów!ß‹?¨√ÔVÂÀ»I2I)ˇ◊ÛóX˜rT©B[Tã¢yE#ÔQstA-ÆäÒ_Q≠‹L∑ÔÆ' . "\0" . 'ªÖ¬÷˜VˆòsLèíÏ∫NmyT∂¿u<x¯ã&:¶≤ò’ö*{ÑÛ*„±˜◊-UÎ©Ì|\'-zùW≤¡ıE°Å≠X*ÀCCO—Ï∂™;cƒ¶ï¡∞[,-=Ù^÷Î5d›AÂ∂Ω±y‹Ä·©^/◊¢ŒπîG—m÷8¸‹PËû≠jΩ†7¿+¨ûÍ¿Û*$ó∏ÿ"ÑåôR‹CäbCZ' . "\0" . 'ÂGv©)—≈Õ≤≤◊ºp‡`Ö›}I˙€í¸Ø∞ıÕµ[•V<…kª4∏˛k◊ú5⁄Jµ”≤_˚∫•æäŸ˜È	/ ˇ' . "\0" . 'ùˇ' . "\0" . '˜*œÛäHpxßè¡ˇ–Û®Ïú' . "\0" . 'Rb;®µﬁËR±©‚cIExˆ®8~é|RGt|˚nRt¸ÊûQ' . "\0" . '=®%∞PŸ;æÖ—:ˆ{e‚ª˚÷˝	˛©¸Â¶˙ÍÈ›ycIiÇ;≠<Nø’1¿k/sö4˛Ô˙©NZcŸÙ¸VπêãMél	+ÀŸı”™µ∞[Y>$¸ík~∫uªZ÷‹7ˇ' . "\0" . '%π"BÄ/}◊>∞„`cºÚ ‰˘/0æ„uˆ[ﬁ¬\\Ôû®wede<Ÿ}ÖÔ<í†˜∂8îî¿∫]¢+=£‚Ñ¿7W†AL\\e…¢ãπO0S-“ãCˆQcº`}Í±$¿S{∂“ãøÇJKÍüê\'Õ$mTˇ' . "\0" . 'ˇ—Û¶ù‘¸A˜)–f≤¡˜x);,Ó⁄µ@â¨©VtO¬äTË0û÷	”ÇÜN◊J∞=Ï@%Æ›)¿o#Ê†ˆ¡F¨á4êQYÆaÁ¯©ùíu@p£QBvBãÃÎ‡ê=‘]™JeH)ﬁuîıàjÉπIKÚ‡ôÓÇùº Ö%/Yó©dkôP£π)ÓÇY‡	üî%—]UÓIC◊rHh™ˇ“ÛJ]Qo”)´ù©Î˙FS˚-Óÿ¨¬(˙%Wj;>âûññ≠£U*Æâ(Mô—©Ëÿ±Å⁄°	aFitj_íì0áµ1
5Li¬ö([…4\'M›%$:4!~E7ŒŒRÏ:†ÿyîFŒÓlô(Ñ¥ÈY>
$˚Aü∆d˙.Öv}È)Ñî}ﬁ	&ÆˇŸ',
      ),
    ),
  ),
  'field_profile_last_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Klein',
        'format' => NULL,
        'safe_value' => 'Klein',
      ),
    ),
  ),
  'field_profile_phone' => array(
    'und' => array(
      0 => array(
        'value' => '+49-621-181-2817',
        'format' => NULL,
        'safe_value' => '+49-621-181-2817',
      ),
    ),
  ),
  'field_profile_postal_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails PartyType="Organisation"><NameLine>University of Mannheim - MZES</NameLine></NameDetails>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => 'University of Mannheim - MZES',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68131',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => '',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_research' => array(
    'und' => array(
      0 => array(
        'value' => 'Current research goes here',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Current research goes here</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_profile_visitor_address' => array(
    'und' => array(
      0 => array(
        'country' => 'DE',
        'xnl' => '<NameDetails/>
',
        'name_line' => '',
        'first_name' => NULL,
        'last_name' => NULL,
        'organisation_name' => '',
        'xal' => '',
        'administrative_area' => '',
        'sub_administrative_area' => '',
        'locality' => 'Mannheim',
        'dependent_locality' => '',
        'postal_code' => 'D-68159',
        'thoroughfare' => '',
        'premise' => 'A5, 6 (Geb√§udeteil A)',
        'sub_premise' => 'Office: 316',
        'data' => NULL,
      ),
    ),
  ),
  'field_profile_staff' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_staff_status' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_title_job' => array(
    'und' => array(
      0 => array(
        'value' => 'Researcher',
        'format' => NULL,
        'safe_value' => 'Researcher',
      ),
    ),
  ),
  'field_profile_gender' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_internal_email' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_staff_external' => array(
    'und' => array(
      0 => array(
        'value' => '0',
      ),
    ),
  ),
  'field_profile_staff_position' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
  'field_profile_titles_rendering' => array(
    'und' => array(
      0 => array(
        'value' => '1',
      ),
    ),
  ),
);
return $content;
}
