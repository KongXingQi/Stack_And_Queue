#include"Stack.h"



//初始化
void StackInit(ST* ps)
{
	ps->a = NULL;
	ps->capacity = ps->top = 0;

}

//进栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : (ps->capacity * 2);
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType)*newcapacity);
		if (tmp == NULL)
		{
			printf("动态内存开辟失败\n");
			exit(-1);
		}
		ps->capacity = newcapacity ;
		ps->a = tmp;
	}
	ps->a[ps->top] = x;
	ps->top++;


}

//出栈
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);

	ps->top--;

}

//找到并返回栈顶的第一个元素
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);

	return ps->a[ps->top - 1];

}

//判断栈的大小（元素个数）
int StactSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

//判断栈是否为空  空则返回 true 不空则返回 false
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

//销毁栈
void StackDestroy(ST* ps)
{

	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;

}