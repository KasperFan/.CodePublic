#include <stdio.h>
#include <stdlib.h>
#define bool short;
#define true 1;
#define false 0;
typedef int ElementType;
typedef double ElementType;

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