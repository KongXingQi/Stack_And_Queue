#include"Stack.h"
#include"Queue.h"

void StackTest1()
{
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2); 
	StackPush(&st, 3);
	StackPop(&st);
	StackPop(&st);
	printf("%d ", StackTop(&st));
	StackPush(&st, 4); 
	StackPush(&st, 5);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	printf("\n");

	StackDestroy(&st);

}
void QueueTest1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);

	QueuePush(&q, 4);

	printf("���ڶ������� %d ��Ԫ��\n ", QueueSize(&q));

	while (!QueueEmpty(&q))
	{
		printf("��%d ", QueueFront(&q));
		QueuePop(&q);
		printf("���ڶ������� %d ��Ԫ��\n ", QueueSize(&q));

	}



	QueueDestroy(&q);


}
int main()
{
	//StackTest1();
	QueueTest1();
	return 0;
}