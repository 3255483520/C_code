#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ҵ3  ��ӡˮ�ɻ���

//���100��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1^3��5^3��3^3 ����153��һ����ˮ�ɻ�������

//int main() 
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//
//	for (i = 100; i < 1000; i++)
//	{		
//			int ge = i % 10;
//			int shi = (i / 10) % 10;
//			int bai = i / 100;
//
//			if (i==ge*ge*ge+shi*shi*shi+bai*bai*bai)
//			{
//				printf("%d ", i);
//			}
//	}
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//
//	for (i = 100; i < 1000; i++)
//	{
//		int ge = i % 10;
//		int shi = (i / 10) % 10;
//		int bai = i / 100;
//
//		if (i == pow(ge,3) + pow(shi,3) + pow(bai,3))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//	int n = 0;
//
//	for (i = 100; i < 1000; i++)
//	{
//		int ge = i % 10;
//		int shi = (i / 10) % 10;
//		int bai = i / 100;
//		n = pow(ge, 3) + pow(shi, 3) + pow(bai, 3);
//
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}









/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/


#include <math.h>//pow������ͷ�ļ�
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���,��Ҫ3��
		//1 ����i��λ��---nλ��
		//2 ����i��ÿһλ��n�η�֮��---sum
		//3 �Ƚ�i==sum

		//1 ����i��λ��---nλ��
		int n = 1;//nλ��   ����дһ������������1λ��
		//
		int tmp = i;
		int sum = 0;

		while (tmp/=10)
		{
			n++;
		}
		//2 ����i��ÿһλ��n�η�֮��---sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//�������һ�����棬��Ϊpow��������ֵ��һ��double���͵ģ���sum��int�͵ģ����Ի��о������
			tmp /= 10;
		}
		//3 �Ƚ�i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}