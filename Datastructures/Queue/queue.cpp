#include "queue.h"

Queue::Queue()
{
	head = nullptr;
	_counter = 0;
}

Queue::~Queue()
{
}

void Queue::enQueue(Node* k)
{
	if (!head) {
		head = k;
	}
	else {
		auto* current = head;
		while (current->nextNode)
		{
			current = current->nextNode;
		}
		current->nextNode = k;
	}
	_counter++;
}

void Queue::deQueue()
{
	if (!head) return;
	head = head->nextNode;
	_counter--;
}

int Queue::Count()
{
	return _counter;
}
