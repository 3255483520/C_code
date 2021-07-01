#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Binary_Search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid]<k)
		{
			left=mid+1;
		}
		else if (arr[mid]>k)
		{
			right=mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;		
}

int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;

	int ret = Binary_Search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n",ret);
	}

	return 0;
}