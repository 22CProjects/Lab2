#ifndef _NODE
#define _NODE

template <class DataType>
class Node
{
protected:
	DataType data;
	Node *nextNode;

public:
	Node() : nextNode(0) {}
	Node(DataType d, Node* n) : data(d), nextNode(n) {}
	~Node(){}
	DataType get_data() const { return data;}
	Node*    get_next() const { return nextNode; }
	void     set_next(Node* ptr) { nextNode = ptr; }
};
#endif // !_NODE
