#pragma once
#include "Account.h"
#include "Admin.h"
class master:public Account,public Admin
{

public:
	
	master(){};
	master(char *name, int code, double pay, float experience):
		Person(name,code),
		Account(pay,code,name),
		Admin(experience,code,name)
	{};
};
