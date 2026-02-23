#include<iostream>
using namespace std;

//class Date
//{
//    friend ostream& operator<<(ostream& _cout, const Date& d);
//    friend istream& operator>>(istream& _cin, Date& d);
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//    _cout << d._year << "-" << d._month << "-" << d._day;
//    return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//    _cin >> d._year;
//    _cin >> d._month;
//    _cin >> d._day;
//    return _cin;
//}
//int main()
//{
//	return 0;
//}


//class Time
//{
//    friend class Date;
//public:
//        Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {
//    }
//
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//
//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {
//    }
//
//    void SetTimeOfDate(int hour, int minute, int second)
//    {
//        // 直接访问时间类私有的成员变量
//        _t._hour = hour;
//        _t._minute = minute;
//        _t._second = second;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//    Time _t;
//};
//
//int main()
//{
//    return 0;
//}



//class A
//{
//
//};
//
//int main()
//{
//	A aa;//有名对象
//	A();//匿名对象
//	return 0;
//}


//class A
//{
//public:
//	A(int a=0)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A a1(1);//有名对象
//	//A();//匿名对象
//	a1.Print();
//
//	const A& ra = A(2);
//	a1.Print();
//	return 0;
//}

//class A
//{
//public:
//	A(int a=0)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//void push_back(const string& s)
//{
//	cout << s << endl;
//}
//int main()
//{
//	//有名对象
//	string s1("11111");
//	push_back(s1);
//	//匿名对象
//	push_back(string("11111"));
//	//隐式类型转换
//	push_back("11111");
//}
//




//class A
//{
//public:
//	A(int a=0)
//		:_a(a)
//	{
//		cout << "A(int a=0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	//有名对象调用函数
//	A a1(1);
//	a1.Print();
//	//匿名对象调用函数：
//	A(2).Print();
//	return 0;
//}


class A
{
public:
	A(int a)//非默认构造
		:_a(a)
	{
		cout << "A(int a=0)" << endl;
	}
	
private:
	int _a;
};

int main()
{
	A();//会报错
	A(2);//不会报错
	
	return 0;
}