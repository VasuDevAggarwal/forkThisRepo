#pragma once
#include "Person.h"
class Admin : virtual public Person
{
protected:
	float experience;
public:
	Admin():
		experience(0)
	{};
	Admin(float experience,int code,char *name):Person(name,code),experience(experience)	
	{
			//this->experience = experience;
	};
	void update_exp(float);
	float get_exp();

};