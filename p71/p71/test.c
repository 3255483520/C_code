#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//柔性数组
//也许你从来没有听说过柔性数组（flexible array）这个概念，但是它确实是存在的。 C99 中，结构中的最
//后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。

////例如：
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//
//	return 0;
//}
////有些编译器会报错无法编译可以改成：
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//
//	return 0;
//}


//柔性数组的特点：
//1 结构中的柔性数组成员前面必须至少一个其他成员。
//2 sizeof 返回的这种结构大小不包括柔性数组的内存。
//3 包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小


//struct S
//{
//	int n;//4个字节
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct S));//sizeof 返回的这种结构大小不包括柔性数组的内存。
//
//	return 0;
//}

//struct S
//{
//	int n;//4个字节
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	struct S s;//这个写法和上面一个程序的写法表达的意思是一样的
//	printf("%d\n", sizeof(s));//sizeof 返回的这种结构大小不包括柔性数组的内存。
//
//	return 0;
//}



//struct S
//{
//	int n;//4个字节
//	int arr[];//柔性数组成员//40个字节
//};
//
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	//给数组赋值0 1 2 3 4 5 6 7 8 9
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;//给数组赋值0 1 2 3 4 5 6 7 8 9
//	}
//	//打印出数组
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);//打印出数组
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//上面一个程序的另外一种写法
struct S
{
	int n;//4个字节
	int* arr;//柔性数组成员//40个字节
};

int main()
{
	int i = 0;
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	//给数组赋值0 1 2 3 4 5 6 7 8 9
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;//给数组赋值0 1 2 3 4 5 6 7 8 9
	}
	//打印出数组
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);//打印出数组
	}
	//释放内存
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;

	return 0;
}

