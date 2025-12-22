//#include<iostream>
//
//using namespace std;
//
//struct text
//{
//	void Print()
//	{
//		cout << "Hello Today" << endl;
//	}
//};
//int main()
//{
//	text p1;
//	p1.Print();
//	return 0;
//}




//#include<iostream>
//
//using namespace std;
//typedef int StDataType;
//
//typedef struct Stack
//{
//	StDataType* a;
//	int top;
//	int capacity;
//}Stack;
//
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->a = (StDataType*)malloc(sizeof(StDataType) * 4);
//	if (ps->a == NULL)
//	{
//		perror("malloc error");
//		return;
//	}
//	ps->top = 0;
//	ps->capacity = 4;
//}
////进行压栈
//void StackPush(Stack* ps, StDataType data)
//{
//	assert(ps);
//	if (ps->capacity == ps->top)
//	{
//		StDataType* tep = (StDataType*)realloc(ps->a, sizeof(StDataType) * ps->capacity * 2);
//		if (ps->a == NULL)
//		{
//			perror("realloc error");
//			return;
//		}
//		ps->a = tep;
//		ps->capacity *= 2;
//	}
//	ps->a[ps->top] = data;
//	ps->top++;
//}
////判断栈是否为空：
//bool StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
////进行出栈
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	ps->top--;
//}
////返回栈顶的元素
//StDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->a[ps->top - 1];
//}
////返回栈里面的元素
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->top;
//}
////销毁栈
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->capacity = 0;
//	ps->top = 0;
//}



//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void Init(int year, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//
//private:
//
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2025);
//	d1.Print();
//	return 0;
//}


#include<iostream>
using namespace std;

class Date
{
public:
	void Init(int year, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.Init(2025);
	d1.Print();
	return 0;
}