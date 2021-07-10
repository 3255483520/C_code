#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////实现bubble_sort函数的程序员，它是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//
////qsort--quick sort快速排序
////void qsort(void *base,
////	       size_t num, 
////		   size_t width, 
////		   int(__cdecl *compare)(const void *elem1, const void *elem2));
////
////void qsort(void *base, 
////	       size_t num, 
////		   size_t width, 
////		   int(*cmp)(const void *e1, const void *e2));//qsort函数的第四个参数是函数指针类型的
//
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//cmp((char*)base + j*width和(char*)base + (j + 1)*width是两个元素的地址
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
				//(char*)base + j*width和(char*)base + (j + 1)*width是char*的指针，传到Swap函数的是char*的指针，假如两个8个字节的元素进行交换
				//char*的指针不知道怎么交换（一对一对进行交换，但是要交换几对就不清楚了），要把两个元素指向的地址进行交换，那么一个字符一个字
				//符进行交换的时候，需要知道这两个字符各是几个字节，从而让我们知道要交换几对才能搞定，所以要把元素的宽度也传过去，否则Swap函数内部没法
				//交换所有的字节
			}
		}
	}
}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort函数的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}



//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]),);
//}
//
//int main()
//{
//	test4();
//
//	return 0;
//}


//排序整型的数组

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////实现bubble_sort函数的程序员，它是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//int main()
//{
//	test4();
//
//	return 0;
//}


//排序结构体（按照年龄排）
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////实现bubble_sort函数的程序员，它是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test5();
//
//	return 0;
//}


//排序结构体（按照名字排）
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////实现bubble_sort函数的程序员，它是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test5();
//
//	return 0;
//}
