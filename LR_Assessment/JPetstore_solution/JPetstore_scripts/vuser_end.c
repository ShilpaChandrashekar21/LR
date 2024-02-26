vuser_end()
{
//	web_set_sockets_option("SSL_VERSION", "AUTO");
//
//	web_add_cookie("_ga=GA1.1.1462761696.1708934395; DOMAIN=jpetstore.aspectran.com");
//
//	web_add_cookie("JSESSIONID=bgmhrx299iyr1ejmor9wae0fl325743.n0; DOMAIN=jpetstore.aspectran.com");
//
//	web_add_cookie("cf_clearance=PBmECm8sJvv73h.fjklkHh1Te53QlnLHl71Pxs3wWlo-1708936370-1.0-AQJux6AkOOItn3CNfTK4uEIk3cpprJWnA5uF3wTutBPesuGRn4hHtI29C+/Zl+P1cSKpzlZzeUP8+NRoEZ8klFg=; DOMAIN=jpetstore.aspectran.com");
//
//	web_add_cookie("_ga_PBGW9BF7P6=GS1.1.1708934394.1.1.1708937001.0.0.0; DOMAIN=jpetstore.aspectran.com");

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
