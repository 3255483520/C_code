#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//求出1000到2000之间的闰年，闰年满足以下两个条件
//1 能被4整除而不能被100整除
//2 能被400整除
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//计算1000到2000之间的闰年个数是多少
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//
//	return 0;
//}

//体会这个程序和上一个程序的不同之处（多一个换行的代码）
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//
//	return 0;
//}

//体会这个程序和上一个程序的不同之处（换行程序写的很巧妙）
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//用函数实现
//int Is_Leap_Year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (Is_Leap_Year(year)==1)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

int Is_Leap_Year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (Is_Leap_Year(year) == 1)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);

	return 0;
}