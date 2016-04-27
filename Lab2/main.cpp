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
	S.push(78);

	cout << "The Stack: " << endl << S;
	cout << "num nodes: " << S.countNodes() << endl;

	S.pop();
	cout << endl << "pop called" <<endl;
	cout << "The Stack: " << endl << S;
	cout <<"num nodes: " << S.countNodes() << endl;

	cout << endl << "emptyStack called" << endl;
	S.emptyStack();
	
	if(S.isEmpty()) cout << "num nodes: " << S.countNodes() << endl;




	system("pause");
	return 0;
}