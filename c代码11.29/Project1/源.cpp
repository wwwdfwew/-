#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char a = 'a';
//	printf("%p\n", 'a');
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 11;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%c\n", &a - &b);
//	printf("%d", &a - &b);//�����ʱ��ת����������
//	return 0;
//}
//const char* my_strstr(const char* arr1, const char* arr2)
//{
//	
//	while (*arr2) {
//		const char* ret = arr1;
//		const char* Ret = arr2;
//		while (*ret == *Ret)
//		{
//			ret++;
//			Ret++;
//		}
//		if (*Ret == '\0')
//		{
//			return arr1;
//		}
//		else
//		{
//			arr1++;
//		}
//
//	}
//}
//int main()
//{
//	const char arr1[20] = { "abbbcedfg" };
//	const char arr2[] = {"bce"};
//	const char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//��n���ڵ������������ÿո����
//int main()
//{
//	int n;
//	int count = 0;
//	int flag = 1;
//	int arr[1000];
//	scanf("%d", &n);
//	for (int i = 2;i <= n;i++)
//	{
//		for (int j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//				flag = 0;
//		}
//		if (flag)
//		{
//			arr[count] = i;
//			count++;
//			
//		}
//		flag = 1;
//	}
//	for (int i = 0;i < count;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//KMP�㷨��Bվ���ش󲩸�
