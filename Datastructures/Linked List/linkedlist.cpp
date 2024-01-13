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
}

void LinkedList::Pop()
{
}

void LinkedList::Peek()
{
	Node* current = head;
	do
	{
		std::cout << current->data << " << ";
		current = current->nextNode;
	} while (current);
	
}
