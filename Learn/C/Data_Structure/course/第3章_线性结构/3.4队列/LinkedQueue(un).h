#include "bool.h"

// 用C语言描述链式队列结构如下：
typedef struct Node *PtrToNode;
// 队列中的节点
struct Node
{
    ElementType Data;
    PtrToNode Next;
};
typedef PtrToNode Position;

typedef struct QNode *PtrToQNode;
struct QNode
{
    Position Front, Rear; /* 队列的头尾指针 */
    int MaxSize;          /* 队列最大容量 */
};
typedef PtrToQNode Queue;

// 代码3.18 链式存储队列的出队操作
bool IsEmpty(Queue Q)
{
    return (Q->Front == NULL);
}

ElementType DeleteQ(Queue Q)
{
    Position FrontCell;
    ElementType FrontElem;

    if (IsEmpty(Q))
    {
        printf("队列空");
        return ERROR;
    }
    else
    {
        FrontCell = Q->Front;
        if (Q->Front == Q->Rear) /* 若队列只有一个元素 */
            Q->Front = Q->Rear = NULL;
        else
            Q->Front = Q->Front->Next;
        FrontElem = FrontCell->Data;

        free(FrontCell); /* 释放被删除节点空间 */
        return FrontElem;
    }
}