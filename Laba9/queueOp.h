#define MYQUEUE1_EQE  0x0000  // возврат в случае пустоты очереди 

struct myQue
{
	int a;
	char b;
};

struct Queue               // Блок управления очередью 
{
	int Head;           // голова очереди
	int Tail;           // хвост очереди
	int Size;           // размер очереди (макс. колич.+1)
	myQue* Data;        // хранилище данных очереди 
	Queue(int size)     // физический размер очереди  
	{
		Head = Tail = 0;
		Size = size + 1;
		Data = new myQue[Size];
	}
	bool isFull() const;       // очередь заполненa ?
	bool isEmpty()const;       // очередь пустa ? 
};

Queue createQueue(int n);            // n – макс. количество 
Queue createQueue(const Queue& pq);  // создать очередь по образцу 
bool  enQueue(Queue& q, myQue x);    // добавить x 
void* delQueue(Queue& q);            // удалить элемент 
int clearQueue(Queue& q);            // очистить очередь
void releaseQueue(Queue& q);         // освободить ресурсы 
#pragma once
