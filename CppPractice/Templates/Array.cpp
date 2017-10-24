#include "stdafx.h"
#include "Array.h"
template<class T,int size>
T Array<T,size>::finMin()
{
	T temp = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
		}
	}

	return temp;
}