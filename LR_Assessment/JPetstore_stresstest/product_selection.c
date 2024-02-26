product_selection()
{
	web_url("K9-BD-01", 
		"URL=https://jpetstore.aspectran.com/catalog/products/K9-BD-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/catalog/categories/DOGS", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
