// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "master.h"
#include <iostream>
using namespace std;
int main(int argc, _TCHAR* argv[])
{
     master m1("Pawan",1,10000,1.2f);
	 cout<<"Before any update...."<<endl;
	 cout<<"code: "<<m1.getCode()<<endl;
	 cout<<"name: "<<m1.getName()<<endl;
	 cout<<"pay: "<<m1.get_pay()<<endl;
	 cout<<"experience:"<<m1.get_exp()<<endl;


	 cout<<"Let's apply some changes..."<<endl;

	 m1.update_code(2);
	 m1.update_name("Pawan Kataria");
	 m1.update_pay(5000.20);
	 m1.update_exp(1.25f);

	 cout<<"code: "<<m1.getCode()<<endl;
	 cout<<"name: "<<m1.getName()<<endl;
	 cout<<"pay: "<<m1.get_pay()<<endl;
	 cout<<"experience:"<<m1.get_exp()<<endl;
	 return 0;
	
}

