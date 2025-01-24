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
//β��
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

//ͷ��
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

//ͷɾ
void SLPopFront(SLTNode** pphead)
{
	//û�н�㣺
	assert(*pphead);
	//ֻ��һ�����ʱ
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//������ʱ��
	else
	{
		SLTNode* first = *pphead;
		*pphead = first->next;
		free(first);
		first = NULL;
	}
}
//βɾ��
void SLPopBack(SLTNode* phead)
{
	//û�н��ʱ��
	assert(phead);
	//ֻ��һ�����ʱ��
	if (phead->next == NULL)
	{
		free(phead);
		phead = NULL;
	}
	//�ж�����ʱ��
	SLTNode* end = phead;
	SLTNode* pre = NULL;
	//�ҵ�β��㣺
	while (end->next != NULL)
	{
		pre = end;
		end = end->next;
	}
	free(end);
	pre->next = NULL;
}

//����β��
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

//����β���ͷɾ
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

//����ͷ���βɾ
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
