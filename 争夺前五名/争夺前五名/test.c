#define _CRT_SECURE_NO_WARNINGS 1

//描述
//    期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。
//
//输入描述：
//    两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//输出描述：
//    一行，输出成绩最高的前五个，用空格分隔。
//示例1
//   输入：6
//         99 45 78 67 72 88
//   输出：
//         99 88 78 72 67

#include <stdio.h>

/*int main()
{
int n=0;
int arr[40]={0};
//获取人数
scanf("%d",&n);
int i=0;
//获取成绩的输入
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//对n个学生的成绩进行排序--降序
//冒泡排序
//冒泡排序的趟数
for(i=0;i<n-1;i++)
{
//一趟冒泡排序
int j=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]<arr[j+1])
{
int tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
}
}
}
//输出成绩最高的5个
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}

return 0;
}*/


/*int main()
{
int n=0;
int arr[40]={0};
//获取人数
scanf("%d",&n);
int i=0;
//获取成绩的输入
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//对n个学生的成绩进行排序--降序
//冒泡排序
//冒泡排序的趟数
for(i=0;i<n-1;i++)
{
int flag=1;
//一趟冒泡排序
int j=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]<arr[j+1])
{
int tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
flag=0;
}
}
if(flag==1)
{
break;
}
}
//输出成绩最高的5个
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}

return 0;
}*/



/*#include <stdlib.h>
int cmp_int(const void* e1,const void* e2)
{
return (*(int*)e1-*(int*)e2);
}

int main()
{
int n=0;
int arr[40]={0};
//获取人数
scanf("%d",&n);
int i=0;
//获取成绩的输入
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//qsort--C语言库函数--快速排序
qsort(arr,n,4,cmp_int);
//输出成绩最高的5个
for(i=n-1;i>=n-5;i--)
{
printf("%d ",arr[i]);
}

return 0;
}*/

#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int n = 0;
	int arr[40] = { 0 };
	//获取人数
	scanf("%d", &n);
	int i = 0;
	//获取成绩的输入
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//qsort--C语言库函数--快速排序
	qsort(arr, n, 4, cmp_int);
	//输出成绩最高的5个
	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}