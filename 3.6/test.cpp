//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<assert.h>
//#include<stdbool.h>
//#include<stdlib.h>
////声明堆：
//typedef int HeapDataType;
//
//typedef struct Heap
//{
//	HeapDataType* a;
//	int size;//有效数据的个数
//	int capacity;//数组的容量
//}Heap;
////初始化堆：
//void HeapInit(Heap* hp)
//{
//	hp->a = (HeapDataType*)malloc(sizeof(HeapDataType) * 4);//先开辟四个整形字节的数组空间
//	hp->capacity = 4;
//	hp->size = 0;
//}
////销毁堆
//void HeapDestory(Heap* hp)
//{
//	free(hp->a);//销毁我们创建的数组空间，这里不能销毁hp这个空间，因为其非我们动态开辟的空间
//	hp->capacity = 0;
//	hp->size = 0;
//}
////交换函数
//void temp(HeapDataType* parent, HeapDataType* child)
//{
//	int tep = *parent;
//	*parent = *child;
//	*child = tep;
//}
////向上调整。每次插入数据时都要进行调整使其符合堆的定义。
//void HeapAjust(Heap* hp, HeapDataType child)
//{
//	assert(hp);
//	while (child)
//	{
//		int parent = (child - 1) / 2;
//		if (hp->a[parent] > hp->a[child])
//		{
//			temp(&hp->a[parent], &hp->a[child]);
//		}
//		else
//		{
//			break;
//		}
//		child = parent;
//	}
//}
////向下调整
//void HeapAjustlow(Heap* hp)
//{
//	assert(hp);
//	int parent = 0;
//	int child = parent * 2 + 1;
//	while (child < hp->size)
//	{
//		if (child + 1 < hp->size && hp->a[child] > hp->a[child + 1])
//		{
//			temp(&hp->a[child], &hp->a[child + 1]);
//		}
//		if (hp->a[parent] > hp->a[child])
//		{
//			temp(&hp->a[parent], &hp->a[child]);
//		}
//		else
//		{
//			break;
//		}
//		parent = child;
//		child = parent * 2 + 1;
//	}
//}
////插入数据
//void HeapPush(Heap* hp, HeapDataType x)
//{
//	assert(hp);
//	if (hp->capacity == hp->size)
//	{
//		HeapDataType* tap = (HeapDataType*)realloc(hp->a, sizeof(HeapDataType) * hp->capacity * 2);
//		hp->a = tap;
//		hp->capacity *= 2;
//	}
//	hp->a[hp->size] = x;
//	HeapAjust(hp, hp->size);
//	hp->size++;
//}
//
////出数据
//void HeapPop(Heap* hp)
//{
//	assert(hp);
//	hp->a[0] = hp->a[hp->size - 1];
//	hp->size--;
//	HeapAjustlow(hp);
//}
////返回堆顶元素
//HeapDataType HeapTop(Heap* hp)
//{
//	assert(hp);
//	return hp->a[0];
//}
////判断堆是否为空。
//bool HeapEmpty(Heap* hp)
//{
//	return hp->size == 0;
//}
////测试
//void Text()
//{
//	Heap hp;
//	HeapInit(&hp);
//	HeapPush(&hp, 2);
//	HeapPush(&hp, 10);
//	HeapPush(&hp, 28);
//	HeapPush(&hp, 8);
//	HeapPush(&hp, 88);
//	HeapPush(&hp, 6);
//	while (!HeapEmpty(&hp))
//	{
//		printf("%d ", HeapTop(&hp));
//		HeapPop(&hp);
//	}
//	printf("\n");
//	HeapDestory(&hp);
//}
//
//int main()
//{
//	Text();
//	return 0;
//}
//
//
//int main()
//{
//	//Text();
//	Heap ps;
//	int a[] = { 1,3,15,7,2,8,13,9,0 };
//	ps.a = a;
//	for (int i = 1; i < 9; i++)
//	{
//		HeapAjust(&ps, i);
//	}
//	return 0;
//}


//int main()
//{
//	//Text();
//	Heap ps;
//	int a[] = { 1,3,15,7,2,8,13,9,0 };
//	ps.a = a;
//	for (int i = 1; i < 9; i++)
//	{
//		HeapAjust(&ps, i);
//	}
//	int n = 9;
//	for (int i = 0; i < n; i++)
//	{
//		temp(&ps.a[0], &ps.a[n - 1]);
//		n--;
//		for (int i = 1; i < n; i++)
//			HeapAjust(&ps, i);
//		i = 0;
//	}
//
//	return 0;
//}


int main()
{
	//Text();
	Heap ps;
	int a[] = { 2,11,1,15,8,4,6,7,3 };
	ps.a = a;
	ps.size = 9;
	for (int i = (ps.size - 1 - 1) / 2; i >= 0; i--)
	{
		HeapAjustlow(&ps, i);
	}
	return 0;
}