#include<iostream>
using namespace std;

//class Data
//{
//public:
//	Data(int year, int month, int day)
//	{
//		cout << "Data()" << endl;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Data d(2026, 1, 26);
//	return 0;
//}

//class Data
//{
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Data d;
//	return 0;
//}


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(DataType data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity;
//	int _size;
//};
//
//void TestStack()
//{
//	Stack s;
//	s.Push(1);
//	s.Push(2);
//}
//
//int main()
//{
//	TestStack();
//	return 0;
//}

//class Time
//{
//	public:
//		~Time()
//		{
//			cout << "~Time()" << endl;
//		}
//	private:
//		int _hour;
//		int _minute;
//		int _second;
//};
//class Date
//{
//	private:
//		// 基本类型(内置类型)
//		int _year = 1970;
//		int _month = 1;
//		int _day = 1;
//		// 自定义类型
//		Time _t;
//};
//int main()
//{
//	Date d;
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
//int main()
//{
//	Date d1;
//	Date d2(d1);
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
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);//拷贝d1
//	return 0;
//}


typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}
		_capacity = capacity;
		_size = 0;
	}
	void Push(DataType data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}
	~Stack()//显式定义的析构函数
	{
		cout << "~Stack()" << endl;
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}
private:
	DataType* _array;
	int _capacity;
	int _size;
};

int main()
{
	Stack s;
	Stack s1(s);
	return 0;
}