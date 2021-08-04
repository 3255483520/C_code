#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//知识点1 函数指针数组--用来存放函数地址的数组

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
//	while (scanf("%d%d", &a, &b) != EOF)//这句代码也可以写为：while (~scanf("%d%d", &a, &b))
//	{
//		int(*p[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组--用来存放函数的地址
//		//对于函数来说：函数名 和 &函数名 都表示函数的地址
//		int i = 0;
//		for (i = 0; i < 4; i++)
//		{
//			printf("%d\n", (*(p + i))(a, b));
//		}
//	}
//	
//	return 0;
//}




//知识点2 函数指针--用来存放函数地址的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);//30
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;//pa里面存的是函数的地址，*pa找到这个函数
//	                         //pa是指针，指向的是函数，函数的参数是两个int型，指向的这个函数的返回类型是int型
//	                         //pa里面存的是函数的地址，*pa找到这个函数，就去调用这个函数，传参（10，20），即(*pa)(10, 20)就是计算10+20的值
//
//	printf("%d\n", (*pa)(a,b));//30
//
//	return 0;
//}


//知识点3  数组指针--用来存放数组地址的指针

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//	//但是我们一般很少这样写代码
//
//	return 0;
//}

//看下面整个例子
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10 };
//	int(*pa)[10] = &arr;//pa是整个数组的地址，而不是数组首元素的地址
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//1 2 3 4 5 6 7 8 9 10   (*pa)是对整个数组解引用，（*pa）[i]解引用整个数组中的每一个元素
//	}
//
//	return 0;
//}

//也可以写成下面这样
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;//pa是整个数组的地址，而不是数组首元素的地址
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//1 2 3 4 5 6 7 8 9 10
//		                        //*pa==arr  而arr是数组名，也就是数组首元素的地址 *pa+i就是向后面跳i个元素，*(*pa+1)就是解引用数组里的每一个元素
//	}
//
//	return 0;
//}

//上面两种方法都比较复杂，下面的方法简单
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p=arr;//arr是数组首元素的地址
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//1 2 3 4 5 6 7 8 9 10
//	}
//
//	return 0;
//}







