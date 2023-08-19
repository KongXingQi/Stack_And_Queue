#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

//����Ƕ����е�ÿ���ڵ�Ԫ�� ���������ʽ
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;

}QueueNode;

//����һ������
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

//��ʼ��
void QueueInit(Queue* pq);

//�Ӷ�β��ȥ
void QueuePush(Queue* pq, QDataType x);

//�Ӷ�ͷ��ȥ
void QueuePop(Queue* pq);

//��ȡ��β��Ԫ��
QDataType QueueBack(Queue* pq);

//��ȡ��ͷ��Ԫ��
QDataType QueueFront(Queue* pq);

//������еĴ�С��Ԫ�ظ�����
int QueueSize(Queue* pq);

//�������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);

//����
void QueueDestroy(Queue* pq);