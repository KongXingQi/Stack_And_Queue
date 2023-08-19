#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

//这个是队列中的每个节点元素 单链表的形式
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;

}QueueNode;

//这是一个队列
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;

//初始化
void QueueInit(Queue* pq);

//从队尾进去
void QueuePush(Queue* pq, QDataType x);

//从队头出去
void QueuePop(Queue* pq);

//获取队尾的元素
QDataType QueueBack(Queue* pq);

//获取队头的元素
QDataType QueueFront(Queue* pq);

//计算队列的大小（元素个数）
int QueueSize(Queue* pq);

//检查队列是否为空
bool QueueEmpty(Queue* pq);

//销毁
void QueueDestroy(Queue* pq);