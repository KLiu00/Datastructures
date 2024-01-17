#include "stack.h"

Stack::Stack()
{
	_head = nullptr;
	_count = 0;
}

Stack::~Stack()
{
}

void Stack::Push(int data)
{
	Node k{ data, _head };
	_head = &k;
	_count++;
}

void Stack::Pop()
{
	if (!_head) {
		return;
	}
	auto& current = _head;
	while (current->nextNode->nextNode) { // Gets the second to last node.
		current = current->nextNode;
	}
	// Removes the last node.
	current->nextNode = nullptr;
	_count--;

}

int Stack::Top()
{
	// Gets the top of the stack (The last element)
	if (!_head) {
		return -1;
	}
	auto& current = _head;
	while (current->nextNode->nextNode) { // Gets the second to last node.
		current = current->nextNode;
	}
	return current->nextNode->data;
}

int Stack::Size()
{
	return _count;
}

