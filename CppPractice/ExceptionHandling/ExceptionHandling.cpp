// ExceptionHandling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Data.h"
#include <iostream>
using namespace std;
int main(int argc, _TCHAR* argv[])
{

	Data obj;
	double res;
	try
	{
	  obj.get_data();
      res = obj.divide();
      cout<<res;
	}
	catch(const char *error)
	{
		cout<<error;
	}
	
	return 0;
}

