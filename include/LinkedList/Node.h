#pragma once

template <class Type>
class Node {
public:

	Type data;
	Node<Type>* next;
	Node<Type>* prev;

	Node(const Type& data) {
		this->data = data;
		this->next = nullptr;
		this->prev = nullptr;
	};
};
