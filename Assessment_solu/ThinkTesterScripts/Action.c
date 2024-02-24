Action()
{

	/* login */

	lr_think_time(47);
	
	web_reg_save_param_ex(
		"ParamName=auth_token",
		"LB=\"token\":\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"{uname}\",\"password\":\"{pass}\"}", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	web_add_auto_header("Authorization","Bearer {auth_token}");

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(6);

	

	web_set_sockets_option("TLS_SNI", "1");

	/* add new contact */

	lr_think_time(8);

	web_url("addContact", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(10);

	web_custom_request("contacts_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"firstName\":\"{fname}\",\"lastName\":\"{lname}\"}", 
		LAST);

	web_url("contactList_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
