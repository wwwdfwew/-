#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType date;
	struct SListNode* next;
}SLTNode;
void SLNInit(SLTNode* a)
{
	SLTNode* ps = a;
	for (ps;ps != NULL;ps=ps->next) {
		ps->date = 1;
	}
}
void SLPrint(SLTNode* b)
{
	SLTNode* phead = b;
	while (phead != NULL)
	{
		printf("%d ", phead->date);
		phead = phead->next;
	}
	printf("\n");
}
//尾插
void SLPushBack(SLTNode** phead, SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->date = x;
	newnode->next = NULL;
	if (*phead == NULL)
		*phead = newnode;
	else
	{
		SLTNode* crr = *phead;
		while (crr->next != NULL)
		{
			crr = crr->next;
		}
		crr->next = newnode;
	}
}

//头插
void SLPushFront(SLTNode** pphead, SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->date = x;
	newnode->next = NULL;
	if (*pphead == NULL)
		*pphead = newnode;
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}

//头删
void SLPopFront(SLTNode** pphead)
{
	//没有结点：
	assert(*pphead);
	//只有一个结点时
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//多个结点时：
	else
	{
		SLTNode* first = *pphead;
		*pphead = first->next;
		free(first);
		first = NULL;
	}
}
//尾删：
void SLPopBack(SLTNode* phead)
{
	//没有结点时：
	assert(phead);
	//只有一个结点时：
	if (phead->next == NULL)
	{
		free(phead);
		phead = NULL;
	}
	//有多个结点时：
	SLTNode* end = phead;
	SLTNode* pre = NULL;
	//找到尾结点：
	while (end->next != NULL)
	{
		pre = end;
		end = end->next;
	}
	free(end);
	pre->next = NULL;
}

//测试尾插
void TextSListNode()
{
	SListNode* phead = NULL;
	SLPushBack(&phead, 1);
	SLPushBack(&phead, 2);
	SLPushBack(&phead, 3);
	SLPushBack(&phead, 4);
	SLPushBack(&phead, 5);
	SLPrint(phead);

}

//测试尾插和头删
void TextSListNode1()
{
	SListNode* phead = NULL;
	SLPushBack(&phead, 1);
	SLPushBack(&phead, 2);
	SLPushBack(&phead, 3);
	SLPushBack(&phead, 4);
	SLPushBack(&phead, 5);
	SLPrint(phead);
	SLPopFront(&phead);
	SLPrint(phead);
	SLPopFront(&phead);
	SLPrint(phead);
	SLPopFront(&phead);
	SLPrint(phead);
	SLPopFront(&phead);
	SLPrint(phead);
	SLPopFront(&phead);
	SLPrint(phead);
}

//测试头插和尾删
void TextSListNode2()
{
	SListNode* phead = NULL;
	SLPushFront(&phead, 5);
	SLPushFront(&phead, 4);
	SLPushFront(&phead, 3);
	SLPushFront(&phead, 2);
	SLPushFront(&phead, 1);
	SLPrint(phead);
	SLPopBack(phead);
	SLPrint(phead);
	SLPopBack(phead);
	SLPrint(phead);
	SLPopBack(phead);
	SLPrint(phead);
	SLPopBack(phead);
	SLPrint(phead);
}
int main()
{
	
	return 0;
}
