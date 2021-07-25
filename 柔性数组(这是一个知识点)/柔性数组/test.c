#define _CRT_SECURE_NO_WARNINGS 1

//柔性数组

//也许你从来没有听说过柔性数组(flexible array)这个概念，但是它确实是存在的。C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员

//柔性数组的特点：
//  1 结构中的柔性数组成员前面必须至少一个其他成员。
//  2 sizeof 返回的这种结构大小不包括柔性数组的内存。
//  3 包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

#include <stdio.h>
#include <stdlib.h>

//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//
//	return 0;
//}

//结论：柔性数组是不占内存空间的
//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//结果为4，可以得出结论柔性数组是不占内存空间的
//
//	return 0;
//}



//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//开辟24个字节
//	//                                     4             5*4=20个字节
//	//开辟了24个字节，sizeof(struct S)的结果是4个字节，也就是int n的字节（因为柔性数组arr[]是不占内存空间的）,前4个字节给int n,
//	//后20个字节（5个整型）给柔性数组arr[]
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4   去调试里面看
//	}
//
//	return 0;
//}


//代码1
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//开辟24个字节
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);//增加20个字节，共44个字节
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//上面这个程序的功能也可以用下面方法实现

//代码2
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));//开辟5个整型的字节
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};

//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));//开辟5个整型的字节
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int *ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//柔性数组（代码1）相对于非柔性数组（代码2）的优点：
//上述 代码1 和 代码2 可以完成同样的功能，但是 方法1 的实现有两个好处：
//
//第一个好处是：方便内存释放
//    如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给用户。用
//    户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你不能指望用户来发
//    现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好了，并返回给用户一个结构体
//    指针，用户做一次free就可以把所有的内存也给释放掉。
//第二个好处是：这样有利于访问速度.
//   连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正你跑不了
//   要用做偏移量的加法来寻址）