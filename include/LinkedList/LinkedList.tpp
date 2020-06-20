#pragma once

template <class Type>
LinkedList<Type>::LinkedList() {
	this->_head = nullptr;
	this->_tail = nullptr;
	this->_size = 0;
}

template <class Type>
void LinkedList<Type>::addFront(const Type& data) {
	
	dataStructures::Node<Type>* newNode = new dataStructures::Node<Type>(data);

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

	dataStructures::Node<Type>* newNode = new dataStructures::Node<Type>(data);

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

		dataStructures::Node<Type>* oldHead = _head;
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

		dataStructures::Node<Type>* oldTypeail = _tail;
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
	dataStructures::Node<Type>* cur = this->_head;

	for (int i = 0; i < this->_size; i++){

		list[i] = cur->data;
		cur = cur->next;
	}

	return list;
}
