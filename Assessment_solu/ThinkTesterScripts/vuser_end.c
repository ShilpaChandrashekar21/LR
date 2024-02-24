vuser_end()
{

	/* logout */

	lr_think_time(14);

	web_url("logout", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("thinking-tester-contact-list.herokuapp.com_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}