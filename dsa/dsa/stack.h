/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/

#include "commonheaders.h"

namespace datastructures
{
	class stack
	{
	private:
		int sizeOfStack;
		int * dataArray;
		int top;
	public:
		stack(); //constructor - it sets default value for top
		int push(int val); //sets the size of the stack
		int setSize(int size); //pushes data into the stack
		int peek(); //peeks into the stack and returns the first element in the stack
		int pop(); //pops the data from the top of the stack
	};
}

