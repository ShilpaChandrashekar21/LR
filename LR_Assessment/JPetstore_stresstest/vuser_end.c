vuser_end()
{
	web_url("catalog", 
		"URL=https://jpetstore.aspectran.com/catalog/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/order/viewOrder?orderId=15606&submitted=true", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
