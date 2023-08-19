#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//初始化
void StackInit(ST* ps);

//进栈
void StackPush(ST* ps , STDataType x);

//出栈
void StackPop(ST* ps );

//找到并返回栈顶的第一个元素
STDataType StackTop(ST* ps);

//判断栈的大小（元素个数）
int StactSize(ST* ps);

//判断栈是否为空  空则返回 true 不空则返回 false
bool StackEmpty(ST* ps);

//销毁栈
void StackDestroy(ST* ps);