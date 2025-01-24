#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
#include<stdio.h>
//初始化
void SLInit(SL* s)
{
	s->a = (SLDataType*)malloc(sizeof(SLDataType)*INIT_CAPACITY);
	if (s->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	s->size = 0;
	s->capicity = INIT_CAPACITY;
}
//销毁
void SLdestroy(SL* s)
{
	free(s->a);
	s->a = NULL;
	s->capicity = s->size = 0;
}
//尾增
void SLPushBack(SL* s, SLDataType x)
{
	if (s->size == s->capicity)
	{
		SLDataType* tep = (SLDataType*)realloc(s->a, sizeof(SLDataType)* s->capicity * 2);
		s->a = tep;
		s->capicity *= 2;
	}
	s->a[s->size++] = x;
	
}
//尾销毁
void SLPopBack(SL* s)
{
	assert(s->size);
	s->size--;
}
void Print(SL* ps)
{

	for (int i = 0;i < ps->size;i++)
		printf("%d ", ps->a[i]);
	printf("\n");
}
void SLpushFront(SL* s, SLDataType x)
{
	assert(s);
	if (s->size == s->capicity)
	{
		SLDataType* tep = (SLDataType*)realloc(s->a, sizeof(SLDataType) * s->capicity * 2);
		s->a = tep;
		s->capicity *= 2;
	}
	size_t end = s->size;
	while (end > 0)
	{
		s->a[end] = s->a[end - 1];
		end--;
	}
	s->a[0] = x;
	s->size++;
}
void SLpopFront(SL* s)
{
	assert(s->size > 0);
	size_t begin = 0;
	while (begin < s->size)
	{
		s->a[begin] = s->a[begin + 1];
		begin++;
	}
	s->size--;
}


void SLInsert(SL* s ,size_t pos, SLDataType x)
{
	assert(s);
	assert(pos >= 0 && pos <= s->size);
	if (s->size == s->capicity)
	{
		SLDataType* tep = (SLDataType*)realloc(s->a, sizeof(SLDataType) * s->capicity * 2);
		s->a = tep;
		s->capicity *= 2;
	}
	size_t end = s->size;
	while (end>pos)
	{
		s->a[end] = s->a[end - 1];
		end--;
	}
	s->a[pos] = x;
	s->size++;
}
void SLErase(SL* s, size_t pos)
{
	assert(s);
	assert(pos >= 0 && pos < s->size);
	size_t begin = pos + 1;
	while (begin < s->size)
	{
		s->a[begin - 1] = s->a[begin];
		begin++;
	}
	s->size--;
}
int SLFind(SL* s, SLDataType y)
{
	for (int i = 0;i < s->size;i++)
	{
		if (y == s->a[i])
			return i;
	}
	return -1;
}
void SLFind(SL* s, size_t pos, int x)
{
	s->a[pos] = x;
}