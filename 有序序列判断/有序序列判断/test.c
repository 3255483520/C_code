#define _CRT_SECURE_NO_WARNINGS 1

//描述
//	输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
//输入描述：
//	第一行输入一个整数N(3≤N≤50)。
//	第二行输入N个整数，用空格分隔N个整数。
//输出描述：
//	输出为一行，如果序列有序输出sorted，否则输出unsorted。
//示例1
//输入：
//	5
//	1 6 9 22 30
//输出：
//	sorted
//示例2
//输入：
//	5
//	3 4 7 2 10
//输出：
//	unsorted


#include <stdio.h>

/*int main()
{
int n=0;
int arr[50]={0};
scanf("%d",&n);
int flag1=0;//升序
int flag2=0;//降序
int i=0;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(i>0)
{
if(arr[i]>arr[i-1])
{
flag1=1;
}
else
{
flag2=1;
}
}
}
if(flag1+flag2==1)
{
printf("sorted\n");
}
else
{
printf("unsorted\n");
}

return 0;
}*/

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int flag1 = 0;//升序
	int flag2 = 0;//降序
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i<n; i++)
	{
		if (i>0)
		{
			if (arr[i]>arr[i - 1])
			{
				flag1 = 1;
			}
			else
			{
				flag2 = 1;
			}
		}
	}

	if (flag1 + flag2 == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}