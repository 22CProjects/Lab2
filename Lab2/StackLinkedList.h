#ifndef _STACK_LINKED_LIST
#define _STACK_LINKED_LIST

#include "SinglyLinkedList.h"
#include "Node.h"

template <class DataType>
class StackLinkedList : public SinglyLinkedList<DataType>
{
public:
	/* DEFAULT CONSTRUCTOR */
	StackLinkedList();

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
#endif // !_STACK_LINKED_LIST


template <class DataType>
void StackLinkedList<DataType>::push(DataType newData)
{
	Node<DataType>* newNode;
	Node<DataType>* temp_f = headNode.get_Front();
	Node<DataType>* temp_b;

	while (temp_f != headNode.get_Rear())
	{
		temp_f = temp_f->get_next();
	}

	temp_b = temp_f;
	temp_f = temp_f->get_next();
	newNode = new Node<DataType>(newData, temp_f);
	temp_b->set_next(newNode);

	++headNode;
}


template <class DataType>
void StackLinkedList<DataType>::pop()
{
	Node<DataType>* newNode;
	Node<DataType>* temp_f = headNode.get_Front();
	Node<DataType>* temp_b;

	while (temp_f != headNode.get_Rear())
	{
		temp_b = temp_f;
		temp_f = temp_f->get_next();
	}

	temp_b->set_next(temp_f->get_next());
	delete temp_f;

	--headNode;
}


template <class DataType>
bool StackLinkedList<DataType>::isEmpty()
{
	if (headNode.get_nodeCounter() == 0)
		return true;
	else
		return false;
}
