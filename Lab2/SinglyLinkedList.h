#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

#include "Node.h"
#include "Head.h"
#include <iostream>
using namespace std;

template <class DataType>
class SinglyLinkedList
{
private:
	Head<DataType> headNode;

public:
	/* DEFAULT CONSTRUCTOR */
	SinglyLinkedList();
	
	/* Deconstructor
		-deallocates memory of the nodes in the list
	*/
	~SinglyLinkedList();

	/* Definition of add
		- It adds newNode to the list
		- Parameter: a Node variable to be added
		- Return: none
	*/
	void add(DataType newData);

	/* Overloaded add
	- It adds newNode to a specified position in the list
	- Parameter: newData is the the info being insterted into the list
	- Parameter: the data to insert the newData after
	- Return: none
	*/
	void add(DataType newData, DataType preData);

	/* Definition of deleteNode
		- It removes a Node from the list
		- Parameter: a Node variable to be deleted
		- Return: none
	*/
	void remove(DataType data2delete);

	/* Definition of find
		- It traverses through the list to find the Node
		- Parameter: a Node variable to be searched
		- Return: an int (for position of that Node in the list)
	*/
	int find(DataType data2find);

	/* Definition of emptyList
		- It removes all the Nodes in the list
		- Parameter: none
		- Return: none
	*/
	void emptyList();

	/* Definition of countNodes
		- It counts the total number of Nodes in the list by calling function getNodeCounter() from Head.h
		- Parameter: none
		- Return: an int (number of nodes)
	*/
	int countNodes();

	/*
	prints contents of the list
	*/
	friend ostream& operator<<(ostream&, const SinglyLinkedList&);
	
};

#endif // !_SINGLY_LINKED_LIST


template <class DataType>
SinglyLinkedList<DataType>::SinglyLinkedList()
{
}

template <class DataType>
SinglyLinkedList<DataType>::~SinglyLinkedList()
{
	Node<DataType>* temp_f = headNode.get_Front();//wat
	Node<DataType>* temp_b;
	while (temp_f != headNode.get_Rear())
	{
		temp_b = temp_f;
		temp_f = temp_f->get_next();
		delete temp_b;
	}
	delete temp_f;
	headNode.set_Front(0);
	headNode.set_Rear(0);
}

template <class DataType>
void SinglyLinkedList<DataType>::add(DataType newData)
{
	Node<DataType>* newNode;
	newNode = new Node<DataType>(newData, headNode.get_Front());
	headNode.set_Front(newNode);
	++headNode;
}

template <class DataType>
void SinglyLinkedList<DataType>::add(DataType newData, DataType preData)
{
	Node<DataType>* newNode;
	Node<DataType>* temp_f = headNode.get_Front();
	Node<DataType>* temp_b;

	if (find(preData) != -1)
	{
		while (temp_f->get_data() != preData)
		{
			temp_f = temp_f->get_next();
		}
		temp_b = temp_f;
		temp_f = temp_f->get_next();
		newNode = new Node<DataType>(newData, temp_f);
		temp_b->set_next(newNode);

		++headNode;
	}
	else
	{
		cout << preData << "is not in the List";
	}
}

template <class DataType>
void SinglyLinkedList<DataType>::remove(DataType data2delete)
{
	Node<DataType>* temp_f = headNode.get_Front();
	Node<DataType>* temp_b;

	if (find(data2delete) != -1)
	{

		if (temp_f->get_data() == data2delete)
		{
			headNode.set_Front(temp_f->get_next());
			delete temp_f;
		}
		else 
		{
			while (temp_f->get_next()->get_data() != data2delete)
			{
				temp_f = temp_f->get_next();
			}
			temp_b = temp_f;
			temp_f = temp_f->get_next();
			temp_b->set_next(temp_f->get_next());
			delete temp_f;
		}
		--headNode;
	}
	else
	{
		cout << "The data does not exist in the list";
	}
}


template <class DataType>
int SinglyLinkedList<DataType>::find(DataType data2find)
{
	int pos = 0;
	Node<DataType>* temp = headNode.get_Front();

	while (temp->get_next() != nullptr)
	{
		if (temp->get_data() == data2find) return pos;

		temp = temp->get_next();
		pos++;
	}
	return -1;
}


template <class DataType>
void SinglyLinkedList<DataType>::emptyList()
{
	Node<DataType>* temp_f = headNode.get_Front();
	Node<DataType>* temp_b;

	cout << "emptying list:" << endl;
	while (temp_f != headNode.get_Rear())
	{
		temp_b = temp_f;
		temp_f = temp_f->get_next();
		cout << "removing " << temp_b->get_data() << endl;
		delete temp_b;
	}
	delete temp_f;
	headNode.set_Front(0);
	headNode.set_Rear(0);
}


template <class DataType>
int SinglyLinkedList<DataType>::countNodes()
{
	return headNode.get_nodeCounter();
}

template <class DataType>
ostream& operator<<(ostream& s, const SinglyLinkedList<DataType>& list)
{
	Node<DataType>* temp = list.headNode.get_Front();

	while (temp != nullptr)
	{
		s << temp->get_data() << endl;
		temp = temp->get_next();
	}
	return s;
}