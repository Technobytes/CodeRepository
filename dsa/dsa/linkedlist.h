/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/

#pragma once
#include "commonheaders.h"

namespace datastructures
{
	class linkedList
	{
	private:
		int info; //data in the node
		linkedList * next; //address of next node
		linkedList * start; //keeps the data about the number of nodes and address of the first node
	public:
		linkedList();
		linkedList * createNode();
		int insertAtStart(int data);
		int insertAtEnd(int data);
		int deleteAtStart();
		int deleteAtEnd();
		void displayList();
		int insertAtPosition(int position, int data);
		int deleteAtPosition(int position);
	};
}
