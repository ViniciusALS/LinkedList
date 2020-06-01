#include <iostream>

#include "LinkedList.h"

using namespace std;

int main(void) {

	LinkedList<int> myList;

	myList.addFront(1);
	myList.addBack(2);
	myList.addFront(3);
	myList.addBack(4);
	myList.addFront(5);
	myList.addBack(6);
	myList.addFront(7);
	myList.addBack(8);
	myList.addFront(9);

	cout << myList.getSize() << endl;
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	cout << "poped val: " << myList.popFront();
	cout << " size: " << myList.getSize() << " list:";
	myList.printList();
	cout << endl;

	try {

		cout << "poped val: " << myList.popFront();
		cout << " size: " << myList.getSize() << " list:";
		myList.printList();
		cout << endl;
	}

	catch (const std::logic_error& e) {
		
		cout << "Sorry kiddo :(" << endl;
	}


	return 0;
}
