#pragma once

namespace dataStructures {

	template <class Type>
	class Node {
	public:

		Type data;
		Node<Type>* next;
		Node<Type>* prev;

		Node(const Type& data):
			data(data), next(nullptr), prev(nullptr){}

		~Node(){};
	};
}

