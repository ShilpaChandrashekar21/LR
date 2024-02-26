checkout()
{
	web_url("newOrderForm", 
		"URL=https://jpetstore.aspectran.com/order/newOrderForm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/cart/viewCart", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
