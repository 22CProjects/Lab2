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
	int getNodeCounter() { return nodeCounter; }
};
#endif // !_HEAD
