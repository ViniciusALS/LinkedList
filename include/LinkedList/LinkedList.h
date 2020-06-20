#pragma once

#include "Node.h"
#include <iostream>

template <class Type>
class LinkedList {

private:

	dataStructures::Node<Type>* _head;
	dataStructures::Node<Type>* _tail;

	int _size;

public:

	LinkedList();

	void addFront(const Type& data);
	void addBack(const Type& data);

	Type popFront(void);
	Type popBack(void);

	int getSize(void);

	Type* getList(void); 
};

#include "LinkedList.tpp"