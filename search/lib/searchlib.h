#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

namespace searchingalgos
{
	class Search
	{
	public:
		static int LinearSearch(int DataArray[], int Size, int SearchElement);
		static int BinarySearch(int DataArray[], int Size, int SearchElement);
	};
}
