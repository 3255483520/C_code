#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;

	printf("please input a,b,c:\n");
	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	printf("The largest number is %d\n", max);

	return 0;
}