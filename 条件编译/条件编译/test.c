#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//命令行定义

//int main()
//{
//
//
//	return 0;
//}


//条件编译
//条件编译
//     在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件编译指令。
//比如说：
//     调试性的代码，删除可惜，保留又碍事，所以我们可以选择性的编译。



//常见的条件编译指令：

//1.
//#if 常量表达式
////...
//#endif
////常量表达式由预处理器求值。
//如：
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}


//#define DEBUG
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG   //如果DEBUG被定义过，printf("%d ", arr[i]);这条语句就参与编译，否则就不参与编译
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//2.多个分支的条件编译
//#if 常量表达式
////...
//#elif 常量表达式
////...
//#else
////...
//#endif


//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}


//3.判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}


//#define DEBUG 0
//int main()
//{
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//
//	return 0;
//}


//4.嵌套指令
//#if defined(OS_UNIX)
//		#ifdef OPTION1
//				unix_version_option1();
//		#endif
//		#ifdef OPTION2
//				unix_version_option2();
//		#endif
//#elif defined(OS_MSDOS)
//		#ifdef OPTION2
//				msdos_version_option2();
//		#endif
//#endif
