#define MYQUEUE1_EQE  0x0000  // ������� � ������ ������� ������� 

struct myQue
{
	int a;
	char b;
};

struct Queue               // ���� ���������� �������� 
{
	int Head;           // ������ �������
	int Tail;           // ����� �������
	int Size;           // ������ ������� (����. �����.+1)
	myQue* Data;        // ��������� ������ ������� 
	Queue(int size)     // ���������� ������ �������  
	{
		Head = Tail = 0;
		Size = size + 1;
		Data = new myQue[Size];
	}
	bool isFull() const;       // ������� ��������a ?
	bool isEmpty()const;       // ������� ����a ? 
};

Queue createQueue(int n);            // n � ����. ���������� 
Queue createQueue(const Queue& pq);  // ������� ������� �� ������� 
bool  enQueue(Queue& q, myQue x);    // �������� x 
void* delQueue(Queue& q);            // ������� ������� 
int clearQueue(Queue& q);            // �������� �������
void releaseQueue(Queue& q);         // ���������� ������� 
#pragma once
