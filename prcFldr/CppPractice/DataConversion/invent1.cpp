#include "stdafx.h"
#include "invent2.h";
#include <iostream>
using namespace std;
void invent1::putdata()
{
	cout<<"code:  "<<code<<endl;
	cout<<"item:  "<<item<<endl;
	cout<<"price: "<<price<<endl;
}

int invent1::getcode()
{
	return code;
}

int invent1::getitem()
{
	return item;
}

float invent1::getprice()
{
	return price;
}
invent1::operator float()
{
	return price*item;
}
invent1::operator invent2()
{
	return invent2(item,price);
}
