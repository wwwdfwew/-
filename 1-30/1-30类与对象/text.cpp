#include<iostream>
using namespace std;

//void func(int i)
//{
//
//}
//
//void func1(Date d)
//{
//
//}
//int main()
//{
//	Date d1;
//	
//	func1(d1);
//	func(10);
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void func(int i)
//{
//
//}
//
//void func1(Date d)
//{
//
//}
//int main()
//{
//	Date d1;
//	
//	func1(d1);
//	func(10);
//	return 0;
//}
//


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// Date(const Date& d)   // 正确写法
//	Date(const Date& d)
//		// 错误写法：编译报错，会引发无穷递归
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2026,1,30);
//	Date d2;
//
//	d2 = d1;//赋值重载，看赋值运算符的颜色
//
//	Date d5 = d1;//拷贝构造，对比两者赋值运算符的颜色 
//	
//	return 0;
//}
//



//class Date
//	{
//	public:
//		Date(int year = 1900, int month = 1, int day = 1)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		Date(const Date& d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		bool operator>(const Date& d)
//		{
//			if (_year > d._year)
//				return true;
//			else if (_year == d._year && _month > d._month)
//				return true;
//			else if (_year == d._year && _month == d._month && _day > d._day)
//				return true;
//			else
//				return false;
//		}
//	private:
//		int _year;
//		int _month;
//		int _day;
//	};
//	
//	int main()
//	{	
//		Date d1(2026, 2, 1);
//		Date d2(2026, 1, 30);
//		cout << (d1 > d2) << endl;
//		return 0;
//	}
//	



class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		cout << "Date(const Date& d)" << endl;
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date operator=(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		return *this;
	}

	void Print()
	{
		cout << "_year" << "-" << "_month" << "-" << "_day" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2026, 1, 30);
	Date d2, d3;
	d3 = d2 = d1;
	return 0;
}




