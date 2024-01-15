#include "../node.h"

class Queue
{
public:
	Queue();
	~Queue();
	
	void enQueue(Node *k);
	void deQueue();
	int Count();

private:
	Node* head{nullptr};
	int _counter{};
};

