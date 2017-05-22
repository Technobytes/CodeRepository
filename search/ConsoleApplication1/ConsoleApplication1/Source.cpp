#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<searchlib.h>
using namespace searchingalgos;
using namespace std;

int main()
{
	int a[10], i = 0, search, flag = 0, position = 0,size = 10;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "Which node you want to search : ";
	cin >> search;

	//cout << "Linear Search : " << c << endl;
	//cout << "Binary Search : " << b << endl;
	if (c == 1)
		cout << "found in linear search" << endl;
	else
		cout << "not found in linear search" << endl;

	if (b == 1)
		cout << "found in Binary search" << endl;
	else
		cout << "not found in Binary search" << endl;


	/*---------------------------------------------- Logic -> "Binary Search" in library 
	int Flag = 0;
	int UpperBound = Size - 1;
	int LowerBound = 0;
	int MidPoint = 0;
	int Temp = 0;
	int SearchElement = search;
	//Sort the array to make it work for Binary search
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			if (DataArray[i] > DataArray[j])
			{
				Temp = DataArray[i];
				DataArray[i] = DataArray[j];
				DataArray[j] = Temp;
			}
		}
	}

	while (Flag == 0)
	{
		if (UpperBound < LowerBound)
		{
			Flag = 0;
			break;
		}

		MidPoint = LowerBound + ((UpperBound - LowerBound) / 2);

		if (DataArray[MidPoint] < SearchElement)
		{
			LowerBound = MidPoint + 1;
			Flag = 0;
		}

		if (DataArray[MidPoint] > SearchElement)
		{
			UpperBound = MidPoint - 1;
			Flag = 0;
		}

		if (DataArray[MidPoint] == SearchElement)
		{
			Flag = 1;
			break;
		}
	}

	if (Flag == 1)
	{
		cout << "f" << endl;
		//return 1;
	}

	else
	{
		cout << "n" << endl;
		//return 0;
	}
	//----------------------------------------------*/
/*
	int upperBound = size - 1;
	int lowerBound = 0;
	int midPoint = 0;

	while (flag == 0)
	{

		if (upperBound < lowerBound)
		{
			flag = 0;
			break;
		}

		midPoint = lowerBound + ((upperBound - lowerBound) / 2);
		
		if (a[midPoint] == search)
		{
			flag = 1;
			position = midPoint + 1;
			break;
		}
		else
		{
			if (a[midPoint] < search)
			{
				lowerBound = midPoint + 1;
				flag = 0;
			}

			else
			{
				upperBound = midPoint - 1;
				flag = 0;
			}
		}

		
	}

	if (flag == 1)
	{
		cout << "Found at position: " << position << endl;
	}

	else
	{
		cout << "Not found" << endl;
	}
*/

// Linear search logic in library
	/*for (i = 0; i < 10; i++)
	{
	if (search == a[i])
	{
		flag = 1;
		position = i;
		break;
	}
	else
	{
		flag = 0;
	}
	}

	if (flag == 1)
	cout << "Found at position " << position + 1 << " in the array" << endl;
	else
	cout << "Not found" << endl;
	*/
	system("pause");

	return 0;
}

