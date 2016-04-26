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
	S.printList();
	S.pop();
	S.printList();
	cout<<endl<<S.countNodes()<<endl;
	S.emptyList();
	cout << endl << S.countNodes() << endl;
	if (S.isEmpty() == true)
	{
		cout << "isEmpty == true" << endl;
	}

	//S.printList();

	system("pause");
	return 0;
}