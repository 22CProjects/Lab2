#pragma once

#include "SinglyLinkedList.h"
#include "Node.h"

template <class DataType>
class StackLinkedList : public SinglyLinkedList<DataType>
{
public:
	/* DEFAULT CONSTRUCTOR */
	StackLinkedList();

	/*DESTRUCTOR*/
	~StackLinkedList();

	/* Definition of push
	- It adds newData to the list in a stack order
	- Parameter: a DataType variable to be added
	- Return: none
	*/
	void push(DataType newData);

	/* Definition of pop
	- It deletes the last Node in the list (last in first out)
	- Parameter: none
	- Return: none
	*/
	void pop();

	/* Definition of isEmpty
	- It checks if the list is empty
	- Parameter: none
	- Return: a boolean true for empty list and false for having at least a node in the list
	*/
	bool isEmpty();

};


template <class DataType>
StackLinkedList<DataType>::StackLinkedList() : SinglyLinkedList<DataType>()
{
}

template <class DataType>
StackLinkedList<DataType>::~StackLinkedList() 
{
}

template <class DataType>
void StackLinkedList<DataType>::push(DataType newData)
{
	add(newData);
}


template <class DataType>
void StackLinkedList<DataType>::pop()
{
	DataType d = headNode.get_Front()->get_data();
	remove(d);
}


template <class DataType>
bool StackLinkedList<DataType>::isEmpty()
{
	if (headNode.get_nodeCounter() == 0)
		return true;
	else
		return false;
}
