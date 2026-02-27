#include<iostream>
using namespace std;

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		//cout << "A(int a = 0)" << endl;
//	}
//	~A()
//	{
//		//cout << "~A()" << endl;
//	}
//private:
//	int _a;
//	double _b;
//};
//int main()
//{
//	//A* p;
//	//int* p = nullptr;
//	///*int* p1;
//	//cout << sizeof(*P) << endl;
//	//cout << sizeof(*p1) << endl;*/
//	//do
//	//{
//	//	  p = new int[1024 * 1024];
//	//	cout << p << endl;
//	//} while (p);
//	//delete[] p;
//
//	A* p = nullptr;
//	do
//	{
//		p = new A[1024 * 1024];
//		cout << p << endl;
//	} while (p);
//	
//	return 0;
//}



//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		//cout << "A(int a = 0)" << endl;
//	}
//	~A()
//	{
//		//cout << "~A()" << endl;
//	}
//private:
//	int _a;
//	double _b;
//};
//int main()
//{
//	A* p = nullptr;
//	do
//	{
//		p = new A[1024 * 1024];
//		cout << p << endl;
//	} while (p);
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		//cout << "A(int a = 0)" << endl;
//	}
//	~A()
//	{
//		//cout << "~A()" << endl;
//	}
//private:
//	int _a;
//	double _b;
//};
//int main()
//{
//	A* p = nullptr;
//	
//	try {
//		do
//		{
//			p = new A[1024*1024];
//			cout << p << endl;
//		} while (p);
//
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}


//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//	double _b;
//};
//
//int main()
//{
//	A* p = new A;
//	delete p;
//	return 0;
//}

//
//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		cout << "Stack(size_t capacity = 3)" << endl;
//
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void Push(DataType data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	// 其他方法...
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType* _array;
//	int       _capacity;
//	int       _size;
//};
//
//int main()
//{
//	//申请一个在堆上的栈对象：
//	Stack* p = new Stack;
//	delete p;
//	return 0;
//}



class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a = 0)" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};

int main()
{
	A* p = (A*)malloc(sizeof(A));
	new(p)A;
	p->~A();
	return 0;
}
