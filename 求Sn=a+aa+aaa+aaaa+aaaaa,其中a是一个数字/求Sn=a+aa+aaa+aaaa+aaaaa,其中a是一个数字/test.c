#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//作业2  求Sn=a+aa+aaa+aaaa+aaaaa,其中a是一个数字
//例如：2+22+222+2222+22222

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d%d", &a, &n);
	int sum = 0;
	int i = 0;
	int ret = 0;

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}