#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

#include "Node.h"
#include "Head.h"

template <class DataType>
class SinglyLinkedList
{
private:
	Head<DataType>* headNode;

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
	- Parameter: a Node variable to be added
	- Parameter: the position to add it in
	- Return: none
	*/
	//void add(DataType newData, int pos);

	/* Overloaded add
	- It adds newNode to a specified position in the list
	- Parameter: newData is the the info being insterted into the list
	- Parameter: the data that will precede it in the list
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
	
	*/
	void printList();
};

#include "SinglyLinkedList.cpp" // Include the implementation file
#endif // !_SINGLY_LINKED_LIST

