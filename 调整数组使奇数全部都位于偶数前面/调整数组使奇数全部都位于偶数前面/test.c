#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//作业2 调整数组使奇数全部都位于偶数前面。
//题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)
{
	//1 从左边开始找一个偶数
	//2 从右边开始找一个奇数
	//3 把它们交换
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;//这个while里面是判断奇数的，当这个while停止时就找到偶数了
		}
		//到这里while ((left < right) && (arr[left] % 2 == 1))停止，在这里就找到偶数了

		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;//这个while里面是判断偶数的，当这个while停止时就找到奇数了
		}
		//到这里while ((left < right) && (arr[right] % 2 == 0))停止，在这里就找到奇数了
		if (left < right)//要交换，必须有left<right
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);

	return 0;
}