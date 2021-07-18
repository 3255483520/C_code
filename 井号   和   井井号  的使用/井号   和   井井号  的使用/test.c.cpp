#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#和##的使用

//int main()
//{
//	printf("hello world\n");//hello world
//	printf("hello " "world\n");//hello world
//	printf("hel""lo " "world\n");//hello world
//
//	return 0;
//}



//#define PRINT(X) printf("the value of X is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//the value of X is 10
//	PRINT(b);//the value of X is 20
//
//	return 0;
//}

//使用 # ，把一个宏参数变成对应的字符串
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()//这个程序要好好琢磨琢磨
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//the value of a is 10
//	//printf("the value of ""a"" is %d\n",X)   #X替换成"a" 
//	PRINT(b);//the value of b is 20
//	//printf("the value of ""b"" is %d\n",X)   #X替换成"b"
//
//	return 0;
//}


//##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符

#define CAT(X,Y) X##Y
int main()
{
	int Class84 = 2019;

	printf("%d\n", Class84);//2019

	printf("%d\n", CAT(Class, 84));//2019
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}