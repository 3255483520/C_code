#define _CRT_SECURE_NO_WARNINGS 1
//描述
//	有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//输入描述：
//	第一行输入一个整数(0≤N≤50)。
//	第二行输入N个整数，输入用空格分隔的N个整数。
//	第三行输入想要进行删除的一个整数。
//输出描述：
//	输出为一行，删除指定数字之后的序列。
//	示例1
//	输入：
//		6
//		1 2 3 4 5 9
//		4
//输出：
//		1 2 3 5 9


#include <stdio.h>

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int del = 0;
	int i = 0;
	int j = 0;
	//输入数据
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//读取要删除的数字
	scanf("%d", &del);
	for (i = 0; i<n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}

	for (i = 0; i<j; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
