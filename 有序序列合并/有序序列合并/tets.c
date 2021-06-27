#define _CRT_SECURE_NO_WARNINGS 1
//描述
//	输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//输入描述：
//	输入包含三行，
//	第一行包含两个正整数n, m（1 ≤ n, m ≤ 100），用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//	第二行包含n个整数（范围1~5000），用空格分隔。
//	第三行包含m个整数（范围1~5000），用空格分隔。
//输出描述：
//	输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//示例1
//	输入：
//		5 6
//		1 3 7 9 22
//		2 8 10 17 33 44
//	输出：
//		1 2 3 7 8 9 10 17 22 33 44

/*#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[100] = { 0 };
	//输入n和m
	scanf("%d %d", &n, &m);
	//输入两个升序序列
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//合并有序序列
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

	//arr3打印
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

	//输入n和m
	scanf("%d %d", &n, &m);
	//输入两个升序序列
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i<m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//合并有序序列
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