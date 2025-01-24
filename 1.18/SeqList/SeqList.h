#pragma once
#include <stdlib.h>
#include<assert.h>
#define INIT_CAPACITY 6
typedef  int SLDataType; 
typedef struct SeqList
{
	SLDataType* a;
	size_t size;
	size_t capicity;
}SL;
//˳���ĳ�ʼ��������
void SLInit(SL* s);
void SLdestroy(SL* s);
//β�壬βɾ
void SLPushBack(SL* s, SLDataType x);
void SLPopBack(SL* s);
//��ӡ
void Print(SL* ps);
//ͷ�壬ͷɾ
void SLpushFront(SL* s, SLDataType x);
void SLpopFront(SL* s);
//������λ�ò����ɾ��
void SLInsert(SL* s, size_t pos, SLDataType x);
void SLErase(SL* s, size_t pos);
int SLFind(SL* s, SLDataType y);
void SLFind(SL* s,size_t pos, int x);