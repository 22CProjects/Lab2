#include "SinglyLinkedList.h"
#include <iostream>

using namespace std;

/* DEFAULT CONSTRUCTOR */
template <class DataType>
SinglyLinkedList<DataType>::SinglyLinkedList() 
{
}

template <class DataType>
SinglyLinkedList<DataType>::~SinglyLinkedList()
{
	Node<DataType>* temp_f = headNode->get_Front();
	Node<DataType>* temp_b;
	while (temp_f != nullptr)
	{
		temp_b = temp_f;
		temp_f = temp_f->get_next();
		delete temp_b;
	}
	delete temp_f;
	headNode->set_Front(0);
	headNode->set_Rear(0);
}

template <class DataType>
void SinglyLinkedList<DataType>::add(DataType newData)
{
	Node<DataType>* newNode;
	newNode = new Node<DataType>(newData, headNode->get_Front());
	headNode->set_Front(newNode);
	headNode->incCounter();
}

/*template <class DataType>
void SinglyLinkedList<DataType>::add(DataType newData, int pos)
{
	Node* newNode;
	Node* temp_f = headNode->get_Front();
	Node* temp_b;
	if (pos <= headNode->get_nodeCounter())
	{
		if (pos == 0)
		{
			newNode = new Node(newData, headNode->get_Front());
			headNode->set_Front(newNode);
		}
		else 
		{
			for (int i = 0; i < pos - 1; i++)
			{
				temp_f = temp_f->get_next();
			}
			temp_b = temp_f;
			temp_f = temp_t->next_node();
			newNode = new Node(newData, temp_f);
			temp_b->set_next(newNode);

			if (pos == headNode->get_nodeCounter())headNode->set_Rear(newNode);
		}
		headNode->++;
	}
	else
	{
		cout << "error: position not in range";
	}
}*/

template <class DataType>
void SinglyLinkedList<DataType>::add(DataType newData, DataType preData)
{
	Node<DataType>* newNode;
	Node<DataType>* temp_f = headNode->get_Front();
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
		headNode->incCounter();
	}
	else
	{
		cout << preData << "is not in the List";
	}
}

template <class DataType>
void SinglyLinkedList<DataType>::remove(DataType data2delete)
{
	Node<DataType>* temp_f = headNode->get_Front();
	Node<DataType>* temp_b;

	if (find(data2delete) != -1)
	{

		if (temp_f->get_data() == data2delete)
		{
			headNode->set_Front(temp_f->get_next());
			delete temp_f;
		}
		else if()
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
	}
	else
	{
		cout<<"The data does not exist in the list";
	}
}


template <class DataType>
int SinglyLinkedList<DataType>::find(DataType data2find)
{
	int pos = 0;
	Node<DataType>* temp = headNode->get_Front();

	while (temp->get_data() != nullptr)
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
	Node<DataType>* temp_f = nodeHead->get_Front();
	Node<DataType>* temp_b;
	
	cout << "emptying list:" << endl;
	while ( temp_f != headNode->getRear())
	{
		temp_b = temp_f;
		temp_f temp_f->get_next();
		cout << "removing " << temp_b->get_data() << endl;
		delete temp_b;
	}
	delete temp_f;
	nodeHead->set_Front(0);
	nodeHead->set_Rear(0);
}


template <class DataType>
int SinglyLinkedList<DataType>::countNodes()
{
	return headNode->get_nodeCounter();
}

template <class DataType>
void SinglyLinkedList<DataType>::printList()
{
	Node<DataType>* temp = headNode->get_Front();
	cout << "The list" << endl;
	while (temp != nullptr)
	{
		cout << temp->get_data()<<endl ;
	}
}