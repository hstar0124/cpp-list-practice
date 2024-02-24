#include <iostream>

template<typename T>
class Node
{
public:
	Node(T data) : data(data) {}

public:
	T data;
	Node* prev = nullptr;
	Node* next = nullptr;
};


int main()
{
	Node<int>* n1 = new Node<int>(1);
	Node<int>* n2 = new Node<int>(2);
	Node<int>* n3 = new Node<int>(3);
	Node<int>* n4 = new Node<int>(4);
	Node<int>* n5 = new Node<int>(5);
	
	n1->next = n2;
	n2->prev = n1;

	n2->next = n3;
	n3->prev = n2;

	n3->next = n4;
	n4->prev = n3;

	n4->next = n5;
	n5->prev = n4;

	delete n1;
	delete n2;
	delete n3;
	delete n4;
	delete n5;

	return 0;
}