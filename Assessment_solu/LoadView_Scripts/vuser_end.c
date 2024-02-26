vuser_end()
{

	/* logout */

	web_add_cookie("_omappvs=1708749870220; DOMAIN=www.loadview-testing.com");

	web_add_cookie("_ga_4GPKJR6BK2=GS1.1.1708749726.1.1.1708750056.60.0.0; DOMAIN=www.loadview-testing.com");

	lr_think_time(40);

	web_url("www.loadview-testing.com", 
		"URL=https://www.loadview-testing.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.loadview-testing.com/demo/east/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}