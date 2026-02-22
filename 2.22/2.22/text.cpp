//#include<iostream>
//using namespace std;
//
//class A
//{
//private:
//	static int k;
//	int j = 1;
//public:
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;
//			cout << a.j << endl;
//		}
//	};
//
//};
//
//int A::k = 2;
//
//int main()
//{
//	A a1;
//	A::B b1;
//	b1.foo(a1);
//	return 0;
//}



#include<iostream>
using namespace std;

class A
{
public:
	A(int a)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
	void Print()
	{
		cout << _a << endl;
	}
private:
	int _a ;
};

int main()
{
	A a1(1);//有名对象
	A(2);//匿名对象
	a1.Print();
	A(2).Print();//匿名对象调用函数
	return 0;
}