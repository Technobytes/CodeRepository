#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<searchlib.h>
using namespace SearchingAlgorithms;
using namespace std;

int main()
{
	int a[10],i=0,search,flag = 0,position = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << "Which node you want to search : ";
	cin >> search;
	int b = Search::LinearSearch(a,10,search);





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
}

