#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*p[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组--用来存放函数的地址
//	                                              //对于函数来说：函数名 和 &函数名 都表示函数的地址
//
//	int i = 0;
//	for(i = 0; i < 4; i++)
//	{
//		 
//		printf("%d\n", (*(p + i))(5, 2));
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int(*p[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组--用来存放函数的地址
//	//对于函数来说：函数名 和 &函数名 都表示函数的地址
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*(p + i))(a, b));
//	}
//
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d%d", &a, &b) != EOF)//这句代码也可以写为：while (~scanf("%d%d", &a, &b))
	{
		int(*p[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组--用来存放函数的地址
		//对于函数来说：函数名 和 &函数名 都表示函数的地址
		int i = 0;
		for (i = 0; i < 4; i++)
		{
			printf("%d\n", (*(p + i))(a, b));
		}
	}
	
	return 0;
}
