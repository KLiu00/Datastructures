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

	std::cout << ll.Length() << "\n";
	ll.Peek();
	ll.Pop();

	ll.Peek();
	std::cout << ll.Length() << "\n";

	return 0;
}