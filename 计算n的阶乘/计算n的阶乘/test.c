#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//有多组输入
int main()
{
	int i = 0;
	int n = 0;
	
	while (scanf("%d", &n) != EOF)
	{
		int sum = 1;

		for (i = 1; i <= n; i++)
		{
			sum *= i;
		}
		printf("%d\n", sum);
	}

	return 0;
}