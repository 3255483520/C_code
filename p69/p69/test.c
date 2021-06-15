#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();//打印随机值
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;//局部变量，a在栈区上面
//
//	return &a;
//}
//
//int main()//这个程序有问题
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//int* test()
//{
//	static int a = 10;//前面加static，a在静态区区上面
//
//	return &a;
//}
//
//int main()//这个程序没有问题
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//#include <stdlib.h>
//int* test()
//{
//	int* ptr = malloc(100);//堆区
//
//	return ptr;
//}
//
//int main()//这个程序没有问题
//{
//	int* p = test();
//
//	return 0;
//}


//作业1
//这个程序会输出hello，但存在内存泄漏，忘记释放动态开辟的内存，导致内存泄漏了
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//修改正确后的程序
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//作业2
//void Test(void)
//{
//	char* str = (char*)malloc(100);//这道题目是有问题的
//	strcpy(str, "hello");//这道题目的考点：free释放str指向的空间后，并不会把str置为NULL
//	free(str);
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//修改正确后的程序
//void Test(void)
//{
//	char* str = (char*)malloc(100);//这道题目是有问题的
//	strcpy(str, "hello");//这道题目的考点：free释放str指向的空间后，并不会把str置为NULL
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//C/C++内存的开辟方式

//这个知识点已经整理好了，自己去看看，是一些文字性的东西