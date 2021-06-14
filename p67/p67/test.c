#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

//calloc函数的使用

//int main()
//{
//	int* p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc函数的使用----调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//  //这里就可以使用realloc来调整动态开辟的内存
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p2 + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//  //这里就可以使用realloc来调整动态开辟的内存
//	int* p2 = realloc(p, 40);
//	int i = 0;
//
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//  //这里就可以使用realloc来调整动态开辟的内存
//	p = realloc(p, 40);
//	int i = 0;
//
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//
//
//	//realloc使用的注意事项
//	//1 如果p指向的空间之后有足够的内存空间可以追加，则直接追加后返回p指向的空间（或者是p指向的地址）
//	//2 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//
//	p = realloc(p, 4000);
//	int i = 0;
//
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//
//
//	//realloc使用的注意事项
//	//1 如果p指向的空间之后有足够的内存空间可以追加，则直接追加后返回p指向的空间（或者是p指向的地址）
//	//2 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，并把原来内存中的数据拷贝回来，释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3 如果追加的内存空间过大，超过最大范围，得使用一个新的变量来接受realloc函数的返回值
//	int*ptr = realloc(p, INT_MAX);
//	int i = 0;
//	if (ptr != NULL)
//	{
//		p = ptr;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	return 0;
//}



//常见的动态内存错误

//1 对空指针NULL进行解引用操作
//int main()
//{
//	int* p =(int*) malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	*p = 0;//error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//error
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//2 对动态开辟的内存空间的越界访问
//int main()
//{
//	int* p =(int*) malloc(5*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3 对非动态开辟内存的free
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;

	free(p);
	p = NULL;

	return 0;
}