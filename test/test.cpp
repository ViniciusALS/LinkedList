#include <iostream>

#include "LinkedList/LinkedList.h"

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

	int* list = myList.getList();
	int size = myList.getSize();

	for (int i = 0; i < size; i++) {

		cout << list[i] << " ";
	}

	cout << endl;

	return 0;
}
