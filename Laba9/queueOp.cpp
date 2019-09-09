#include "pch.h"
#include "queueOp.h"
#include <iostream> 


Queue createQueue(int n)          // �������� ������ ��� �������
{
	return *(new Queue(n));
};
Queue createQueue(const Queue &pq)   // ������� ������� 
{
	Queue *rc = new Queue(pq.Size - 1);
	rc->Head = pq.Head;
	rc->Tail = pq.Tail;
	for (int i = 0; i < pq.Size; i++)
		rc->Data[i] = pq.Data[i];
	return *rc;
}
bool Queue::isFull() const         // ������� ��������a?
{
	return (Head % Size == (Tail + 1) % Size);
}
bool Queue::isEmpty()const         // ������� ����a?
{
	return (Head % Size == Tail % Size);
}
bool enQueue(Queue &q, myQue x)      // �������� ������� x 
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