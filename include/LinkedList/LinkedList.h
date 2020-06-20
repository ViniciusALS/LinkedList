#pragma once

#include "Node/Node.h"
#include <iostream>

template <class Type>
class LinkedList {

private:

	Node<Type>* _head;
	Node<Type>* _tail;

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

template <class Type>
LinkedList<Type>::LinkedList() {
	this->_head = nullptr;
	this->_tail = nullptr;
	this->_size = 0;
}

template <class Type>
void LinkedList<Type>::addFront(const Type& data) {
	
	Node<Type>* newNode = new Node<Type>(data);

	if (_head == nullptr) {

		_head = newNode;
		_tail = newNode;
	}

	else {

		_head->prev = newNode;
		newNode->next = _head;
		_head = newNode;
	}

	this->_size++;
}

template <class Type>
void LinkedList<Type>::addBack(const Type& data) {

	Node<Type>* newNode = new Node<Type>(data);

	if (_tail == nullptr) {

		_head = newNode;
		_tail = newNode;
	}

	else {

		_tail->next = newNode;
		newNode->prev = _tail;
		_tail = newNode;
	}

	this->_size++;
}

template <class Type>
Type LinkedList<Type>::popFront(void) {

	if (_head != nullptr) {

		Type data = _head->data;

		Node<Type>* oldHead = _head;
		_head = _head->next;
		delete oldHead;

		this->_size--;

		return data;
	}

	throw std::logic_error("Cannot pop value from empty list");
}

template <class Type>
Type LinkedList<Type>::popBack(void) {

	if (_tail != nullptr) {

		Type data = _tail->data;

		Node<Type>* oldTypeail = _tail;
		_tail = _tail->prev;
		delete oldTypeail;

		this->_size--;

		return data;
	}

	throw std::logic_error("Cannot pop value from empty list");
}

template <class Type>
int LinkedList<Type>::getSize(void) {

	return this->_size;
}

template <class Type>
Type* LinkedList<Type>::getList(void) {

	Type* list = new Type[this->_size];
	Node<Type>* cur = this->_head;

	for (int i = 0; i < this->_size; i++){

		list[i] = cur->data;
		cur = cur->next;
	}

	return list;
}
