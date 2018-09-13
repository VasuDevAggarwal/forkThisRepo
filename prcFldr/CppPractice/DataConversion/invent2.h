#include "invent1.h"
class invent2
{
	 
	 int item;
	 float price;
     
	public:
		invent2():
			item(0),
			price(0)
		{};
		invent2(int item, float price)
			:item(item),
			 price(price)
		{};
		void putdata();
		
		//invent2(invent1);

};