#define _CRT_SECURE_NO_WARNINGS 1


//int arr[5]           是个数组，数组里有5个元素，每个元素的类型是int型
//int* parr[10]        是个数组（指针数组），数组里有10个元素，每个元素的类型是int*型
//int (*parr2)[10]     是个指针（数组指针），指针指向的是一个数组，数组里有10个元素，每个元素的类型是int型
//int (*parr3[10][5])  parr3[10]是个数组，有10个元素，每个元素是个数组指针

#include <stdio.h>
//一维数组传参

//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//
//void test2(int *arr[])
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//
//int main()
//{
//	int arr1[10] = {0};
//	int *arr2[20] = { 0 };
//
//	test(arr1);
//	test2(arr2);
//
//	return 0;
//}

//二维数组传参

//void test(int arr[3][5])
//{}
//void test(int arr[][3])
//{}
////void test(int arr[3][])
////{}                       这两种写法不对，列数不能省略
////void test(int arr[][])
////{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	return 0;
//}


//void test3(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//
//	test3(arr);
//
//	return 0;
//}


//一级指针传参
//void test1(int* p)
//{}
//void test2(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int p1 = &a;
//	test1(&a);
//	test1(p1);
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//
//	return 0;
//}

//二级指针传参
//void test(int **p)
//{}
//
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];
//	test(arr);//指针数组也可以
//
//}

//数组指针-是指向数组的指针
//函数指针-是指向函数的指针-存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d\n", Add(a, b));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%p\n", Add);//&函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(char*) = Print;
	(*p)("hello bit");
}


