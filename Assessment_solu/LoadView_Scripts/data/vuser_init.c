/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.19045&devicefamily=desktop&installdate=1666087002&clientversion=121.0.2277.128&experimentationmode=2&scpguard=1&scpfull=0&scpver=15", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("pglt-edgeChromium-ntp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("pglt-edgeChromium-dhp=41; DOMAIN=ntp.msn.com");

	web_add_cookie("sptmarket=en-US||in|en-in|en-in|en||RefA=2F1E55C27B004195A5112589929F7010.RefC=2023-02-13T11:32:59Z; DOMAIN=ntp.msn.com");

	web_add_cookie("USRLOC=CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240224042455|SRC=I&BID=MjQwMjI0MDk1NDU1XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ntp.msn.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=ntp.msn.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=15705868-5fea-4f69-93e0-36fa8e3e9a44; DOMAIN=ntp.msn.com");

	web_add_cookie("MUIDB=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=ntp.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=ntp.msn.com");

	web_add_cookie("MSFPC=GUID=ffc904e9e1d449d7b57b4283d216deb5&HASH=ffc9&LV=202402&V=4&LU=1708663980347; DOMAIN=ntp.msn.com");

	web_add_cookie("msaoptout=0; DOMAIN=ntp.msn.com");

	web_add_cookie("ai_session=qSNHjatYfWN6GtKPaXmS6R|1708748679983|1708748679983; DOMAIN=ntp.msn.com");

	web_url("ntp", 
		"URL=https://ntp.msn.com/edge/ntp?locale=en-US&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("demo", 
		"URL=https://www.loadview-testing.com/demo/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=121.0.2277.128&lang=en-US&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_2", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":7,\"body\":{\"elapsed_time\":11354,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"\",\"status_code\":0,\"type\":\"abandoned\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\""
		"}]", 
		LAST);

	web_custom_request("favicon.ico", 
		"URL=https://assets.msn.com/statics/icons/favicon.ico", 
		"Method=HEAD", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("inlinks.js", 
		"URL=https://jscloud.net/x/26432/inlinks.js", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_2", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=HmjAMs4wx0w61mJ74UUsktj%2FzrnFqZKYIQnwI%2F2fs0b4TJRZ036MPTdbijEI7bwhd6TI%2BjdO%2BJQ8yAyYz%2BCKivQ2ffeiCXQeBfIN%2FdFkFKA95EEH8TVoPegD3cSJYg4jhzQvPIqrTumvFA%3D%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_3", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=HmjAMs4wx0w61mJ74UUsktj%2FzrnFqZKYIQnwI%2F2fs0b4TJRZ036MPTdbijEI7bwhd6TI%2BjdO%2BJQ8yAyYz%2BCKivQ2ffeiCXQeBfIN%2FdFkFKA95EEH8TVoPegD3cSJYg4jhzQvPIqrTumvFA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":65,\"body\":{\"elapsed_time\":979,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://www.loadview-testing.com/demo/\",\"sampling_fraction\":1.0,\"server_ip\":\"162.159.135.42\",\"status_code\":403,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://www.loadview-testing.com/wp-content/plugins/sitepress-multilingual-cms/res/flags/de.png\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, "
		"like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/121.0.0.0\"}]", 
		LAST);

	web_url("BBGeThK", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BBGeThK", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BB1gzN7f", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BB1gzN7f", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AA1cD26x", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/AA1cD26x", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("USRLOC=CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240224042455|SRC=I&BID=MjQwMjI0MDk1NDU1XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=assets.msn.com");

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=assets.msn.com");

	web_add_cookie("MUIDB=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=assets.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=assets.msn.com");

	web_url("ntp_2", 
		"URL=https://assets.msn.com/service/news/feed/pages/ntp?User=m-3FB288A77D7E6FC13A379A107C2C6E33&activityId=03268357-B8FD-48AD-A89F-9D2048D6B1BB&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&audienceMode=adult&caller=bgtask&cm=en-in&column=c3&contentType=article,video,slideshow,webcontent&dhp=1&duotone=true&edgExpMask=131072&infopaneCount=17&it=app&memory=8&newsSkip=0&newsTop=48&ocid=anaheim-ntp-feeds&overlay=0&pgc=41&prerender=1&promotion=1697179646278_l_1_2&scn=APP_ANON&timeOut=2000&vpSize="
		"1232x572&wposchema=byregion", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("AA2qT4f", 
		"URL=https://assets.msn.com/breakingnews/v1/cms/api/amp/article/AA2qT4f", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Rewards", 
		"URL=https://assets.msn.com/service/News/Users/me/Rewards?apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=03268357-B8FD-48AD-A89F-9D2048D6B1BB&ocid=rewards-peregrine&cm=en-in&it=app&user=m-3FB288A77D7E6FC13A379A107C2C6E33&scn=APP_ANON&version=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("w", 
		"URL=https://telemetry.jivosite.com/w", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"event\":\"loader_loaded\",\"widget_id\":\"5krV1CifaF\",\"t\":1708749725821,\"param1\":\"117.3.0\",\"shard\":\"main\"}", 
		LAST);

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/g/collect?v=2&tid=G-4GPKJR6BK2&cid=37313771.1708749727&gtm=45je42l0v889420970z8868681018za220&aip=1&dma=0&gcd=13l3l3l3l1&npa=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=335627939&t=pageview&_s=1&dl=https%3A%2F%2Fwww.loadview-testing.com%2Fdemo%2F&ul=en-us&de=UTF-8&dt=Live%20Demos%20-%20LoadView%20Performance%20Engineering%20Team&sd=24-bit&sr=1280x720&vp=1257x606&je=0&_u=YADAAUABAAAAACAAI~&jid=1086117748&gjid=398144134&cid=37313771.1708749727&tid=UA-4173828-16&_gid=1623097521.1708749729&_r=1&gtm=457e42l0za220&gcd=13l3l3l3l1&dma=0&jsscut=1&z=1130172358", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("5krV1CifaF", 
		"URL=https://node-ya-9.jivosite.com/widget/status/838424/5krV1CifaF?rnd=0.6998953374747459", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.loadview-testing.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_reg_find("Text=LoadView", 
		LAST);

	web_reg_find("Text=LoadView", 
		LAST);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tpurl\thttps://www.loadview-testing.com/demo/\n", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tptitle\tLive Demos - LoadView Performance Engineering Team\n", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tnavcount\t1\n", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tvisible\ttrue\n", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=\t\t\tstatus\ton_site\n", 
		"IsBinary=0", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://manager.eu.smartlook.cloud/rec/setup-recording/website", 
		"Origin=https://www.loadview-testing.com", 
		"SecWebSocketExtensions=permessage-deflate; client_max_window_bits", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	return 0;
}
