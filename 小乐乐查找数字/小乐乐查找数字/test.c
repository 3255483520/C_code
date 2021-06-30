#define _CRT_SECURE_NO_WARNINGS 1

//描述
//	给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
//输入描述：
//	共3行
//	第一行，一个整数，表示n（1 <= n <= 100）。
//	第二行，共输入n个整数，两个整数之间用空格分隔。
//	第三行，输入一个整数，表示要查找的整数x。
//输出描述：
//	一行，表示整数x出现的次数。
//示例1
//	输入：
//		5
//		1 1 2 1 3
//		1
//	输出：
//		3


#include <stdio.h>

int main()
{
	int n = 0;
	//输入一个整数n
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i = 0;
	int x = 0;
	int count = 0;
	//共输入n个整数
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//输入一个整数x
	scanf("%d", &x);
	//判断数组arr里的每一个元素和x是否相等
	for (i = 0; i<n; i++)
	{
		if (arr[i] == x)
			count++;
	}
	printf("%d", count);

	return 0;
}