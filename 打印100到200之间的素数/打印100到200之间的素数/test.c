#define _CRT_SECURE_NO_WARNINGS 1

//素数定义：又称指数，定义为在大于1的自然数中，除了1和它本身以外不再有其他因数


#include <stdio.h>
//线打印出100到200之间的数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

////计算100到200之间素数的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}


////比较这个程序和上一个程序的区别
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//
//	return 0;
//}


//比较这个程序和上一个程序的区别
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//如果i=a*b  a和b中至少有一个数字<=开平方i   例如：16=2*8=4*4
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}



//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1 试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//写一个函数判断一个数是不是素数
//int is_prime(int n)//是素数返回1，不是素数返回0
//{
//	int j = 0;
//	for (j = 2; j < n; j++)//2到n-1都进行试除
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	if (n == j)//这句代码有没有都可以
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//判断i是否为素数
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//计算素数的个数
int is_prime(int n)//是素数返回1，不是素数返回0
{
	int j = 0;
	for (j = 2; j < n; j++)//2到n-1都进行试除
	{
		if (n%j == 0)
			return 0;
	}
	if (n == j)//这句代码有没有都可以
		return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//判断i是否为素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);

	return 0;
}