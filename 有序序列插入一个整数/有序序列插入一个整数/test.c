#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int N = 0;
	//����һ������N
	scanf("%d", &N);
	int i = 0;
	int arr[50] = { 0 };
	//����N������
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����һ��Ҫ���������
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
