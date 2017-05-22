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
		linkedList * createNode(); //allocates memory and creates a new node
		int insertAtStart(int data); //inserts at the start of linked list
		int insertAtEnd(int data); //inserts the data at the end of the linkedlist
		int deleteAtStart(); //deletes a node from the starting point of the linked list
		int deleteAtEnd(); //deletes a node from the ending point of the linked list
		void displayList(); //Displays the Linked list
		int insertAtPosition(int position, int data); //Inserts a node after X number of nodes
		int deleteAtPosition(int position); //delets a node at X position
		int totalNumberOfNodes(); //Return total number of nodes in the linked list
	};
}
