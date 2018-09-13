#ifndef SHAPE_H
#define SHAPE_H
class shape
{
protected:
	double d1,d2;
public:
	void get_data(double d1,double d2=0)
	{
		this->d1 = d1;
		this->d2 = d2;
	};
	virtual double area()=0;
};
#endif