#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//函数指针数组

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
	int* arr[5];//指针数组

	int(*pa)(int, int) = Add;//Sub/Mul/Div，这种写法只能放一个函数的地址，不能同时放4个元素的地址（pa是函数指针）
	//需要一个数组，这个数组可以存放4个函数的地址--函数指针的数组
	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针的数组，里面每一个元素都是函数指针（也就是函数的地址）
	//这里扔进去4个函数的地址,parr就是一个函数指针的数组
	//函数指针的数组，parr[4]是数组，数组4个元素，每个元素都是函数指针类型的（数组名加[]去掉，剩下的
	//就是数组元素类型，剩下的是int(*)(int, int)，这是一个函数指针，所以每个元素都是函数指针类型的）                     
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));//  parr[i]是某一个函数的地址，可以直接找到这个函数，后面再加上（2，3）传参去调用这个函数，
	}                                 //  函数的地址不需要写解引用*号(上面的程序已经说到)，

	return 0;
}