#include<iostream>
#include<string>

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
//
//
//void  Func3(A aa)
//{
//	
//}
//int main()
//{
//	A aa1;
//	Func3(aa1);
//	return 0;
//}
//
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
//	
//private:
//	int _a;
//};
//
//
//int main()
//{
//	A aa1(1);
//	A aa2 = 2;
//	return 0;
//}

//class list
//{
//public:
//	void push_back(const string& st)
//	{
//		cout << st << endl;
//	}
//};
//
//int main()
//{
//	//插入1
//	string str1("张三");
//	list lt;
//	lt.push_back(str1);
//	//插入2
//	lt.push_back("张三");
//	return 0;
//}

//
//class A
//{
//public:
//    A() { ++_scount; }
//    A(const A& t) { ++_scount; }
//    ~A() { --_scount; }
//    static int GetACount() { return _scount; }
//private:
//    static int _scount;
//};
//
//int A::_scount = 0;
//
//void TestA()
//{
//    cout <<__LINE__<<" " << A::GetACount() << endl;
//    A a1, a2;
//    A a3(a1);
//    cout <<__LINE__<<" " << A::GetACount() << endl;
//}
//int main()
//{
//    TestA();
//    return 0;
//}


//class A
//{
//public:
//	static A GetStackObj()//栈
//	{
//		A aa;
//		return aa;
//	}
//	static A* GetHeapObj()//堆
//	{
//		return new A;
//	}
//private:
//	A()
//	{
//
//	}
//};
//
//int main()
//{
//	A::GetStackObj();//在栈上创建对象
//	A::GetHeapObj();//在堆上创建对象
//	return 0;
//
//}



class A
{
public:
	explicit A(int a = 0)
		:_a(a)
	{
		cout << "A(int a=0)" << endl;
	}

private:
	int _a;
};

int main()
{
	A aa1(1);
	A aa2 = 2;
	return 0;
}