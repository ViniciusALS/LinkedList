#pragma once

#include "Node.h"
#include <iostream>

template <class T>
class LinkedList {

private:

	Node<T>* _head;
	Node<T>* _tail;

public:

	int size;

	LinkedList();

	void addFront(T data);
	void addBack(T data);

	void printList(void);
};

template <class T>
LinkedList<T>::LinkedList() {
	this->_head = nullptr;
	this->_tail = nullptr;
	this->size = 0;
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

	this->size++;
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

	this->size++;
}

template <class T>
void LinkedList<T>::printList(void) {

	if (_head != nullptr) {

		for (Node<T>* cur = _head; cur != nullptr; cur = cur->next) {

			std::cout << cur->data << " ";
		}
	}
}
