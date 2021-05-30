#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };// (3, 4)这是逗号表达式
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//
//	return 0;
//}
//
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Init(arr, sz);//把数组初始化
//	Print(arr, sz);//打印
//
//	return 0;
//}


//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);//打印
//
//	return 0;
//}
//使用函数实现两个数的交换
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//		printf("%d ", arr1[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

//int main()//这个题目好好看看视频
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//这个题目好好看看视频
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//(char*)表示强制类型转换
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int i;//全局变量--不初始化--默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000 00000000 00000000 00000001--  -1的原码
//	//11111111 11111111 11111111 11111110--  -1的反码
//	//11111111 11111111 11111111 11111111--  -1的补码
//
//	if (i > sizeof(i))//sizeof()--计算变量/类型所占的大小，是>=0的无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//		
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//	return 0;
//}
