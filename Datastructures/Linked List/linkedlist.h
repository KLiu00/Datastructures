#pragma once
#include "node.h"


class LinkedList
{
public:
	LinkedList();
	~LinkedList();


	Node *head;

	void Append(Node k);
	void Pop();
	void Peek();

private:

};
