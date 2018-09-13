// InlineFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

inline float mul (float x, float y) { return x * y; }
inline double div (double x, double y) { return x / y ;} 

int main(int argc, char *argv[])
{

	float a = 12.345;
	float b = 9.82;

	cout<<mul(a,b)<<endl;
	cout<<div(a,b)<<endl;


	return 0;
}

