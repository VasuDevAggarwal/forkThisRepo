#include "stdafx.h"
#include "Account.h"
double Account::get_pay()
{
	return this->pay;
}
void Account::update_pay(double newPay)
{
	this->pay = newPay;
}