/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/

#include "stack.h"

namespace datastructures
{
	//constructor - it sets default value for top
	stack::stack()
	{
		top = -1;
	}

	//sets the size of the stack
	int stack::setSize(int size)
	{
		sizeOfStack = size;
		if (dataArray = new int[size])
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}

	//pushes data into the stack
	int stack::push(int val)
	{
		//stack full
		if (top == sizeOfStack - 1)
		{
			cout << "stack overflow" << endl;
			return -1;
		}
		else
		{
			dataArray[++top] = val;
			return 0;
		}
	}

	//this Speeks into the stack and returns the first element in the stack
	int stack::peek()
	{
		return dataArray[top];
	}

	//pops the data from the top of the stack
	int stack::pop()
	{
		//empty stack
		if (top == -1)
		{
			cout << "stack underflow" << endl;
			return -1;
		}
		else
		{
			return dataArray[top--];
		}
	}

}