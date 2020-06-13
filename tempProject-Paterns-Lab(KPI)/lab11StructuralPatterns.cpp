#include "lab11StructuralPatterns.h"

void SystemPacade::userOrderTicket()
{
	std::cout << "Facade ordered ticket:" << std::endl;
	System system;
	system.checkUserInfo();
	system.checkMoneyTransfer();
	system.changeBdTicketInfo();
	system.sendTicketEMail();
}

void SystemPacade::userCanceledTicket()
{
	std::cout << "Facade canceled order:" << std::endl;
	System system;
	system.sendCancelMessage();
	Moder moder;
	moder.checkClientInfo();
	moder.changeOrderInfo();
	moder.reportOrder();
	moder.cancelOrder();
}

void System::checkUserInfo()
{
	std::cout << "User info checked" << std::endl;
}

void System::checkMoneyTransfer()
{
	std::cout << "Money transfer checked" << std::endl;
}

void System::changeBdTicketInfo()
{
	std::cout << "Bd info changed" << std::endl;
}

void System::sendTicketEMail()
{
	std::cout << "Ticket sent by email" << std::endl;
}

void System::sendCancelMessage()
{
	std::cout << "Cancel message sent" << std::endl;
}

void Moder::checkClientInfo()
{
	std::cout << "Client info checked" << std::endl;
}

void Moder::changeOrderInfo()
{
	std::cout << "Order info changed" << std::endl;
}

void Moder::reportOrder()
{
	std::cout << "Order reported" << std::endl;
}

void Moder::cancelOrder()
{
	std::cout << "Order canceled" << std::endl;
}

void showStructuralMethodPatern()
{
	SystemPacade pacade;
	pacade.userOrderTicket();

	pacade.userCanceledTicket();
}
