#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList()
{

}

LinkedList::~LinkedList()
{
}

void LinkedList::Append(Node k)
{
	if (!head) {
		head = &k;
		return;
	}

	Node* current = head;
	while (current->nextNode) {
		current = current->nextNode;
	}
	current->nextNode = &k;
	_count++;
}

void LinkedList::Pop()
{
	// Check if none
	if (!head) return;

	// Get last node
	Node* current = head;
	while (current->nextNode->nextNode) {
		current = current->nextNode;
	}
	current->nextNode = nullptr;

}

void LinkedList::Peek()
{
	Node* current = head;
	do
	{
		std::cout << current->data << " << ";
		current = current->nextNode;
	} while (current);
	std::cout << "\n";
}

int LinkedList::Length()
{
	if (!head) return 0;
	int _length{ 1 };

	Node* current = head;
	while (current->nextNode) {
		current = current->nextNode;
		_length++;
	}
	return _length;
}
