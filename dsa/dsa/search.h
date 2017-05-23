/*
Code written and published by Suraj U Dixit.
*/

#include"commonheaders.h"

namespace searchingAlgorithms
{
	class Search
	{
	public:
		static int LinearSearch(int DataArray[], int Size, int SearchElement); //linear search
		static int BinarySearch(int DataArray[], int Size, int SearchElement); //binary search
		static int InterPolationSearch(int DataArray[], int Size, int SearchElement); //interpolation search
		static int InsertKeyValue(int key, int data); //inserts the key and value in table
		static int DisplayHash(); //display hash table
		static int SearchHash(int key); //search the data based on key 
		static int DeleteHash(int key); //delete the data based on key
	};
}

