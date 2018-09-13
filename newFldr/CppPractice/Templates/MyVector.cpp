#include "stdafx.h"
#include "MyVector.h"
#include <iostream>
using namespace std;


template<class T>
void MyVector<T>::Multiply(int factor)
{
	for(int i = 0; i<size ; i++)
		vector[i] *= factor;
}
template<class T>
void MyVector<T>::showVector()
{
	cout<<"(";
	for(int i = 0; i<size; i++)
		cout<<vector[i]<<",";
	cout<<"\b"<<")";
}
template<class T>
T& MyVector<T>::operator[](int pos)
{
	return vector[pos];
}


template<class T>
std::ostream& operator<<(std::ostream &out,MyVector<T> &vector)
{
	out<<"(";
	for(int i = 0; i<vector.size; i++)
		out<<vector[i]<<",";
	out<<"\b"<<")";
	return out;
}