// Polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "traingle.h"
#include "rectangle.h"
#include "circle.h"


using namespace std;

int main(int argc, _TCHAR* argv[])
{
	double d1,d2;

	cout<<"Enter shape (triangle/rectangle/circle)";
	char shapeName[20];
	cin>>shapeName;

	cout<<"Enter dimensions of "<<shapeName<<endl;
	if(!strcmp("circle",shapeName))
		cin>>d1;
	else
	    cin>>d1>>d2;

	shape *shapePtr;

	if(!strcmp("triangle",shapeName))
		shapePtr = new triangle;
	else if(!strcmp("rectangle",shapeName))
		shapePtr = new rectangle;
	else if(!strcmp("circle",shapeName))
		shapePtr = new circle;

	if(!strcmp("circle",shapeName))
		shapePtr->get_data(d1);
	else
	    shapePtr->get_data(d1,d2);

	cout<<shapePtr->area()<<endl;


	return 0;
}

