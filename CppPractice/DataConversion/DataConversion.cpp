// DataConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include "invent1.h"
#include "invent2.h"
using namespace std;
int main(int argc, _TCHAR* argv[])
{
	invent1 s1(100,5,120.0);
	invent2 d1;

	/* invent1 to float*/
	float total_value;
	total_value = s1;
	cout<<total_value<<endl;

	/*invent1 to invent2*/
	d1 = s1;
	d1.putdata();
	return 0;
}

