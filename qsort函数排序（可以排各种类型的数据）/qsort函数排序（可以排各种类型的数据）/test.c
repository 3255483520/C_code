#define _CRT_SECURE_NO_WARNINGS 1

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
//	{4
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



#include <stdlib.h>//qsort函数的头文件
//qsort--quick sort快速排序
//void qsort(void *base,
//	       size_t num, 
//		   size_t width, 
//		   int(__cdecl *compare)(const void *elem1, const void *elem2));
//
//void qsort(void *base, 
//	       size_t num, 
//		   size_t width, 
//		   int(*cmp)(const void *e1, const void *e2));//qsort函数的第四个参数是函数指针类型的

//介绍void* 的指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;//a的地址是int*类型的，而pc是char*类型的，所以会发生警告
//
//	char ch = 'w';
//	void* p = &a;//没有警告
//	void* pp = &ch;//没有警告
//	//void* 类型的指针，可以接收任意类型的地址（且不会发生警告）
//	p = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	void* p = &a;// 
//
//	*p = 0;//void* 类型的指针，不能进行解引用操作，因为void* 没有具体的数据类型，解引用操作时，访问几个字节不能确定
//	p++;//p++运算也不行，void*类型的指针也不能进行加减整数的操作，因为不知道void*的类型，无法确定加一次向前迈进几个字节
//
//	return 0;
//}





//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//e1,e2是void*的指针（e1、e2都是指针），不能直接解引用操作，因为我们比较的是两个整型元素，
//	                             //所以强制类型转换为int*型：（int*）e1,变成了一个整型的地址，整型地址解引用：*(int*)e1，就访问了一个整型数据
//}                                //找到这个整型元素
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


#include <stdlib.h>//qsort函数的头文件
//qsort--quick sort快速排序
//用qsort排序整型数组

//把上面一个程序封装为一个函数来实现（为了让代码看的更清晰一点，写成函数来实现也符合C语言的趋势）
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
//	return *(float*)e1 - *(float*)e2;//这里会有一个警告，因为*(float*)e1和*(float*)e2都是浮点数，浮点数减去浮点数结果还是浮点数，说明return返回的是
//}                                    //浮点数，但int cmp_float(const void* e1, const void* e2)这个函数的返回类型是int型，所以会发生警告
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
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}

////用qsort排序浮点型数组
#include <stdlib.h>//qsort函数的头文件
//qsort--quick sort快速排序

//int cmp_float(const void* e1, const void* e2)
//{
//	//当elem1>elem2时，返回1
//	//当elem1=elem2时，返回0	
//	//当elem1<elem2时，返回-1
//	if (*(float*)e1 == *(float*)e2)//这么写就没有警告了，因为return返回的0 1 -1都是int型的
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
//	return ((int)(*(float*)e1 - *(float*)e2));//强制类型转换，因为*(float*)e1和*(float*)e2都是浮点数，浮点数减去浮点数结果还是浮点数，
//                                              //即(*(float*)e1 - *(float*)e2)的结果是浮点数，强制类型转换为int型的，就不会发生警告了
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
//}

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
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//e1是void*类型的指针，需要强制类型转换为结构体指针struct Stu*,转换为
//}                                                          //结构体指针后用“->“可以找到age(结构体指针后用“->“找到的age是int型的,
//                                                           //int cmp_stu_by_age(const void* e1, const void* e2)的返回类型也是int型的，所以不会发生警告）
//                                                           //对e2来说也是这样的
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//   //这里就不进行打印了，自己去调试里面看，自己理解程序就好了
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
	//比较名字就是比较字符串
	//字符串比较不能直接用><=来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//strcmp(M1,M2)函数的用法：
	//M1>M2,返回1
	//M1=M2,返回0
	//M1<M2，返回-1
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//            函数指针的两个参数是：待比较的两个元素的地址
	
	//这里就不进行打印了，自己去调试里面看，自己理解程序就好了
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