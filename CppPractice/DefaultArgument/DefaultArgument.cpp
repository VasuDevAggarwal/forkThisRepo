// DefaultArgument.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

inline int sumOfThreeNums(int a=1, int b=2, const int c=3)
{
	
          //  c = 10;	  //error, since c is const arguement
	 return a+b+c;
}

int main(int argc, char *argv[])
{

	cout<<sumOfThreeNums()<<endl;
	cout<<sumOfThreeNums(3)<<endl;
	cout<<sumOfThreeNums(3,4,5)<<endl;
	return 0;
}

