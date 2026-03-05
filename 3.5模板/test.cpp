#include<iostream>
using namespace std;

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
//	int _capacity;
//	int _size;
//};
//
//int main()
//{
//
//	return 0;
//}


//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		_array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void Push(const T& data)
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
//	T* _array;
//	int _capacity;
//	int _size;
//};
//
//int main()
//{
//	Stack<int> st1;
//	Stack<double>st2;
//	return 0;
//}



//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 3);
//
//private:
//	T* _array;
//	int _capacity;
//	int _size;
//};
//
//
//template<class T>
//Stack<T>:: Stack(size_t capacity )
//{
//	_array = new T[capacity];
//	_capacity = capacity;
//	_size = 0;
//}
//int main()
//{
//	Stack<int> st1;
//	Stack<double>st2;
//	return 0;
//}

template<class T>
void Stack<int>::Push(const T& data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}