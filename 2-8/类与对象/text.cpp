//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year , int month, int day ) 
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	void Print() 
//	{
//		cout << _year << "-" << _month<< "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1(2026, 2, 8);
//	d1.Print();
//	const Date d2(2026, 2, 16);
//	d2.Print();
//	return 0;
//}



//
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year , int month, int day ) 
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{ }
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	
//	return 0;
//}




class A
{
public:
	A(int a)
		:_a(a)
	{
	}
private:
	int _a;
};
class B
{
public:
	B(int a, int ref)
		:_aobj(a)
		, _ref(ref)
		, _n(10)
	{
	}
private:
	A _aobj;
	// 没有默认构造函数
	int& _ref;
	// 引用
	const int _n;
};