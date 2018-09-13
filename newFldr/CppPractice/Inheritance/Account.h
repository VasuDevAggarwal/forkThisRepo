#pragma once
#include "Person.h"
class Account:virtual public Person
{
protected:
	double pay;
public:
	Account():
		pay(0)
	{};
	Account(double pay,int code,char *name):Person(name,code),
		pay(pay)
		
	{};
	void update_pay(double);
	double get_pay();

};