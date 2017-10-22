#include "stdafx.h"
#include "Admin.h"
void Admin::update_exp(float newExp)
{
	this->experience = newExp;
}

float Admin::get_exp()
{ 
	return this->experience;
}
