#pragma once

#include "LinkedList/Node.h"
#include <iostream>

template <class T>
class LinkedList {

private:

	Node<T>* _head;
	Node<T>* _tail;

	int _size;

public:

	LinkedList();

	void addFront(T data);
	void addBack(T data);

	T popFront(void);
	T popBack(void);

	int getSize(void);

	void printList(void);
};

template <class T>
LinkedList<T>::LinkedList() {
	this->_head = nullptr;
	this->_tail = nullptr;
	this->_size = 0;
}

template <class T>
void LinkedList<T>::addFront(T data) {
	
	Node<T>* newNode = new Node<T>(data);

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

template <class T>
void LinkedList<T>::addBack(T data) {

	Node<T>* newNode = new Node<T>(data);

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

template <class T>
T LinkedList<T>::popFront(void) {

	if (_head != nullptr) {

		T data = _head->data;

		Node<T>* oldHead = _head;
		_head = _head->next;
		delete oldHead;

		this->_size--;

		return data;
	}

	throw std::logic_error("Cannot pop value from empty list");
}

template <class T>
T LinkedList<T>::popBack(void) {

	if (_tail != nullptr) {

		T data = _tail->data;

		Node<T>* oldTail = _tail;
		_tail = _tail->prev;
		delete oldTail;

		this->_size--;

		return data;
	}

	throw std::logic_error("Cannot pop value from empty list");
}

template <class T>
int LinkedList<T>::getSize(void) {

	return this->_size;
}

template <class T>
void LinkedList<T>::printList(void) {

	if (_head != nullptr) {

		for (Node<T>* cur = _head; cur != nullptr; cur = cur->next) {

			std::cout << cur->data << " ";
		}
	}
}
