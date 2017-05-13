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
		static int InterPolationSearch(int DataArray[], int Size, int SearchElement);
		static int InsertKeyValue(int key, int data);
		static int DisplayHash();
		static int SearchHash(int key);
		static int DeleteHash(int key);
	};
}

/*

CopyRight Suraj.U.Dixit. All rights reserved

*/