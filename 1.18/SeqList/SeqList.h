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
//顺序表的初始化和销毁
void SLInit(SL* s);
void SLdestroy(SL* s);
//尾插，尾删
void SLPushBack(SL* s, SLDataType x);
void SLPopBack(SL* s);
//打印
void Print(SL* ps);
//头插，头删
void SLpushFront(SL* s, SLDataType x);
void SLpopFront(SL* s);
//在任意位置插入和删除
void SLInsert(SL* s, size_t pos, SLDataType x);
void SLErase(SL* s, size_t pos);
int SLFind(SL* s, SLDataType y);
void SLFind(SL* s,size_t pos, int x);