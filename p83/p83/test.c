#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//带副作用的宏参数
#define MAX(X,Y) ((X>Y)?(X):(Y))

//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max=MAX((a++)>(b++)?(a++):(b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}



//宏和函数对比

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X>Y)?(X):(Y))
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}

//宏通常被应用于执行简单的运算。比如在两个数中找出较大的一个。
//#define MAX(a, b) ((a)>(b)?(a):(b))
//那为什么不用函数来完成这个任务？ 原因有二：
//  1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比函数在程序
//   的规模和速度方面更胜一筹。
//  2. 更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之这个宏怎可
//   以适用于整形、长整型、浮点型等可以用于>来比较的类型。宏是类型无关的。
//当然和宏相比函数也有劣势的地方：
//  1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//  2. 宏是没法调试的。
//  3. 宏由于类型无关，也就不够严谨。
//  4. 宏可能会带来运算符优先级的问题，导致程容易出现错。
//宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到。


//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret=sizeof(int);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//undef函数的使用---用于移除一个宏定义

#define MAX 100

int main()
{
	printf("MAX=%d\n", MAX);

#undef MAX

	printf("MAX=%d\n", MAX);

	return 0;
}

