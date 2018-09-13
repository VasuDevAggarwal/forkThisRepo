#include "stdafx.h"
#include "Person.h"
#include <string>
Person::Person(const char *name, int code)
{
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name,strlen(name)+1,name);
	this->code = code;
}
Person::Person(const Person &p)
{
	delete this->name;

	this->name = new char[strlen(p.name)+1];
	strcpy_s(this->name,strlen(p.name)+1 ,p.name);
	this->code = p.code;

}

void Person::update_code(int newCode)
{
	this->code =  newCode;
}

void Person::update_name(const char *newName)
{
	delete this->name;
	this->name = new char[strlen(newName)+1];
	strcpy_s(this->name,strlen(newName)+1 ,newName);

}

int Person::getCode()
{
	return this->code;
}

char * Person::getName()
{
	return this->name;
}