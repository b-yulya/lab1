#include "pch.h"
#include "queueOp.h"
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	int choice, num=1;
	char elem;
	cout << "Введите размер очереди: " << endl;
	cin >> choice;
	void* rc = (void*)MYQUEUE1_EQE;
	Queue q1 = createQueue(choice);
	for (;;)
	{
		cout << "Выберите команду:" << endl;
		cout << "1 - Добавить элемент" << endl;
		cout << "2 - Показать очередь" << endl;
		cout << "3 - Узнать размер очереди" << endl;
		cout << "4 - Выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: 
			if (true)
			{
				cout << "Введите элемент очереди: ";
				cin >> elem;
				myQue addelem = { num, elem };
				enQueue(q1, addelem);
				
					if (elem == q1.Data[num - 2].b)
					{
						if (q1.Tail > 3)
						{
							q1.Head = q1.Head + 3;
							cout << "Вводимый символ совпал с последним элементом очереди. Удалены три первых элемента." << endl;
						}
						else
						{
							cout << "Вводимый символ совпал с последним элементом очереди. Три первых элемента не удалены потому, что всего их меньше 4." << endl;
						}
					}
				num++;
			}
			break;
		case 2: 
			for (int i = q1.Head; i<q1.Tail; i++)
			cout << q1.Data[i].a << " " << q1.Data[i].b << endl;
		    //q1.currpos = q1.Head;
			break;
		case 3: 
			cout << q1.Tail << endl;
			break;
		case 4: return 0;
			break;
		default:
			cout << "Сделайте правильный выбор" << endl;
			break;
		}
	}
	return 0;
}
