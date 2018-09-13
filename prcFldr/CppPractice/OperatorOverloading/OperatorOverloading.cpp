// OperatorOverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complex.h"

using namespace std;
int main(int argc, _TCHAR* argv[])
{

	 Complex c1, c2(2,3);

	 cout<<"Applying unary minus....."<<endl;
	 cout << "before unary minus"<<endl;
	 cout <<c2.real<<"   "<<c2.imag<<endl;
	 c2 = -c2;
	 cout << "after unary minus"<<endl;
	 cout <<c2.real<<"   "<<c2.imag<<endl;
	 cout<<"----------------------------------"<<endl;


	 cout << "Applying binary addition...."<<endl;
	 Complex c3(1,1);
	 Complex c4 = c2 + c3;
	 cout <<c4.real<<"   "<<c4.imag<<endl;
	 cout<<"----------------------------------"<<endl;


	 cout << "Applying binary substraction using friend function...."<<endl;
	 Complex c5  = c2 - c3;
	 cout <<c5.real<<"   "<<c5.imag<<endl;
	 cout<<"----------------------------------"<<endl;

	 cout << "Applying binary addition of (int,Complex) version...."<<endl;
	 Complex c6 = 1 + c3;
	 cout <<c6.real<<"   "<<c6.imag<<endl;
	 cout<<"----------------------------------"<<endl;

	 cout << "Applying binary addition of (Complex,int) version...."<<endl;
	 Complex c7 = c3 + 1; 
	 cout <<c7.real<<"   "<<c7.imag<<endl;
	 cout<<"----------------------------------"<<endl;

	 cout << "Applying overloaded cout" << endl;
	 cout<<c7<<endl;
	 cout<<"----------------------------------"<<endl;
	
	return 0;
}

