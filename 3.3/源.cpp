#include<stdio.h>
#include <stdlib.h>

int rand = 0;

int main()
{
	return 0;
}


namespace name
{
	// 命名空间中可以定义变量/函数/类型
	int a = 0;
	int b = 1;
	int Add(int left, int right)
	{
		return left + right;
	}
	struct Node
	{
		struct Node* next;
		int val;
	};
}


namespace N1
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N2
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

//text1.h:
namespace bit
{
	int x = 0;
}
//text2.h:
namespace bit
{
	int y = 0;
}
//text.cpp:
#include<iostream>
#include"text1.h";
#include"text2.h";
using namespace std;

int main()
{
	cout << "hello world" << endl;
	cout << bit::x << bit::y << endl;
	return 0;
}
