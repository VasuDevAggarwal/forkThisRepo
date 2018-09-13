// STL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<class T>
void display(T &v)
{
	T::iterator itr;
	/*for(int i = 0;
		  i<v.size();
		   i++    )
	{

		cout<<v[i]<<endl;
	}*/

	for(itr = v.begin();itr!=v.end();itr++)
		cout<<*itr<<endl;
}
int main(int argc, _TCHAR* argv[])
{

	vector<int> v(10);
	vector<int>::iterator itr;
	*(v.begin()) = 0;
	*(v.end() - 1) = 9;

	int i = 1;
	for(itr = v.begin()+1 ; itr != v.end()-1; itr++)
	{
		*itr = i++;
	}
	
	cout<<"print vector...."<<endl;
	display(v);
	cout<<"----------------------"<<endl;
	
	cout<<"use find() to find position of a element"<<endl;
	int var;
	cout<<"Enter int to find"<<endl;
	cin>>var;
	vector<int>::iterator itr2;
	itr2 = find(v.begin(),v.end(),var);
	if(itr2!=v.end())
		cout<<"Element found at index "<<(itr2-v.begin())<<endl;  //itr can be subtracted
	else
		cout<<"Elemnt not found"<<endl;
	cout<<"----------------------"<<endl;


	cout<<"use count() to count occurence"<<endl;
	v.insert(v.end(),4,25);
	cout<<"enter element to count"<<endl;
	cin>>var;
	cout<<count(v.begin(),v.end(),var);
	cout<<endl<<"----------------------"<<endl;
	
	
    cout<<"Use merge"<<endl;

	int arr[3] = {1,3,5};
	list<int> ls;
	list<int> ls2(6);
	ls.push_back(2);
	ls.push_back(4);
	ls.push_back(6);
	merge (arr,arr+3,ls.begin(),ls.end(),ls2.begin());
	display(ls2);
	cout<<"-------------------------------------"<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;

}

