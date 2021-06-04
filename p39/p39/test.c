#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//冒泡排序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
////用qsort排序整型数组
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}


////用qsort排序浮点型数组
//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}

////用qsort排序浮点型数组
//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}


////用qsort排序浮点型数组
//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));//强制类型转换
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}


//#include <stdlib.h>//qsort函数的头文件
////qsort--quick sort快速排序
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e1)->age;
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//   //这里就不进行打印了，自己理解程序就好了
//
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}


#include <stdlib.h>//qsort函数的头文件
#include <string.h>//strcmp函数的头文件
//qsort--quick sort快速排序

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

	//这里就不进行打印了，自己理解程序就好了

}

int main()
{
	test4();

	return 0;
}






//void* 类型的指针

//void* 类型的指针，可以接收任意类型的地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;//有警告，说明类型不匹配
//
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void* 类型的指针，可以接收任意类型的地址
//	return 0;
//}

//void* 类型的指针，不能进行解引用操作,也不能进行 + - 整数的操作
//int main()
//{
//	int a = 10;
//	
//	
//
//	void* p = &a;
//	*p = 0; // void* 类型的指针，不能进行解引用操作
//	p++;// void* 类型的指针，不能进行 + - 整数的操作
//	
//	return 0;
//}