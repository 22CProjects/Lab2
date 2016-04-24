#ifndef _HEAD
#define _HEAD

#include "Node.h"

template <class DataType>
class Head : public Node<DataType>
{
private:
	Node *rear;
	Node *front;
	int nodeCounter;
public:

	Head() : nodeCounter(0), rear(0), front(0) {}
	int getNodeCounter() { return nodeCounter; }
	void incCounter() { nodeCounter++; }//prob should be an overloaded operator
	void set_Front(Node* node) { front = node; }
	void set_Rear(Node* node) { rear = node; }
	Node get_Front() { return front; }
	Node get_Rear() { return rear; }
};
#endif // !_HEAD
