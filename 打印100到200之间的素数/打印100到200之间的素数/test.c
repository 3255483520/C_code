#define _CRT_SECURE_NO_WARNINGS 1

//�������壺�ֳ�ָ��������Ϊ�ڴ���1����Ȼ���У�����1�����������ⲻ������������


#include <stdio.h>
//�ߴ�ӡ��100��200֮�����
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
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
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

////����100��200֮�������ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
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


////�Ƚ�����������һ�����������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
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


//�Ƚ�����������һ�����������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
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
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//���i=a*b  a��b��������һ������<=��ƽ��i   ���磺16=2*8=4*4
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
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1 �Գ���
//		//����2->i-1
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

//дһ�������ж�һ�����ǲ�������
//int is_prime(int n)//����������1��������������0
//{
//	int j = 0;
//	for (j = 2; j < n; j++)//2��n-1�������Գ�
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	if (n == j)//��������û�ж�����
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//�ж�i�Ƿ�Ϊ����
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//���������ĸ���
int is_prime(int n)//����������1��������������0
{
	int j = 0;
	for (j = 2; j < n; j++)//2��n-1�������Գ�
	{
		if (n%j == 0)
			return 0;
	}
	if (n == j)//��������û�ж�����
		return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//�ж�i�Ƿ�Ϊ����
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);

	return 0;
}