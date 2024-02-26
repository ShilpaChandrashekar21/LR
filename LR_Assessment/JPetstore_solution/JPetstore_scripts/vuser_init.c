vuser_init()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("jpetstore.aspectran.com", 
		"URL=https://jpetstore.aspectran.com/catalog/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
