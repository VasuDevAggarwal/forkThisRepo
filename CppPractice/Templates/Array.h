#include <algorithm>
using namespace std;
template<class T,int size>
class Array
{
protected:
	T arr[size];
public:
	Array()
	{
		fill_n(arr,size,0);
	}

	Array(const int* anotherArray)
	{
		for(int i =0;i<size;i++)
			arr[i] = anotherArray[i];
	}

	T finMin();
};