cart()
{
	web_url("addItemToCart", 
		"URL=https://jpetstore.aspectran.com/cart/addItemToCart?itemId=EST-6", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/catalog/products/K9-BD-01", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
