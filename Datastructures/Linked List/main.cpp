#include "linkedlist.h"
#include <iostream>


int main() {

	LinkedList ll{};

	Node x{ 3, nullptr };
	Node y{ 4, nullptr };
	Node z{ 5, nullptr };
	ll.Append(x);
	ll.Append(y);
	ll.Append(z);

	ll.Peek();

	return 0;
}