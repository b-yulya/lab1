#include "pch.h"
#include "queueOp.h"
#include <iostream> 


Queue createQueue(int n)          // Выделить ресурс для очереди
{
	return *(new Queue(n));
};
Queue createQueue(const Queue &pq)   // Создать очередь 
{
	Queue *rc = new Queue(pq.Size - 1);
	rc->Head = pq.Head;
	rc->Tail = pq.Tail;
	for (int i = 0; i < pq.Size; i++)
		rc->Data[i] = pq.Data[i];
	return *rc;
}
bool Queue::isFull() const         // Очередь заполненa?
{
	return (Head % Size == (Tail + 1) % Size);
}
bool Queue::isEmpty()const         // Очередь пустa?
{
	return (Head % Size == Tail % Size);
}
bool enQueue(Queue &q, myQue x)      // Добавить элемент x 
{
	bool rc = true;
	if (rc = !q.isFull())
	{
		q.Data[q.Tail] = x;
		std::cout << q.Data[q.Tail].a << "  " << q.Data[q.Tail].b << std::endl;
		q.Tail = (q.Tail + 1) % q.Size;
	}
	else
		rc = false;
	return rc;
};