#include <iostream>
template<class T>
class MyVector
{
	T *vector;
	int size;

public:
	MyVector(T size=10)
	{
		this -> size = size;
		vector = new T[size];
	}

	MyVector(const T *arr,int size)
	{

		this->size = size;
		vector = new T[size];
		for(int i =0;i<size;i++)
			vector[i] = arr[i];
	}

	void Multiply(int );
	template<class T>
	friend std::ostream& operator<<(std::ostream &,MyVector<T> &);
	void showVector();

	T& operator[](int);

};




