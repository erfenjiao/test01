//设计循环队列
#include<iostream>
using namespace std;

class MyCircularQueue
{
public:
	int* queue;
	int front = 0;
	int tail = 0;
	int maxsize;
	MyCircularQueue(int k)
	{
		queue = new int[k + 1];
		maxsize = k + 1;
	}
	bool enQueue(int val)
	{
		if (isFull() == 0)
			return false;
		tail = (tail + 1) % maxsize;
		queue[tail] = val;
		return true;
	}

	bool deQueue()
	{
		if (isEmpty())
			return false;

		front = (front + 1) % maxsize;
		return true;
	}

	int front()
	{

		if (isEmpty() == 0)
			return -1;
		return queue[(front + 1) % maxsize];
	}

	int tail()
	{
		if (isEmpty() == 0)
			return -1;
		return queue[tail];
	}

	int isFull()
	{
		return ((tail + 1) % maxsize == front);
	}

	int isEmpty()
	{
		return front == tail;
	}
};

int main()
{
	//array
	int m, n;
	scanf("%d %d", &m, &n);

}
