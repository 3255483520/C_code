#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//指针类型的意义：
//1 指针类型决定了指针解引用操作符能访问几个字节：
//char*类型    *p访问1个字节
//int*类型     *p访问4个字节
//double*类型  *p访问8个字节
//2 指针类型决定了指针+1，-1， 加的或者减的是几个字节
//char* p    p+1 跳过一个字节（跳过一个字符）
//int* p     p+1 跳过4个字节（跳过一个整型）
//double* p  p+1跳过8个字节（跳过一个双精度浮点型）

//int main()
//{
//	int a = 0x11223344;
//	int* p = &a;
//	*p = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//
//	return 0;
//}

//设计一个小程序来判断当前机器的字节序
//int main()
//{
//	int a = 1;
//	//1的二进制：00000000 00000000 00000000 00000001
//	//1的16进制：00000001
//	char* p = (char*)&a;//设计一个小程序来判断当前机器的字节序
//
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//把上面的代码封装成一个函数
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//设计一个小程序来判断当前机器的字节序
//	//返回1，小端
//	//返回0，大端
//	int ret=check_sys();
//
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//对上面代码优化
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}
//
//int main()
//{
//	//设计一个小程序来判断当前机器的字节序
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}


//对上面代码进一步优化
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	//设计一个小程序来判断当前机器的字节序
	//返回1，小端
	//返回0，大端
	int ret = check_sys();

	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	return 0;
}