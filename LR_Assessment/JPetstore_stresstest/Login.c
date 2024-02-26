Login()
{
	web_submit_data("signon", 
		"Action=https://jpetstore.aspectran.com/account/signon", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/account/signonForm", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=referer", "Value=", ENDITEM, 
		"Name=username", "Value={uname}", ENDITEM, 
		"Name=password", "Value={pass}", ENDITEM, 
		LAST);
	return 0;
}
