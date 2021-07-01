#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//º∆À„1£°+2£°+3£°+......10!

int main()
{
	int i = 0;
	int sum1 = 1;
	int sum2 = 0;
	for (i = 1; i <= 10; i++)
	{
		sum1 *= i;
		sum2 += sum1;
	}
	printf("%d\n", sum2);

	return 0;
}