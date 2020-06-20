#include <iostream>
#include <LinkedList.h>

int main(){

	std::cout << "Hello \n";

	LinkedList<int> MyList;

	MyList.addFront(5);
	MyList.addFront(3);
	MyList.addFront(1);

	int listSize = MyList.getSize();

	int* list = new int[listSize];
	list = MyList.getList();

	for (int i = 0; i < listSize; i++){

		std::cout << list[i] << " ";
	}

	std::cout << "\n";


	return 0;
}