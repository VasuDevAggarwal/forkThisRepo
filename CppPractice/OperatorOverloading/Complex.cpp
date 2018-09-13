#include "stdafx.h"
#include <iostream>
#include "Complex.h"
//using namespace std;
Complex::Complex()
	:real(0),imag(0)
{
};
Complex::Complex(float real,float imag)
	:real(real),imag(imag)
{
};
Complex Complex::operator-()
{
	return Complex(-this->real,-this->imag);
}
Complex Complex::operator+(Complex other)
{
	return Complex(this->real + other.real, this->imag + other.imag);
}
Complex::~Complex()
{
}

//friend functions

Complex operator-(Complex first, Complex second)
{
	return Complex(first.real - second.real, first.imag - second.imag);
}

Complex operator+(int a, Complex obj)
{
	return Complex(a + obj.real, obj.imag);
}

Complex operator+(Complex obj, int a)
{
	return Complex(a + obj.real, obj.imag);
}

ostream & operator<< (ostream &out, Complex obj)
{
	out<<obj.real<<"  "<<obj.imag;
	return out;
}
