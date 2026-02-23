#include<iostream>
using namespace std;

//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A&)" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//A Func1()
//{
//	A aa;
//	return aa;
//}
//
//A Func2(A aa)
//{
//	return aa;
//}
//int main()
//{
//	A aa1;
//	A aa2=Func2(aa1);
//	return 0;
//}
//
//

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A&)" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//A Func1()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	A ra = Func1();
//	return 0;
//}





class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a=0)" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A&)" << endl;
	}
	void Print()
	{
		cout << _a << endl;
	}
private:
	int _a;
};



void  Func3(A aa)
{
	
}
int main()
{
	A aa1;
	Func3(aa1);
	return 0;
}


