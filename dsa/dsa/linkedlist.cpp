/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/

#include "linkedlist.h"

namespace datastructures 
{

	linkedList::linkedList()
	{
		start = createNode();
		start->info = 0;
		start->next = NULL;
	}

	linkedList * linkedList::createNode()
	{
		linkedList * newnode;
		if(newnode = (linkedList *)malloc(sizeof(linkedList)))
		{
			return newnode;
		}
		else
		{
			return NULL;
		}	
	}

	int linkedList::insertAtStart(int data)
	{
		linkedList * newnode = createNode();

		if (newnode == NULL)
			return -1;

		newnode->info = data;
		newnode->next = NULL;

		if (start->info == 0)
		{
			start->next = newnode;
			newnode->next = NULL;
		}
		else
		{
			newnode->next = start->next;
			start->next = newnode;
		}

		start->info++;
		cout << "data: " << newnode->info << " inserted in the Linkedlist." << endl;
		return 0;
	}

	int linkedList::insertAtEnd(int data)
	{
		linkedList * newnode = createNode();

		if (newnode == NULL)
			return -1;

		newnode->info = data;
		newnode->next = NULL;

		linkedList * tempnode = createNode();

		if (tempnode == NULL)
			return -1;

		tempnode = start->next;

		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}

		tempnode->next = newnode;
		start->info++;
		cout << "data: " << newnode->info << " inserted in the Linkedlist." << endl;
		return 0;
	}

	int linkedList::deleteAtStart()
	{
		linkedList * tempnode = createNode();

		if (tempnode == NULL)
			return -1;

		tempnode = start->next;
		int data = tempnode->info;
		start->next = tempnode->next;
		cout << "data: " << data << " has been deleted from Linkedlist." << endl;
		free(tempnode);
		start->info--;
		return data;
	}

	int linkedList::deleteAtEnd()
	{
		linkedList * tempnode = createNode();
		tempnode = start->next;

		while (tempnode->next->next != NULL)
		{
			tempnode = tempnode->next;
		}

		linkedList * lastnode = createNode();

		if (lastnode == NULL)
			return -1;

		lastnode = tempnode->next;
		tempnode->next = NULL;
		int data = lastnode->info;
		cout << "data: " << data << " has been deleted from the Linkedlist" << endl;
		free(lastnode);
		start->info--;
		return data;
	}

	void linkedList::displayList()
	{
		cout << "\n-------Displaying Nodes---------" << endl;
		linkedList * temp = createNode();
		temp = start->next;
		while (temp->next != NULL)
		{
			cout << temp->info << "->";
			temp = temp->next;
		}

		cout << temp->info << endl;
		cout << endl;
	}

	int linkedList::insertAtPosition(int position, int data)
	{
		linkedList * newnode = createNode();

		if (newnode == NULL)
			return -1;

		newnode->info = data;
		newnode->next = NULL;

		linkedList * temp = createNode();

		if (newnode == NULL)
			return -1;

		temp = start->next;

		for (int i = 0; i < position - 1; i++)
		{
			temp = temp->next;
		}

		newnode->next = temp->next;
		temp->next = newnode;

		cout << "data: " << data << " inserted after " << position << " node/nodes." << endl;
		start->info++;
		return 0;
	}

	int linkedList::deleteAtPosition(int position)
	{
		linkedList * temp = createNode();

		if (temp == NULL)
			return -1;

		temp = start->next;

		for (int i = 0; i < position - 2; i++)
		{
			temp = temp->next;
		}

		linkedList * deletenode = createNode();

		if (deletenode == NULL)
			return -1;

		deletenode = temp->next;
		cout << "data: " << deletenode->info << " deleted from position: " << position << endl;
		temp->next = temp->next->next;
		free(deletenode);
		start->info--;
		return 0;
	}
}
