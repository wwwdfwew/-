//#include<iostream>
//using namespace std;
//
//template <typename T1,typename T2>
//void Add(const T1&x,const T2&y)
//{
//	cout << x + y << endl;
//}
//int main()
//{
//	int a = 10, b = 20;
//	double c = 10.1, d = 20.1;
//	Add(a, c);
//	Add(b,d);
//	return 0;
//}


#include<iostream>
using namespace std;
//
//template <typename T>
//void Add(const T& x, const T& y)
//{
//	cout << x + y << endl;
//}
//int main()
//{
//	int a = 10, b = 20;
//	double c = 10.1, d = 20.1;
//	Add<int>(a, c);
//	Add<double>(b, d);
//	return 0;
//}



template <typename T>
void Add(const T& x, const T& y)
{
	cout << x + y << endl;
}
int main()
{
	int a = 10, b = 20;
	double c = 10.1, d = 20.1;
	Add(a, (int)c);
	Add(b, (int)d);
	return 0;
}


