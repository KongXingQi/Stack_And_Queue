#include"Stack.h"



//��ʼ��
void StackInit(ST* ps)
{
	ps->a = NULL;
	ps->capacity = ps->top = 0;

}

//��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : (ps->capacity * 2);
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType)*newcapacity);
		if (tmp == NULL)
		{
			printf("��̬�ڴ濪��ʧ��\n");
			exit(-1);
		}
		ps->capacity = newcapacity ;
		ps->a = tmp;
	}
	ps->a[ps->top] = x;
	ps->top++;


}

//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);

	ps->top--;

}

//�ҵ�������ջ���ĵ�һ��Ԫ��
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);

	return ps->a[ps->top - 1];

}

//�ж�ջ�Ĵ�С��Ԫ�ظ�����
int StactSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//�ж�ջ�Ƿ�Ϊ��  ���򷵻� true �����򷵻� false
bool StackEmpty(ST* ps)
{

	assert(ps);

	if (ps->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}


}

//����ջ
void StackDestroy(ST* ps)
{

	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;

}