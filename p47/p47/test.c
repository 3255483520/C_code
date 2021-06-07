#define _CRT_SECURE_NO_WARNINGS 1
//作业1  喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
#include <stdio.h>

//int main()
//{
//	int money = 0;//总钱数
//	int total = 0;//汽水总数
//	int empty = 0;//空瓶总数
//
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = total;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//
//	return 0;
//}


//int main()
//{
//	int money = 0;//总钱数
//	int total = 0;//汽水总数
//	int empty = 0;//空瓶总数
//
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total =2*money-1;//这个代码有点问题，当输入money=0时，total=-1
//
//	printf("total=%d\n", total);
//
//	return 0;
//}



//int main()
//{
//	int money = 0;//总钱数
//	int total = 0;//汽水总数
//	int empty = 0;//空瓶总数
//
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//
//	printf("total=%d\n", total);
//
//	return 0;
//}


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
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);

	return 0;
}
