#pragma once

#include <iostream>

void showStructuralMethodPatern();

class SystemPacade
{
public:
	void userOrderTicket();
	void userCanceledTicket();
};

class System
{
public:
	void checkUserInfo();
	void checkMoneyTransfer();
	void changeBdTicketInfo();
	void sendTicketEMail();
	void sendCancelMessage();
};

class Moder
{
public:
	void checkClientInfo();
	void changeOrderInfo();
	void reportOrder();
	void cancelOrder();
};