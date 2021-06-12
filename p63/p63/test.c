#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//联合大小的计算 
//联合的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍

union Un
{
	int a;
	char arr[5];
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}