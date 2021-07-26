#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int Sum = Add(a, b);

	printf("%d\n", Sum);

	return 0;
}