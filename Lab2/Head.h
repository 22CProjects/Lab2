#ifndef _HEAD
#define _HEAD

#include "Node.h"

template <class DataType>
class Head : public Node<DataType>
{
private:
	Node* rear;
	Node* front;
	int nodeCounter;
public:

	Head() :  Node<DataType>()
	{
		nodeCounter = 0;
		rear = nullptr;
		front = nullptr;
	}
	~Head() {}
	
	Head& operator++() { nodeCounter++; return *this; }
	Head& operator--() { nodeCounter--; return *this; }

	void set_Front(Node* node) { front = node; }
	void set_Rear(Node* node) { rear = node; } 

	int   get_nodeCounter() { return nodeCounter; }
	Node* get_Front() const { return front; }
	Node* get_Rear() const { return rear; }
};
#endif // !_HEAD
