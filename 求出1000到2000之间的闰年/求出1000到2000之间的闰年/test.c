#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//���1000��2000֮������꣬��������������������
//1 �ܱ�4���������ܱ�100����
//2 �ܱ�400����
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

//����1000��2000֮�����������Ƕ���
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

//�������������һ������Ĳ�֮ͬ������һ�����еĴ��룩
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

//�������������һ������Ĳ�֮ͬ�������г���д�ĺ����
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

//�ú���ʵ��
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