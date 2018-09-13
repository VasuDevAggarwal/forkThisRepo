#include "stdafx.h"
#include "Data.h"
#include <iostream>
using namespace std;
void Data::get_data()
{
	 cout<<"Enter two double values for d1 and d2"<<endl;
	 cin>>d1;
	 if(cin.fail())
		 throw "Improper Input";
	 cin>>d2;
	 if(cin.fail())
		 throw "Improper Input";
}

double Data::divide()
{
	if(d2==0)
		throw "Divide by zero";
	 return d1/d2;
}