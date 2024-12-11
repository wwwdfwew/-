#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模拟实现strlen函数
//int my_strlen(char* arr)
//{
//	int ret = 0;
//	while (*arr)
//	{
//		ret++;
//		arr++;
//	}
//	return ret;
//}
//指针-指针：
//int my_strlen(char* arr)
//{
//	char* ret = arr;
//	while(*ret)
//		ret++;
//	return ret-arr ;
//}
//递归的方法：
//int my_strlen(const char* arr)
//{
//	
//	if (*arr == '\0')
//		return 0;
//	else
//		return my_strlen(arr+1) + 1;
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//---------------------------------------模拟实现strcpy函数
//char* my_strcpy( char* str1, const char* str2)
//{
//	char* ret = str1;
//	while (*str1)
//		str1++;
//	while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "abcdefg" };
//	char arr2[] = { "hijklmn" };
//	char* ret=my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}




//---------------------------------------模拟实现strcmp函数
//int my_strcmp( const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 != '\0' && *str2 != '\0')
//		if ((*str1 > *str2)||(*str1<*str2))
//			return (*str1 - *str2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcpde";
//	char arr2[] = "abchde";
//	int ret=my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf("arr1>arr2\n");
//	else if (ret < 0)
//		printf("arr1<arr2\n");
//	else
//		printf("arr1=arr2");
//	return 0;
//}

//------------------------------------------模拟实现strcat函数：
////char* my_strcat(char* arr1, char* arr2)
////{
////	char* ret = arr1;
////	while (*arr2)
////	{
////		*arr1 = *arr2;
////		arr1++;
////		arr2++;
////	}
////	*arr1 = '\0';
////	return ret;
////}
////int main()
////{
////	char arr1[20] = { "abcdefg" };
////	char arr2[] = { "hijk" };
////	char* ret = my_strcat(arr1, arr2);
////	printf("%s", ret);
////	return 0;
////}


//--------------------------------------模拟实现strncpy函数：
//char* my_strncpy( char* arr1, const char* arr2, int n)
//{
//	char* ret = arr1;
//	while (*arr1)
//		arr1++;
//	while (n)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "abcdefg" };
//	char arr2[] = { "hijklmn" };
//	int n = 0;
//	scanf("%d", &n);
//	char* ret = my_strncpy(arr1, arr2, n);
//	printf("%s", ret);
//	return 0;
//}

//模拟实现strncat函数：
//char* my_strncat(char* arr1, char* arr2,int n)
//{
//	char* ret = arr1;
//	while (n)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		n--;
//	}
//	*arr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { "abcdefg" };
//	char arr2[] = { "hijk" };
//	int n = 0;
//	scanf("%d", &n);
//	char* ret = my_strncat(arr1, arr2,n);
//	printf("%s", ret);
//	return 0;
//}


//-------------------------------------- - 模拟实现strncmp函数
//int my_strncmp( const char* str1, const char* str2,int n)
//{
//	for (int i = 1;i <= n-1;i++)
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (i < n && *str1 != *str2)
//			break;
//	}
//	
//		return *str1 - *str2;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr1[] = "abcpde";
//	char arr2[] = "abchde";
//	int ret=my_strncmp(arr1, arr2,n);
//	if (ret > 0)
//		printf("arr1>arr2\n");
//	else if (ret < 0)
//		printf("arr1<arr2\n");
//	else
//		printf("arr1=arr2");
//	return 0;
//}
#include<string.h>
char* my_strcpy(char* str1, const char* str2)
{
	char* ret = str1;
	while (*str1)
		str1++;
	while (*str2)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return ret;
}
int main()
{
	char arr1[20] = { "abcdefg" };
	char arr2[] = { "hijklmn" };
	char* ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}
char* my_strcat(char* arr1, char* arr2)
{
	char* ret = arr1;
	while (*arr2)
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	*arr1 = '\0';
	return ret;
}
int main()
{
	char arr1[20] = { "abcdefg" };
	char arr2[] = { "hijk" };
	char* ret = my_strcat(arr1, arr2);
	printf("%s", ret);
	return 0;
}