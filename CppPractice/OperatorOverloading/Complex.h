using namespace std;
class Complex
{
public:

	float real;
	float imag;
	Complex();
	Complex(float real,float imag);

	Complex operator-();
	Complex operator+(Complex other);

	friend Complex operator-(Complex first, Complex second);
    friend Complex operator+(int a, Complex obj);
	friend Complex operator+(Complex obj, int a );
	friend ostream & operator<< (ostream & , Complex );
	~Complex();

private:

};

