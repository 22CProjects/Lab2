#ifndef _SINGLY_LINKED_LIST
#define _SINGLY_LINKED_LIST

#include "Node.h"
#include "Head.h"

template <class DataType>
class SinglyLinkedList
{
private:
	Head headNode;

public:
	/* DEFAULT CONSTRUCTOR */
	SinglyLinkedList();

	/* Definition of addNode 
		- It adds newNode to a random position in the list
		- Parameter: a Node variable to be added
		- Return: none
	*/
	void addNode(Node newNode);

	/* Definition of deleteNode
		- It removes a Node from the list
		- Parameter: a Node variable to be deleted
		- Return: none
	*/
	void deleteNode(Node node2delete);

	/* Definition of findNode
		- It traverses through the list to find the Node
		- Parameter: a Node variable to be searched
		- Return: an int (for position of that Node in the list)
	*/
	int findNode(Node node2find);

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
};

#include "SinglyLinkedList.cpp" // Include the implementation file
#endif // !_SINGLY_LINKED_LIST

