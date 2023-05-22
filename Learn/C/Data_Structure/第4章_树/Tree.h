#include "stack_p.h"
#include "queue_p.h"

typedef int ElementType;

// 代码4.3 二叉树的链表结构
typedef struct TNode *Position;
typedef Position BinTree; /* 二叉树类型 */
struct TNode
{                     /* 树结点定义 */
    ElementType Data; /* 结点数据 */
    BinTree Left;     /* 指向左子树 */
    BinTree Right;    /* 指向右子树 */
};

// 代码4.4 二叉树中序遍历
void InorderTraversal(BinTree BT)
{
    if (BT)
    {
        InorderTraversal(BT->Left);
        /* 此处假设对BT节点的访问就是打印数据 */
        printf("%d", BT->Data); /* 假设数据为整型 */
        InorderTraversal(BT->Right);
    }
}

// 代码4.5 二叉树先序遍历
void PreorderTraversal(BinTree BT)
{
    if (BT)
    {
        printf("%d", BT->Data);
        PreorderTraversal(BT->Left);
        PreorderTraversal(BT->Right);
    }
}

// 代码4.6 二叉树后序遍历
void PostorderTraversal(BinTree BT)
{
    if (BT)
    {
        PostorderTraversal(BT->Left);
        PostorderTraversal(BT->Right);
        printf("%d", BT->Data);
    }
}

// 代码4.7 二叉树非递归中序遍历算法
void InorderTraversal(BinTree BT)
{
    BinTree T;
    Stack S = CreateStack(); /* 创建空堆栈S，元素类型位Bintree */
    T = BT;                  /* 从根节点出发 */
    while (T || !IsEmpty(S))
    {
        while (T) /* 一直向左并将沿途节点压入堆栈 */
        {
            Push(S, T);
            T = T->Left;
        }
        T = Pop(S);            /* 节点弹出堆栈 */
        printf("%d", T->Data); /* (访问)打印节点 */
        T = T->Right;          /* 转向右子树 */
    }
}

// 代码4.8 二叉树的层序遍历算法
void LevelorderTraversal(BinTree BT)
{
    Queue Q;
    BinTree T;

    if (!BT)
        return; /* 若是空树则直接返回 */

    Q = CreateQueue(); /* 创建空队列Q */
    AddQ(Q, BT);
    while (!IsEmpty(Q))
    {
        T = DeleteQ(Q);
        printf("%d", T->Data); /* 访问取出队列的节点 */
        if (T->Left)
            AddQ(Q, T->Left);
        if (T->Right)
            AddQ(Q, T->Right);
    }
}

// 代码4.9 二叉树叶节点输出算法
void PreorderPrintLeaves(BinTree BT)
{
    if (BT)
    {
        if (!BT->Left && !BT->Right) /* 如果BT节点是叶子 */
            printf("%d", BT->Data);
        PreorderPrintLeaves(BT->Left);
        PreorderPrintLeaves(BT->Right);
    }
}

// 代码4.10 求二叉树高度算法
int GetHeight(BinTree BT)
{
    int HL, HR, MaxH;

    if (BT)
    {
        HL = GetHeight(BT->Left);  /* 求左子树的高度 */
        HR = GetHeight(BT->Right); /* 求右子树的高度 */
        MaxH = HL > HR ? HL : HR;  /* 取左右子树较大的高度 */
        return (MaxH + 1);         /* 返回树的高度 */
    }
    else
        return 0; /* 空树高度为0 */
}

// 代码4.11 二叉树层序生成算法
#define NoInfo 0 /* 用 0 表示没有节点 */

BinTree CreatBinTree()
{
    ElementType Data;
    BinTree BT, T;
    Queue Q = CreateQueue(); /* 创建空队列 */

    /* 建立第一个节点，即根节点 */
    scanf("%d", &Data);
    if (Data != NoInfo)
    {
        /* 分配根节点单元，并将节点地址入队 */
        BT = (BinTree)malloc(sizeof(struct TNode));
        BT->Data = Data;
        BT->Left = BT->Right = NULL;
        AddQ(Q, BT);
    }
    else
        return NULL; /* 若第1个数据就是0，返回空树 */
    while (!IsEmpty(Q))
    {
        T = DeleteQ(Q);
        scanf("%d", &Data);
        if (Data == NoInfo)
            T->Left = NULL;
        else
        {
            T->Left = (BinTree)malloc(sizeof(struct TNode));
            T->Left->Data = Data;
            T->Left->Left = T->Left->Right = NULL;
            AddQ(Q, T->Left);
        }
        scanf("%d", &Data);
        if (Data == NoInfo)
            T->Left = NULL;
        else
        {
            T->Left = (BinTree)malloc(sizeof(struct TNode));
            T->Left->Data = Data;
            T->Left->Left = T->Left->Right = NULL;
            AddQ(Q, T->Left);
        }
    }
}