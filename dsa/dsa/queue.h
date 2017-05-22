/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/

#pragma once
#include "commonheaders.h"

namespace datastructures
{
	class queue
	{
		int front;
		int rear;
		int * dataArray;
		int sizeOfQueue;
	public :
		queue(); //constructor - defines the front and rear to default values when the object is created
		int insert(int data); //inserts data from rear
		int setSize(int size); //sets the size of the queue by creating a dynamic array
		void display(); //displays the queue
		int deleteData();//deletes data from front
	};
}