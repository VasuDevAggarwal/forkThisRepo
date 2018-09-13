// File_IO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, _TCHAR* argv[])
{
    
	vector<int> v;
	fstream file;
	file.open("Source1.txt",ios::in);
	int a;
	if(file.good())
	{
		while (file>>a)
		{
			v.push_back(a);
		}
	}
	file.clear();
	file.close();

	file.open("Source2.txt",ios::in);
	if (file.good())
	{
		while (file>>a)
		{
			v.push_back(a);
		}
	}
	file.clear();
	file.close();


	sort(v.begin(),v.end());

	file.open("Target.txt",ios::out);
	if(file.good())
	{
		for(unsigned int i=0; i < v.size() ; i++)
		{
			file<<v[i]<<endl;
		}
		file.clear();
		file.close();
	}
	return 0;
}

