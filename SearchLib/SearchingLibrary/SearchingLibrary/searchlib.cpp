#include "searchlib.h";
namespace searchingalgos
{
	int Search::LinearSearch(int DataArray[], int Size, int SearchElement)
	{
		int flag = 0, position = 0;
		for (int i = 0; i < Size; i++)
		{
			if (SearchElement == DataArray[i])
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
		{
			//cout << "Found at position " << position + 1 << " in the array" << endl;
			return position;
		}
		else
		{
			cout << "Not found" << endl;
			return -1;
		}
	}
	int Search::BinarySearch(int DataArray[], int Size, int SearchElement)
	{
		int flag = 0;
		int position = 0;
		int upperBound = Size - 1;
		int lowerBound = 0;
		int midPoint = 0;
		int Temp = 0;
		
		for (int i = 0; i < Size; i++)
		{
			if (DataArray[i] == SearchElement)
				position = i;
		}

		for (int i = 0; i < Size; i++)
		{
			for (int j = 0; j < Size; j++)
			{
				if (DataArray[i] < DataArray[j])
				{
					Temp = DataArray[i];
					DataArray[i] = DataArray[j];
					DataArray[j] = Temp;
				}
			}
		}

		while (flag == 0)
		{
			if (upperBound < lowerBound)
			{
				flag = 0;
				break;
			}

			midPoint = lowerBound + ((upperBound - lowerBound) / 2);

			if (DataArray[midPoint] == SearchElement)
			{
				flag = 1;
				//position = midPoint;
				break;
			}
			else
			{
				if (DataArray[midPoint] < SearchElement)
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
			//cout << "Found at position: " << position << endl;
			return position;
		}

		else
		{
			//cout << "Not found" << endl;
			return -1;
		}

	}
	int Search::InterPolationSearch(int Array[], int Size, int SearchElement)
	{
		int Temp = 0;
		int lowerBound = 0, upperBound = (Size - 1);
		int position = -1;
		
		for (int i = 0; i < Size; i++)
		{
			if (Array[i] == SearchElement)
				position = i;
		}

		for (int i = 0; i < Size; i++)
		{
			for (int j = 0; j < Size; j++)
			{
				if (Array[i] < Array[j])
				{
					Temp = Array[i];
					Array[i] = Array[j];
					Array[j] = Temp;
				}
			}
		}

		while (lowerBound <= upperBound && SearchElement >= Array[lowerBound] && SearchElement <= Array[upperBound])
		{

			int pos = lowerBound + (((double)(upperBound - lowerBound)/(Array[upperBound] - Array[lowerBound]))*(SearchElement - Array[lowerBound]));

			if (Array[pos] == SearchElement)
			{
				return position;
			}
			if (Array[pos] < SearchElement)
				lowerBound = pos + 1;
			else
				upperBound = pos - 1;
		}
		return -1;
	}
}