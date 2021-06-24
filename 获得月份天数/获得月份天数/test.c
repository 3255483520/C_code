#define _CRT_SECURE_NO_WARNINGS 1


//描述
//      KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//           多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//           针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//示例1
//     输入：2008 2
//     输出：29

#include <stdio.h>

//int main()
//{
//	int year=0;
//	int month=0;
//
//	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//0到11
//
//	while(scanf("%d %d",&year,&month)!=EOF)
//	{
//		int day=days[month-1];
//
//		if((year%4==0&&year%100!=0) || (year%400==0))
//		{
//			if(month==2)
//			day++;
//		}
//		printf("%d\n",day);
//
//	}
//	return 0;
//}

int main()
{
	int year = 0;
	int month = 0;

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//0到11

	while (scanf("%d %d", &year, &month) != EOF)
	{
		int day = days[month - 1];

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (month == 2)
				day++;
		}
		printf("%d\n", day);

	}
	return 0;
}