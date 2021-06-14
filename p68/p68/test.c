#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

//常见的动态内存错误

//1 对空指针NULL进行解引用操作
//int main()
//{
//	int* p =(int*) malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//  //malloc开辟空间失败-对NULL指针解引用
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
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//4 使用free释放动态开辟内存的一部分

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	//使用free释放动态开辟内存的一部分
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//5 对同一块动态内存的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用空间
//	//释放空间
//	free(p);
//	//......
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用空间
//	//释放空间
//	free(p);
//	p = NULL; //这样写是可以的，上面的那个程序不可以
//	free(p);
//
//
//	return 0;
//}

//6 动态开辟内存忘记释放（内存泄漏）
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	
//	return 0;
//}


//几个经典的笔试题

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//在这里这个程序会崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();//这个程序会崩溃
//
//	return 0;
//}
//1 运行代码会出现崩溃的现象
//2 程序存在内存泄漏的问题
// p是GetMemory函数的形参，只能函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放
// 并且无法找到，所以会造成内存泄漏

//怎么把上面的程序改正确(采用二级指针方式)
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//在这里这个程序会崩溃
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();//这个程序会崩溃
//
//	return 0;
//}

//另外一种改正方式（采用返回值的方式）

char* GetMemory(char *p)
{
	p = (char *)malloc(100);
	return p;
}
void Test(void)
{
	char *str = NULL;
	str=GetMemory(str);
	strcpy(str, "hello world");//在这里这个程序会崩溃
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	Test();//这个程序会崩溃

	return 0;
}