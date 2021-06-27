#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;
	int x = 0;
	int y = 0;
	int arr[10][10] = { 0 };
	int max = 0;

	scanf("%d %d", &n, &m);
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			if (arr[i][j]>max)
			{
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d\n", x+1, y+1);

	return 0;
}
