class invent2;
class invent1
{
	 int code;
	 int item;
	 float price;
     
	public:
		invent1(int code,int item, float price)
			:code(code),
			 item(item),
			 price(price)
		{};
		void putdata();
		int getcode();
		int getitem();
		float getprice();
		operator float();

		operator invent2();


};