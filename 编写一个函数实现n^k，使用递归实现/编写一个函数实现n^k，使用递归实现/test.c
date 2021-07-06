#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作业：编写一个函数实现n^k，使用递归实现
//int Pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k == 0)//这个程序有点缺陷，没有考虑k<0
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Pow(n,k-1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = Pow(n, k);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

double Pow(int n, int k)
{
	if (k < 0)
	{
		return (1.0 / (Pow(n, -k)));//这个程序完美
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*Pow(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);

	return 0;
}