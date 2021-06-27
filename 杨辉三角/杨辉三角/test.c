#define _CRT_SECURE_NO_WARNINGS 1
//描述
//	KiKi知道什么叫杨辉三角之后对杨辉三角产生了浓厚的兴趣，他想知道杨辉三角的前n行，请编程帮他解答。杨辉三角，本质上是二项式(a + b)的n次方展开后各项
//	的系数排成的三角形。其性质包括：每行的端点数为1， 一个数也为1；每个数等于它左上方和上方的两数之和。
//输入描述：
//	第一行包含一个整数数n。(1≤n≤30)
//输出描述：
//	包含n行，为杨辉三角的前n行，每个数输出域宽为5。
//输入：
//	6
//输出：
//	1
//	1    1
//	1    2    1
//	1    3    3    1
//	1    4    6    4    1
//	1    5   10   10    5    1

#include <stdio.h>

/*int main()
{
int n=0;
scanf("%d",&n);
int arr[30][30]={0};
int i=0;
int j=0;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(j==0 || i==j)
{
arr[i][j]=1;
}
if (i>=2&&j>=1)
{
arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
}
}
}

for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%5d",arr[i][j]);
}
printf("\n");
}

return 0;
}*/

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30][30] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}

	for (i = 0; i<n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
