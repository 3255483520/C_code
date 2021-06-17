#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define定义宏

//#define SQUART(X) X*X
//
//int main()
//{
//	int ret = SQUART(5);
//	//int ret=5*5;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define SQUART(X) X*X
//
//int main()
//{
//	int ret = SQUART(5+1);
//	//int ret=5+1*5+1;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//#define SQUART(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUART(5 + 1);
//	//int ret=(5+1)*(5+1);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//int ret=10*a+a=10*5+5;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define DOUBLE(X) (X+X)
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//int ret=10*(a+a)=10*(5+5);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//#define 替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//    1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
//    2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//    3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上述处理过程。
//注意：
//    1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//    2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。


//#和##的使用

//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo " "world\n");
//
//	return 0;
//}



//#define PRINT(X) printf("the value of X is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
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
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n",X)   #X替换成"a" 
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n",X)   #X替换成"b"
//
//	return 0;
//}


//##可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符

#define CAT(X,Y) X##Y
int main()
{
	int Class84 = 2019;

	printf("%d\n", Class84);

	printf("%d\n", CAT(Class, 84));
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}



