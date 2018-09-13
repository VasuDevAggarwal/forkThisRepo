// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Array.cpp"
#include "MyVector.cpp"
#include <iostream>
using namespace std;

int main(int argc, _TCHAR* argv[])
{

	cout<<"Min of array.............."<<endl;
	int a[10] = {1,3,4,5,6,7,-1,3,4,33};
	Array<int,10> arr = a;
	cout<<arr.finMin()<<endl;
	cout<<"--------------------------"<<endl;


	cout<<"Testing my Vector class"<<endl;
	MyVector<int> vector(a,10);
	//multiply vector
	vector.Multiply(2);
	
	
	//display vector
	vector.showVector();
	cout<<endl<<"now print using overloaded <<"<<endl<<vector;
	cout<<endl;



	//access individual member
	cout<<vector[3];
	cout<<endl;
	
	
	//change individual member
	vector[3] = 99;
	cout<<vector[3];


	


	return 0;
}



