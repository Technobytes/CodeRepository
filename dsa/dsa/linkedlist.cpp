/*
Code written and published by Suraj U Dixit.
*/

#include "linkedlist.h"

namespace datastructures 
{
	//Constructor where in the start node is created and defined
	linkedList::linkedList()
	{
		start = createNode();
		start->info = 0;
		start->next = NULL;
	}

	//creates a new node as in allocates memory for the node
	linkedList * linkedList::createNode()
	{
		linkedList * newnode;
		if(newnode = (linkedList *) malloc(sizeof(linkedList))) //memory allocation
		{
			return newnode;
		}
		else
		{
			return NULL;
		}	
	}

	//inserts the data at the start of the linked list
	int linkedList::insertAtStart(int data)
	{
		linkedList * newnode = createNode();

		if (newnode == NULL)
			return -1;

		newnode->info = data;
		newnode->next = NULL;
		//first node
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

	//inserts the data at the end of the linkedlist
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

		//traverse to the last node of the list
		while (tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}

		tempnode->next = newnode;
		start->info++;
		cout << "data: " << newnode->info << " inserted in the Linkedlist." << endl;
		return 0;
	}

	//deletes a node from the starting point of the linked list
	int linkedList::deleteAtStart()
	{
		linkedList * tempnode = createNode();

		if (tempnode == NULL)
			return -1;

		tempnode = start->next;
		int data = tempnode->info;
		start->next = tempnode->next;
		cout << "data: " << data << " has been deleted from Linkedlist." << endl;
		free(tempnode); //free the memory allocated in
		start->info--;
		return data;
	}

	//deletes a node from the ending point of the linked list
	int linkedList::deleteAtEnd()
	{
		linkedList * tempnode = createNode();
		tempnode = start->next;

		//traverse to last but one node
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
		free(lastnode); //free the memory allocated
		start->info--;
		return data;
	}

	//Displays the Linked list
	void linkedList::displayList()
	{
		cout << "\n-------Displaying Nodes---------" << endl;
		linkedList * temp = createNode();
		temp = start->next;
		//traverse to each node and print the data
		while (temp->next != NULL)
		{
			cout << temp->info << "->";
			temp = temp->next;
		}

		cout << temp->info << endl;
		cout << endl;
	}

	//Inserts a node after X number of nodes
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

		//traverse to the position after which the node needs to be inserted
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

	//delets a node at X position
	int linkedList::deleteAtPosition(int position)
	{
		linkedList * temp = createNode();

		if (temp == NULL)
			return -1;

		temp = start->next;

		//traverse to previous node of the node which needs to be deleted
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
		free(deletenode); //free the memory allocated
		start->info--;
		return 0;
	}

	//Return total number of nodes in the linked list
	int linkedList::totalNumberOfNodes()
	{
		cout << "Total Nodes: " << start->info << "\n" << endl;
		return start->info;
	}
}

