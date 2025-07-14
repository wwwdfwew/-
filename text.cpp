#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int a = 1;//全局域
//namespace name
////命名空间域
//{
//	int a = 2;
//}
//int main()
//{
//	int a = 0;//局部域
//	printf("%d",a);
//	return 0;
//}

//#include<iostream>
//#include"text1.h";
//#include"text2.h";
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//	cout << bit::x << bit::y << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//void Default(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	//未给入实参：
//	Default();//则默认a=0;
//	//给入实参：
//	Default(10);//a=10;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//
//void Default(int a ,int b=20,double c=30.12)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl<<endl;
//}
//int main()
//{
//	
//	Default(100);//a=100，b和c采用默认值；
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//#include"ol.h"
//
//int main()
//{
//	Add(1);
//	Add(1, 2);
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int a = 10;
//	int& b = a;//a的别名为b
//	int x = 20;
//	b = x;
//	printf("%d\n",a);
//	printf("%d\n", b);
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//
//	return 0;
//}

#include<iostream>
using namespace std;


void revise(int*& ps)
{
	int* newnode = (int*)malloc(sizeof(int) * 4);
	ps = newnode;
	printf("newnode:%p\n", newnode);
}
int main()
{
	int a = 20;
	int* p = &a;
	printf("%p\n", p);
	revise(p);
	printf("%p\n", p);
	return 0;
}
