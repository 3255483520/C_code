#define _CRT_SECURE_NO_WARNINGS 1
//描述
//	KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。
//
//输入描述：
//	第一行包含两个整数n和m，表示两个矩阵包含n行m列，用空格分隔。
//	从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n*m个数，表示第一个矩阵中的元素。
//
//	从n + 2行到2n + 1，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n*m个数，表示第二个矩阵中的元素。
//	1 < n, m < 10
//输出描述：
//	一行，如果两个矩阵相等输出"Yes"并换行，否则输出"No"并换行。
//	示例1
//输入：
//	2 2
//	1 2
//	3 4
//	1 2
//	3 4
//输出：
//	Yes

#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				break;
		}
	}
	if (i == n&&j == m)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
