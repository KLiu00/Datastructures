#pragma once
#include "../node.h"


class Stack
{
public:
	Stack();
	~Stack();
	void Push(int data);
	void Pop();
	int Top();
	int Size();


private:
	Node* _head;
	int _count;
};

