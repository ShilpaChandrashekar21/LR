Action()
{

	/* region selection */

	lr_think_time(18);

	web_websocket_send("ID=0", 
		"Buffer=.", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_think_time(7);

//	web_custom_request("update", 
//		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:MMB5JnHpicft0US9P-mpZ6E27Qm6ZvINfCQCHfpARoc&cup2hreq=7a2035c9e48669d077e42560474b0694e56ad90f6514b0cc9e32a55e31021b5e", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t23.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.99\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.99\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.99,\"AppVersion\":\""
//		"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.61\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.61\",\"AppMajorVersion\":\"121\",\""
//		"AppRollout\":0.61,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":"
//		"{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.68,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\""
//		"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.43,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
//		"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.88,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\""
//		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7B7D2723762BB51B662A5A8B41C4181069DEBE6A885689017238BE129698E7FE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.91,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"10.34.0.52\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\""
//		"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.19,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.25\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.33\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US"
//		"\",\"packages\":{\"package\":[{\"fp\":\"1.E257400C1E8A114B7B2F40C35A309A616323EFBA99442BBB0E1554F231E38809\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.33\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.33,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\""
//		"rrf@0.51\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.51,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\""
//		"packages\":{\"package\":[{\"fp\":\"1.ACAF273151A17537328DD498705F2F589745E014A1BBA4FC2B3FA2729CF4A5F6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.94,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"11.0.0.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\""
//		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.69,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3.0.0.0\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\""
//		"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.CB469EE19BA37189AA568219B28E2812DCF51B7A2251F37A72514C4A0E68F658\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"4.0.0.15\"},{\""
//		"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.89\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.89,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
//		"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.17\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.17\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.17,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
//		"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.32\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.82EE73DBF6DD4F13789BDF673E96FAB44512C2FBBF90B6FF593084BB08B33902\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.32\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.32,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\""
//		"updatecheck\":{},\"version\":\"4.0.2.40\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ADB24E09EADF2056B0830DC7F3AE233637081DF28DB8194ED2761E426443BAF9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.53,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\""
//		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.18\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ABA885C2C3540EAF3B054FC686F715C10FE210C9C83F9275478F574C98D35A6B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.18\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.18,\"AppVersion\":\"121.0.2277.128\",\""
//		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.6355.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"121\","
//		"\"AppRollout\":0.63,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.35\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.BDEBCF637FFF079866206C641A46EA96E2EBB43545F8184347CB49CAD2F4E110\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
//		"AppCohort\":\"rrf@0.35\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.35,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.20240223.1.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
//		"1.E7727C48F2FC3649530D39F110AD37F750538845D0E271C1B26CFE6B3E6A26E3\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.48,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"2.0.0.9\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.40\",\"enabled\":true,\"installdate\":-1,\""
//		"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3F08849EBD098437F635842BE828DA387FE405E2F9FB7D4957A3022D6B46F4DE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.40\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.4,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"120.17243.17238.8\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\","
//		"\"cohort\":\"rrf@0.29\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.29\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.29,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\""
//		"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.14\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.14\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.14,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oghefchejbbgepkneeedmklffjpbaiaa\",\"brand\":\"INBX\",\""
//		"cohort\":\"rrf@0.13\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1B6FD546636902FE09A365429E24B569693321901C457E868E0258D20DA32E89\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.13\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.13,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\"updatecheck\":{},\"version\":\"1.12.1.10\"},{\"appid\":\""
//		"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.15\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.15\",\"AppMajorVersion\":\"121\",\"AppRollout\":0.15,\"AppVersion\":\"121.0.2277.128\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.185.17\"},\""
//		"updatecheck\":{},\"version\":\"2023.12.20.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\":\"3.1\",\"requestid\":\"{99428393-fbe1-4ff9-8e46-d413fb6aad9a}\",\"sessionid\":\""
//		"{008e2a19-f04e-4e41-b65d-2121d041d500}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.185.17\"},\"updaterversion\":\"121.0.2277.128\"}}", 
//		LAST);

	web_add_cookie("_vwo_uuid_v2=D1920CE77D7B5E88DB2D0ADD3905DA59E|5381605328224fc8672f95c87f3b90be; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_omappvp=PffaYbnHg1iAfKcxzDbxPYOScTJQnJHtWLvs6LjT4FWe8xCFLSu0ypK87XZ9rNQbNEQVPMgKarZ65Ln7H8NYEXYtxt9yeyNY; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_omappvs=1708749725738; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga_4GPKJR6BK2=GS1.1.1708749726.1.0.1708749726.60.0.0; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_jsuid=3917692257; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_heatmaps_g2g_100936456=yes; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga=GA1.2.37313771.1708749727; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_gid=GA1.2.1623097521.1708749729; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_gat_gtag_UA_4173828_16=1; DOMAIN=www.loadview-testing.com");

	web_url("east", 
		"URL=https://www.loadview-testing.com/demo/east/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/demo/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

//	web_url("ExpandedDomainsFilterGlobal.json", 
//		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t25.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("inlinks.js_2", 
//		"URL=https://jscloud.net/x/26432/inlinks.js", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://www.loadview-testing.com/", 
//		"Snapshot=t26.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("3", 
//		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t27.inf", 
//		"Mode=HTML", 
//		"EncType=application/json; charset=utf-8", 
//		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAU4MijKW4GiCCLggU/9urvxKw9DJgOZgAAEP8ZhXHau/KkLQSO64KyaDngAHcBK4NhVtOwp4exNemiVkMY8LM10kY0Iyj9K8ZuCzPyl60tkx5TIlJvzmBU1avBC/tJI6Bs7kd7qJycDqjiiW5gV7OyOZPbxQ0n81B2MvwwZ0rrPcBPdS4Mic/gcRFuKZ7mAG9EEzVSzVy34tkiJcIaBFc/UfGePezIGhLcAbH/"
//		"jGRNCasSuDuRfi42IjQCrR4CodKRY5c24Xo866tnSJjxegdVvKc5hnHDYLrJ0UjOTX5fEz3JrU+Clcvv01Bos0cGNSYCMTUlPU+rAuCyJYlrKSOBj3OTSwUST6G1RfTeHQE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.19045.3324.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"\",\"version\":\"121.0.2277.128 (Official build) \"},\"client\":{\"version\":\"281483718098944\",\"data\":{\""
//		"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"synchronousLookupUris\":\"638343870221005468\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\""
//		"uri\":\"https://www.loadview-testing.com/demo/east/\",\"ip\":\"162.159.135.42\"},\"referrer\":{\"uri\":\"https://www.loadview-testing.com/demo/\",\"ip\":\"162.159.135.42\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"6a4a63c1-4733-4e71-b99f-cd7644eab430\",\"synchronous\":false}", 
//		LAST);

	web_add_cookie("__cf_bm=l3yVrdbTaVBtIQO1BSlcSLTa708F8zXCwXDSKPrzuGs-1708750427-1.0-AakUxBO2tniEpomM+ulKf/k5Bvh3PC7lxTR2BBsRCmIhjz5LqTk/3Ha1IsAR8Fw0u4LUPiZEB9SAInBIwhujPd0=; DOMAIN=calendly.com");

/*Correlation comment - Do not change!  Original value='21b4115cbd0ad7a1f6a783c0e81d65c631d5cb48-1708750428' Name ='__cfruid' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=cookie",
		"LB=__cfruid=",
		"RB=;",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/discovery-call*",
		LAST);

	web_url("discovery-call", 
		"URL=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("__cfruid={cookie}; DOMAIN=calendly.com");

	web_url("user", 
		"URL=https://calendly.com/api/booking/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("settings", 
		"URL=https://calendly.com/api/booking/settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("request", 
		"URL=https://calendly.com/api/booking/request", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("experiments", 
		"URL=https://calendly.com/api/booking/experiments?event_type_uuid=6f018153-14f4-4cf0-848a-1c3472da7aae", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

//	web_custom_request("config.json_2", 
//		"URL=https://notifier-configs.airbrake.io/2020-06-18/config/90109/config.json?&notifier_name=airbrake-js%2Fbrowser&notifier_version=2.1.8&os=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F121.0.0.0%20Safari%2F537.36%20Edg%2F121.0.0.0&language=JavaScript", 
//		"Method=OPTIONS", 
//		"Resource=1", 
//		"Referer=https://calendly.com/", 
//		"Snapshot=t33.inf", 
//		LAST);

//	web_url("config.json_3", 
//		"URL=https://notifier-configs.airbrake.io/2020-06-18/config/90109/config.json?&notifier_name=airbrake-js%2Fbrowser&notifier_version=2.1.8&os=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F121.0.0.0%20Safari%2F537.36%20Edg%2F121.0.0.0&language=JavaScript", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://calendly.com/", 
//		"Snapshot=t34.inf", 
//		"Mode=HTML", 
//		LAST);

//	web_url("m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
//		"URL=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=https://calendly.com/", 
//		"Snapshot=t35.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("report_3", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=OPTIONS", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t36.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("update_2", 
//		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t37.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.35\",\"enabled\":true,\"event\":[{\"download_time_ms\":16239,\"downloaded\":39771,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"309.55135.1.0\",\"previousversion\":\"1.20240223.1.0\",\"total\":39771,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
//		"224cca8a-ee2b-4aa8-936c-02c3990dacd6?P1=1709282381&P2=404&P3=2&P4=IUTv509%2fbLf9suMsYYU8daMOSLK4au0NPbBT4nrjun1JmJTL7ygk9js72TWJTO2GawLTjU%2bjlWeF7sa56lbbvQ%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":146,\"nextfp\":\"1.BDEBCF637FFF079866206C641A46EA96E2EBB43545F8184347CB49CAD2F4E110\",\"nextversion\":\"309.55135.1.0\",\"previousfp\":\"1.BDEBCF637FFF079866206C641A46EA96E2EBB43545F8184347CB49CAD2F4E110\",\"previousversion\":\"1.20240223.1.0\"}],\"installdate\":-1,\"lang\":\""
//		"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.BDEBCF637FFF079866206C641A46EA96E2EBB43545F8184347CB49CAD2F4E110\"}]},\"version\":\"309.55135.1.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\""
//		"protocol\":\"3.1\",\"requestid\":\"{95e54ae4-0505-4452-a2d8-a080d38852dc}\",\"sessionid\":\"{008e2a19-f04e-4e41-b65d-2121d041d500}\",\"updaterversion\":\"121.0.2277.128\"}}", 
//		LAST);
//
//	web_custom_request("report_4", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/plain", 
//		"Referer=", 
//		"Snapshot=t38.inf", 
//		"Mode=HTML", 
//		"EncType=application/reports+json", 
//		"Body=[{\"age\":149978,\"body\":{\"elapsed_time\":11354,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
//		LAST);

	web_url("range", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-02-24&range_end=2024-02-29&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(186);

//	web_custom_request("update_3", 
//		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t40.inf", 
//		"Mode=HTML", 
//		"EncType=application/json", 
//		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.15\",\"enabled\":true,\"event\":[{\"download_time_ms\":4021,\"downloaded\":4975,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.1.3.0\",\"previousversion\":\"2023.12.20.0\",\"total\":4975,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
//		"22bd2c3f-162f-4ed8-934e-97de224b1577?P1=1709238807&P2=404&P3=2&P4=c2CwvrUWxc753OxeQnJUHY%2batEQuo38KWUfvlJz0Zc8h8c43tqmDC8xtsDvhqChwiFzhFqQ1Hdl6hZ%2b5Ih8rCw%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":151,\"nextfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"nextversion\":\"2024.1.3.0\",\"previousfp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\",\"previousversion\":\"2023.12.20.0\"}],\"installdate\":-1,\"lang\":\"en-US\","
//		"\"packages\":{\"package\":[{\"fp\":\"1.81805FCAF78B052E111DB9D041095CDBB67E07DAA95D27119804D858C0F1FDF4\"}]},\"version\":\"2024.1.3.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":12,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.2277.128\",\"protocol\":\"3.1\""
//		",\"requestid\":\"{94058273-9d4d-4b96-8244-54fc4f8a5b87}\",\"sessionid\":\"{008e2a19-f04e-4e41-b65d-2121d041d500}\",\"updaterversion\":\"121.0.2277.128\"}}", 
//		LAST);

//	web_custom_request("v3_4", 
//		"URL=https://a.nel.cloudflare.com/report/v3?s=S4GC7QlU4SC%2B%2Bc8mhVgyGOzLOch3SNUNXQmrXxthBYmqiWP69wPlTj8IE%2FAKCIiC3UycqiOGx9E32OEpbzIyqVxCSeoY9tyGSldiPTabDAdGJ%2FroIyFnihT6vTQKAtICAJ7hcc3adZSK6g%3D%3D", 
//		"Method=POST", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t41.inf", 
//		"Mode=HTML", 
//		"EncType=application/reports+json", 
//		"Body=[{\"age\":102118,\"body\":{\"elapsed_time\":27,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":0,\"type\":\"tcp.closed\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/demo/east/\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/"
//		"121.0.0.0\"},{\"age\":143765,\"body\":{\"elapsed_time\":518,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/embed-any-document/js/embed-public.min.js?ver=2.7.4\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) "
//		"AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":144176,\"body\":{\"elapsed_time\":107,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/structured-content/dist/app.build.js?ver=1.6.2\""
//		",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":147771,\"body\":{\"elapsed_time\":1040,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/"
//		"wp-content/plugins/sitepress-multilingual-cms/res/flags/ar.png\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":147771,\"body\":{\"elapsed_time\":1041,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\""
//		"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/sitepress-multilingual-cms/res/flags/ja.png\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":143674,\"body\":{\"elapsed_time\":602,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\""
//		",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/q2w3-fixed-widget/js/frontend.min.js?ver=6.2.3\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":143333,\"body\":{\"elapsed_time\":942,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/"
//		"\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/real-time-auto-find-and-replace/assets/js/rtafar.app.min.js?ver=1.5.6\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":143387,\"body\":{\"elapsed_time\":888,\"method\":\"GET\",\"phase\":\""
//		"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/cf7-conditional-fields/js/scripts.js?ver=2.4.7\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":143765,\""
//		"body\":{\"elapsed_time\":516,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/real-time-auto-find-and-replace/assets/js/rtafar.local.js?ver=1.5.6\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
//		"(KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":143693,\"body\":{\"elapsed_time\":584,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/divi-section-tab/scripts/frontend-bundle.min.js?ver=1.0.0\",\""
//		"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\"age\":144178,\"body\":{\"elapsed_time\":109,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content"
//		"/plugins/divi-section-tab/scripts/animations.js?ver=1708684750\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
//		LAST);
//
//	web_custom_request("report_5", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=OPTIONS", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t42.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("v3_5", 
//		"URL=https://a.nel.cloudflare.com/report/v3?s=L%2FQxBUi1Y8rYknz1HMwaGbD75%2F8YSVy6sKDsOpENM3Cvhk%2Bkd%2BqHOR49ITagzxrAht1RJPDFDbVhraSItZzEUjuCl%2BjX1iG%2BLm848IJhN6PPhqgjVzXr7trzUZ4a", 
//		"Method=POST", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t43.inf", 
//		"Mode=HTML", 
//		"EncType=application/reports+json", 
//		"Body=[{\"age\":147331,\"body\":{\"elapsed_time\":1477,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/\",\"sampling_fraction\":1.0,\"server_ip\":\"104.26.5.39\",\"status_code\":200,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://jscloud.net/x/26432/inlinks.js\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{"
//		"\"age\":100624,\"body\":{\"elapsed_time\":1237,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/\",\"sampling_fraction\":1.0,\"server_ip\":\"104.26.5.39\",\"status_code\":200,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://jscloud.net/x/26432/inlinks.js\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
//		LAST);
//
//	web_set_sockets_option("TLS_SNI", "0");
//
//	web_custom_request("collect_3", 
//		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=379315400&t=pageview&_s=1&dl=https%3A%2F%2Fwww.loadview-testing.com%2Fdemo%2Feast%2F&ul=en-us&de=UTF-8&dt=Live%20Demos%20-%20LoadView%20Performance%20Engineering%20Team&sd=24-bit&sr=1280x720&vp=1257x606&je=0&_u=QACAAUABAAAAACAAI~&jid=1634047200&gjid=1753961534&cid=37313771.1708749727&tid=UA-4173828-16&_gid=1623097521.1708749729&_r=1&gtm=457e42l0za220&gcd=13l3l3l3l1&dma=0&jsscut=1&z=1884209775", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/plain", 
//		"Referer=https://www.loadview-testing.com/", 
//		"Snapshot=t44.inf", 
//		"Mode=HTML", 
//		"EncType=text/plain", 
//		LAST);
//
//	web_custom_request("report_6", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/plain", 
//		"Referer=", 
//		"Snapshot=t45.inf", 
//		"Mode=HTML", 
//		"EncType=application/reports+json", 
//		"Body=[{\"age\":187456,\"body\":{\"elapsed_time\":45,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/"
//		"121.0.0.0\"},{\"age\":187456,\"body\":{\"elapsed_time\":14,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\""
//		"}]", 
//		LAST);
//
//	/* date selection */
//
//	/* time selection */
//
//	/* cookie settings */
//
//	lr_think_time(272);
//
//	web_custom_request("report_7", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=OPTIONS", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t46.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_custom_request("report_8", 
//		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=text/plain", 
//		"Referer=", 
//		"Snapshot=t47.inf", 
//		"Mode=HTML", 
//		"EncType=application/reports+json", 
//		"Body=[{\"age\":280079,\"body\":{\"elapsed_time\":33,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"},{\""
//		"age\":280080,\"body\":{\"elapsed_time\":33,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
//		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("range_2", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-01&range_end=2024-03-07&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-03&date=2024-02-29", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("range_3", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-08&range_end=2024-03-14&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("range_4", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-15&range_end=2024-03-21&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("range_5", 
		"URL=https://calendly.com/api/booking/event_types/6f018153-14f4-4cf0-848a-1c3472da7aae/calendar/range?timezone=Asia%2FCalcutta&diagnostics=false&range_start=2024-03-22&range_end=2024-03-31&embed_domain=www.loadview-testing.com&embed_type=Inline", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

//	web_url("find-assets", 
//		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.autofillFull.en-us&version=1.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t52.inf", 
//		"Mode=HTML", 
//		LAST);

	/* user details */

	lr_think_time(27);

//	web_custom_request("config.json_4", 
//		"URL=https://notifier-configs.airbrake.io/2020-06-18/config/90109/config.json?&notifier_name=airbrake-js%2Fbrowser&notifier_version=2.1.8&os=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F121.0.0.0%20Safari%2F537.36%20Edg%2F121.0.0.0&language=JavaScript", 
//		"Method=OPTIONS", 
//		"Resource=1", 
//		"Referer=https://calendly.com/", 
//		"Snapshot=t53.inf", 
//		LAST);
//
//	web_url("config.json_5", 
//		"URL=https://notifier-configs.airbrake.io/2020-06-18/config/90109/config.json?&notifier_name=airbrake-js%2Fbrowser&notifier_version=2.1.8&os=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F121.0.0.0%20Safari%2F537.36%20Edg%2F121.0.0.0&language=JavaScript", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://calendly.com/", 
//		"Snapshot=t54.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_think_time(27);
	
//	web_reg_save_param_ex(
//		"ParamName=cookie1",
//		"LB=__cf_bm=",
//		"RB=;",
//		"Ordinal=1",
//		SEARCH_FILTERS,
//		"Scope=COOKIES",
//		"RequestUrl=https://calendly.com/api/booking/invitees",
//		LAST);
//
//	web_reg_save_param_ex(
//		"ParamName=cookie2",
//		"LB=__cfruid=",
//		"RB=;",
//		SEARCH_FILTERS,
//		"Scope=COOKIES",
//		"RequestUrl=https://calendly.com/api/booking/invitees",
//		LAST);
	
//	web_reg_save_param_ex(
//		"ParamName=Token",
//		"LB=X-CSRF-Token:",
//		"RB=",
//		SEARCH_FILTERS,
//		"Scope=HEADERS",
//		"RequestUrl=https://calendly.com/api/booking/invitees",
//		LAST);
	
	//web_add_cookie("__cf_bm={cookie1}; DOMAIN=calendly.com");
	
	//web_add_cookie("__cfruid={cookie2}; DOMAIN=calendly.com");
	
	//web_add_header("X-CSRF-Token","aBPe5qWhdJyJQHQ6KUEaW2PQ1q40Vd-VWgJxUAvxptL0I-0QCMps3VFdg7N5RbNYBWdqqW0-jZJCutB099G14A");
	// X-CSRF-Token: aBPe5qWhdJyJQHQ6KUEaW2PQ1q40Vd-VWgJxUAvxptL0I-0QCMps3VFdg7N5RbNYBWdqqW0-jZJCutB099G14A
	

	 
	web_custom_request("invitees", 
		"URL=https://calendly.com/api/booking/invitees", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://calendly.com/asia-pacific-middle-east-africa/discovery-call/2024-02-29T11:30:00+05:30?embed_domain=www.loadview-testing.com&embed_type=Inline&month=2024-02&date=2024-02-29", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"analytics\":{\"referrer_page\":null,\"invitee_landed_at\":\"2024-02-24T04:42:52.141Z\",\"browser\":\"Chrome 121\",\"device\":\"undefined Windows 10\",\"fields_filled\":5,\"fields_presented\":5,\"booking_flow\":\"v3\",\"seconds_to_convert\":629},\"embed\":{\"domain\":\"www.loadview-testing.com\",\"type\":\"Inline\",\"hide_details\":false,\"color_customization\":false},\"event\":{\"start_time\":\"2024-02-29T11:30:00+05:30\",\"location_configuration\":{\"location\":\"\",\"phone_number\":\"\","
		"\"additional_info\":\"\"},\"guests\":{}},\"event_fields\":[{\"id\":72361701,\"name\":\"Company Name\",\"format\":\"string\",\"required\":true,\"position\":0,\"answer_choices\":null,\"include_other\":false,\"value\":\"xyz\"},{\"id\":72361702,\"name\":\"Phone Number\",\"format\":\"phone_number\",\"required\":true,\"position\":1,\"answer_choices\":null,\"include_other\":false,\"value\":\"+91 98765 43210\",\"extension\":null,\"isValid\":true,\"countryCode\":\"in\"},{\"id\":72361703,\"name\":\"Product "
		"of Interest\",\"format\":\"choices_many\",\"required\":true,\"position\":2,\"answer_choices\":[\"Monitoring\",\"LoadView\"],\"include_other\":false,\"value\":\"Monitoring\"},{\"id\":72361060,\"name\":\"Please share anything that will help prepare for our meeting.\",\"format\":\"text\",\"required\":false,\"position\":3,\"answer_choices\":null,\"include_other\":false,\"value\":\"\"},{\"id\":72361704,\"name\":\"Do you have a current trial account?\",\"format\":\"choices_one\",\"required\":true,\""
		"position\":4,\"answer_choices\":[\"Yes\",\"No\"],\"include_other\":false,\"value\":\"No\"}],\"event_type_uuid\":\"6f018153-14f4-4cf0-848a-1c3472da7aae\",\"invitee\":{\"timezone\":\"Asia/Calcutta\",\"time_notation\":\"12h\",\"full_name\":\"shilpa\",\"email\":\"shilpac@gmail.com\"},\"payment_token\":{},\"recaptcha_token\":null,\"single_use_slug\":null,\"tracking\":{\"fingerprint\":\"d048220ce3e67a77913e6a1bba253c07\"}}", 
		LAST);

	return 0;
}
