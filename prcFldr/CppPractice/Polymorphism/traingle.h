#include "shape.h"
class triangle:public shape
{
protected:
public:
	double area()
	{
		return (1/2.0)*d1*d2;
	}
};

