/*
Copyright (c) by Suraj.U.Dixit. All rights reserved.
Code written and published by Suraj U Dixit.
*/


#include "queue.h"

namespace datastructures
{
	//constructor - defines the front and rear to default values when the object is created
	queue::queue()
	{
		front = 0;
		rear = -1;
	}
	
	//sets the size of the queue by creating a dynamic array
	int queue::setSize(int size)
	{
		sizeOfQueue = size;
		dataArray = new int[size];
		return 0;
	}

	//displays the queue
	void queue::display()
	{
		if (front == 0 && rear == -1)
		{
			cout << "queue is empty" << endl;
		}

		if (front > rear)
		{
			cout << "\n-------Displaying the queue-----------" << endl;

			for (int i = 0; i <= rear; i++)
				cout << dataArray[i] << endl;
			for (int j = front; j <= sizeOfQueue - 1; j++)
				cout << dataArray[j] << endl;
		}

		else
		{
			cout << "\n-------Displaying the queue-----------" << endl;

			for (int i = front; i <= rear; i++)
			{
				cout << dataArray[i] << endl;
			}
		}
		
		cout << endl;
	}

	//deletes data from front
	int queue::deleteData()
	{
		//queue empty condition
		if ((front == 0) && (rear == -1)) 
		{
			cout << "Queue is empty" << endl;
		}

		int retr;
		
		//circular queue - resets the rear and front values
		if (front == rear)
		{
			retr = dataArray[front];
			rear = -1;
			front = 0;
		}
		else
		{
			if (front == sizeOfQueue - 1)
			{
				retr = dataArray[front];
				front = 0;
			}
			else
			{
				retr = dataArray[front++];
			}
		}

		cout << retr << " is deleted from the queue" << endl;
		return retr;

	}
	
	//inserts data from rear
	int queue::insert(int data)
	{
		//queue full condition
		if ((rear == sizeOfQueue - 1 && front == 0) || ( front > 0 && rear == front - 1))
		{
			cout << "\nQueue is full and " << data << " cannot be inserted." << endl;
			return -1;
		}
		else
		{
			//resets rear and adds data
			if (rear == sizeOfQueue -  1 && front > 0)
			{
				rear = 0;
				dataArray[rear] = data;
				cout << data << " - is inserted into the queue" << endl;
				return 0;
			}
			else
			{
				//adding data into empty queue
				if ((front == 0 && rear == -1) || (rear != front - 1))
				{
					dataArray[++rear] = data;
					cout << data << " - is inserted into the queue" << endl;
					return 0;
				}
			}
		}
	}

}