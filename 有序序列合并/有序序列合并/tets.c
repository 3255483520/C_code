#define _CRT_SECURE_NO_WARNINGS 1
//����
//	���������������е����У����������кϲ�Ϊһ���������в������
//����������
//	����������У�
//	��һ�а�������������n, m��1 �� n, m �� 100�����ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//	�ڶ��а���n����������Χ1~5000�����ÿո�ָ���
//	�����а���m����������Χ1~5000�����ÿո�ָ���
//���������
//	���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���
//ʾ��1
//	���룺
//		5 6
//		1 3 7 9 22
//		2 8 10 17 33 44
//	�����
//		1 2 3 7 8 9 10 17 22 33 44

/*#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[100] = { 0 };
	//����n��m
	scanf("%d %d", &n, &m);
	//����������������
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�ϲ���������
	i = 0;
	int j = 0;
	int k = 0;
	while (i<n&&j<m)
	{
		if (arr1[i]<arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)
	{
		for (; j<m; j++)
		{
			arr3[k++] = arr2[j];
		}
	}
	else
	{
		for (; i<n; i++)
		{
			arr3[k++] = arr1[i];
		}
	}

	//arr3��ӡ
	for (i = 0; i<k; i++)
	{
		printf("%d ", arr3[i]);
	}

	return 0;
}*/


#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };

	//����n��m
	scanf("%d %d", &n, &m);
	//����������������
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�ϲ���������
	i = 0;
	int j = 0;
	int k = 0;
	while (i<n&&j<m)
	{
		if (arr1[i]<arr2[j])
		{
			printf("%d ", arr1[i++]);
		}
		else
		{
			printf("%d ", arr2[j++]);
		}
	}
	if (i == n)
	{
		for (; j<m; j++)
		{
			printf("%d ", arr2[j]);
		}
	}
	else
	{
		for (; i<n; i++)
		{
			printf("%d ", arr1[i]);
		}
	}

	return 0;
}