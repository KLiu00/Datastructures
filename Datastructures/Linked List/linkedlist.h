#pragma once
#include "node.h"


class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void Append(Node k);

	void Pop();
	void Peek();
	int Length();

private:
	Node* head{nullptr};
	int _count{};
};
