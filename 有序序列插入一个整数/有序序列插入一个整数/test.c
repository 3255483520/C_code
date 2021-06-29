#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int N = 0;
	//输入一个整数N
	scanf("%d", &N);
	int i = 0;
	int arr[50] = { 0 };
	//输入N个整数
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	//输入一个要插入的整数
	int M = 0;
	scanf("%d", &M);

	for (i = 0; i < N - 1; i++)
	{
		if (M < arr[N - 1-i])
		{
			arr[N-i] = arr[N - 1-i];
		}

	}

	for (i = 0; i < N + 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
