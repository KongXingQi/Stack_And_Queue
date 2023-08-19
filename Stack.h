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

//��ʼ��
void StackInit(ST* ps);

//��ջ
void StackPush(ST* ps , STDataType x);

//��ջ
void StackPop(ST* ps );

//�ҵ�������ջ���ĵ�һ��Ԫ��
STDataType StackTop(ST* ps);

//�ж�ջ�Ĵ�С��Ԫ�ظ�����
int StactSize(ST* ps);

//�ж�ջ�Ƿ�Ϊ��  ���򷵻� true �����򷵻� false
bool StackEmpty(ST* ps);

//����ջ
void StackDestroy(ST* ps);