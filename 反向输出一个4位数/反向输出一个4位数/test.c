#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	// ‰»Î
	scanf("%d", &n);
	// ‰≥ˆ
	while (n != 0)
	{
		printf("%d", n % 10);
		n = n / 10;
	}

	return 0;
}