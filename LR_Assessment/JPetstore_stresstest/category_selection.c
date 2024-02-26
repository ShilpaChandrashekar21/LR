category_selection()
{
	web_url("DOGS", 
		"URL=https://jpetstore.aspectran.com/catalog/categories/DOGS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/catalog/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
