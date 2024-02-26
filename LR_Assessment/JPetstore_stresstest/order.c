order()
{
	
	web_submit_data("newOrder", 
		"Action=https://jpetstore.aspectran.com/order/newOrder", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/order/newOrderForm", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=paymentForm", "Value=true", ENDITEM, 
		"Name=billingForm", "Value=true", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCard", "Value=999999999999999", ENDITEM, 
		"Name=expiryDate", "Value=12/2019", ENDITEM, 
		"Name=billToFirstName", "Value={fname}", ENDITEM, 
		"Name=billToLastName", "Value={lname}", ENDITEM, 
		"Name=billAddress1", "Value={address1}", ENDITEM, 
		"Name=billAddress2", "Value={address2}", ENDITEM, 
		"Name=billCity", "Value={city}", ENDITEM, 
		"Name=billState", "Value={state}", ENDITEM, 
		"Name=billZip", "Value={pin}", ENDITEM, 
		"Name=billCountry", "Value={country}", ENDITEM, 
		LAST);
	


	web_submit_data("submitOrder", 
		"Action=https://jpetstore.aspectran.com/order/submitOrder", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.aspectran.com/order/newOrder", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=confirmed", "Value=true", ENDITEM, 
		LAST);
	return 0;
}
