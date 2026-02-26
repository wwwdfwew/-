#include<iostream>
using namespace std;


//class A
//{
//public:
//    A(int a = 0)
//        :_a(a)
//    {
//        cout << " A(int a = 0)" << endl;
//    }
//
//    ~A()
//    {
//        cout << "~A()" << endl;
//    }
//private:
//    int _a;
//};
//void Test()
//{
//    A* p1 = (A*)malloc(sizeof(A));
//    A* p2 = new A;
//    free(p1);
//    delete(p2);
//}
//
//int main()
//{
//   Test();
//	return 0;
//}



//class A
//{
//public:
//    A(int a = 0)
//        :_a(a)
//    {
//        cout << " A(int a = 0)" << endl;
//    }
//
//    ~A()
//    {
//        cout << "~A()" << endl;
//    }
//private:
//    int _a;
//};
//void Test()
//{
//    A* p1 = (A*)malloc(sizeof(A)*10);
//    A* p2 = new A[10];
//    free(p1);
//    delete[] p2;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}


//class A
//{
//public:
//    A(int a ,int b)
//        :_a(a)
//    {
//        cout << " A(int a = 0)" << endl;
//    }
//private:
//    int _a;
//};
//void Test()
//{
//    A* p2 = new A[2]{ A(1,1),A(1,2)};
//    delete[] p2;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}


class A
{
public:
    A(int a,int b)
        :_a(a)
    {
        cout << " A(int a = 0)" << endl;
    }
private:
    int _a;
};
void Test()
{
    A* p5 = (A*)malloc(sizeof(A) * 10);
    A* p6 = new A[3]{A(1,1),A(2,2),A(3,3)};
    free(p6);
    delete[] p5;
}

int main()
{
    Test();
    return 0;
}