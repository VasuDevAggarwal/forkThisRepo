class Data
{
protected:
	double d1,d2;
public:
	Data():
		d1(0),
		d2(0)
	{};
	Data(double d1,double d2):
		d1(d1),
		d2(d2)
	{};

	void get_data();
	double divide();
};