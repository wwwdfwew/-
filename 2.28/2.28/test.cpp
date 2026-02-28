#include<iostream>
using namespace std;

template<typename T>
void Swap(T& left, T& right)
{
	T temp = left;
	left = right;
	right = temp;
}

int main()
{
	int a = 1, b = 2;
	double c = 1.1, d = 2.2;
	Swap(a, b);
	Swap(c, d);
	return 0;
}