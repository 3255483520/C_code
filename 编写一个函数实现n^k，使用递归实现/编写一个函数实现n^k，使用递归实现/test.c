#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ҵ����дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//int Pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k == 0)//��������е�ȱ�ݣ�û�п���k<0
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
		return (1.0 / (Pow(n, -k)));//�����������
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