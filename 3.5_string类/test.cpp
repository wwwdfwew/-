#include<iostream>
#include<string>

using namespace std;

//int main()
//{
//	string s1;//无参构造函数； string();
//	string s2("张三");//有参构造函数；字符，string (const char* s);
//	string s3(s2);//拷贝构造； string (const string& str);
//	string s4(10, '#');//用10个#对字符串进行初始化；string (size_t n, char c);
//	return 0;
//}

//
//int main()
//{
//	string s1("https://legacy.cplusplus.com/reference/string/string/string/");
//	string s2(s1, 8);
//	cout << s2 << endl;
//	return 0;
//}


//
//int main()
//{
//	string s1;
//	string s2;
//	s1 = s2;//对象赋值：string& operator= (const string& str);
//	s1 = '1111';//常量字符串赋值：string& operator= (const char* s);
//	s2 = '2';//字符赋值：string& operator= (char c);
//	return 0;
//}



int main()
{
	string s1("hello");
	s1.push_back(' ');//尾插一个空格

	s1.append("world");//尾插一个字符串

	s1 += ' ';
	s1 += "world";
	return 0;
}