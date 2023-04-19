#include "bool.h"

typedef int Position;
typedef struct QNode *PtrToQNode;
// 循环队列的定义
struct QNode
{
    ElementType *Data;    /* 存储元素的数组 */
    Position Front, Rear; /* 队列的头尾指针 */
    int MaxSize;          /* 队列最大容量 */
};
typedef PtrToQNode Queue;

/* 循环队列的创建与插入和删除操作实现 */

Queue CreateQueue(int MaxSize);
bool IsFull(Queue Q);
bool AddQ(Queue Q, int X);
bool IsEmpty(Queue Q);
ElementType DeleteQ(Queue Q);

// 创建
Queue CreateQueue(int MaxSize)
{
    Queue Q = (Queue)malloc(sizeof(struct QNode));
    Q->Data = (ElementType *)malloc(MaxSize * sizeof(int));
    Q->Front = Q->Rear = 0;
    Q->MaxSize = MaxSize;
    return Q;
}
// 判断队列是否已满
bool IsFull(Queue Q)
{
    return ((Q->Rear + 1) % Q->MaxSize == Q->Front);
}
// 队列元素的插入
bool AddQ(Queue Q, int X)
{
    if (IsFull(Q))
    {
        printf("队列满");
        return false;
    }
    else
    {
        Q->Rear = (Q->Rear + 1) % Q->MaxSize;
        Q->Data[Q->Rear] = X;
        return true;
    }
}
// 判断队列是否为空
bool IsEmpty(Queue Q)
{
    return (Q->Front == Q->Rear);
}
// 队列元素的删除
ElementType DeleteQ(Queue Q)
{
    if (IsEmpty(Q))
    {
        printf("队列空");
        return -1;
    }
    else
    {
        Q->Front = (Q->Front + 1) % Q->MaxSize;
        return Q->Data[Q->Front];
    }
}