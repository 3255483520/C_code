#define _CRT_SECURE_NO_WARNINGS 1


//����
//      KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//����������
//           �������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//           ���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
//ʾ��1
//     ���룺2008 2
//     �����29

#include <stdio.h>

//int main()
//{
//	int year=0;
//	int month=0;
//
//	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//0��11
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

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//0��11

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