#include "SinglyLinkedList.h"

using namespace std;

int main()
{
	SinglyLinkedList<int> List;
	List.add(1);
	List.add(5);
	List.add(8);
	List.add(3);
	cout << List << endl; //not working

	List.remove(8);
	cout <<endl<<"nodes: "<< List.countNodes()<<endl;

	List.add(34, 8);



	
	List.countNodes();
	List.emptyList();


	system("pause");
	return 0;
}