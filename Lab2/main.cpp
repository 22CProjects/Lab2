#include "SinglyLinkedList.h"
#include "StackLinkedList.h"

using namespace std;

int main()
{
	
	StackLinkedList<int> S;
	S.push(1);
	S.push(3);
	S.push(6);
	S.push(2);
	S.printStack();
	S.pop();
	S.printStack();
	cout<<endl<<S.countNodes()<<endl;
	S.emptyStack();
	cout << endl << S.countNodes() << endl;
	if (S.isEmpty() == true)
	{
		cout << "isEmpty == true" << endl;
	}

	//S.printList();

	system("pause");
	return 0;
}