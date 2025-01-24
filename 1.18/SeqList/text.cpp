#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"SeqList.h"

void TextSLDataType()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 10);
	SLPushBack(&s, 9);
	SLPushBack(&s, 8);
	SLPushBack(&s, 7);
	SLPushBack(&s, 6);
	SLPushBack(&s, 5);
	SLPushBack(&s, 4);
	SLPopBack(&s);
	SLPopBack(&s);
	Print(&s);
}


void TextSLDataType1()
{
	SL s;
	SLInit(&s);
	SLpushFront(&s, 0);
	SLpushFront(&s, 1);
	SLpushFront(&s, 2);
	SLpushFront(&s, 3);
	SLpushFront(&s, 4);
	SLpushFront(&s, 5);
	SLpushFront(&s, 6);
	Print(&s);
	SLpopFront(&s);
	SLpopFront(&s);
	SLpopFront(&s);
	SLpopFront(&s);
	Print(&s);
}


void TextSLDataType2()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 10);
	SLPushBack(&s, 9);
	SLPushBack(&s, 8);
	SLPushBack(&s, 7);
	SLPushBack(&s, 6);
	SLPushBack(&s, 5);
	SLPushBack(&s, 4);
	Print(&s);
	SLInsert(&s, 1, 4);
	Print(&s);
	SLInsert(&s, 3, 10);
	Print(&s);
	SLInsert(&s, 6, 35);
	Print(&s);
	SLInsert(&s, 4, 29);
	Print(&s);
	SLErase(&s,4);
	Print(&s);
	SLErase(&s, 6);
	Print(&s);
	SLErase(&s, 5);
	Print(&s);
	SLErase(&s, 2);
	Print(&s);
}

int main()
{
	
	TextSLDataType2();
	return 0;
}