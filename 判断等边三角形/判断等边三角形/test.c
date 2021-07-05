#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a == b && a == c && b == c)
//		printf("是等边三角形\n");
//	else
//		printf("不是等边三角形\n");
//
//	return 0;
//}

//可以多组输入
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//
//	if (a == b && a == c && b == c)
//		printf("是等边三角形\n");
//	else
//		printf("不是等边三角形\n");
//
//	return 0;
//}

//可以多组输入
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf("%d %d %d", &a, &b, &c))

	if (a == b && a == c && b == c)
		printf("是等边三角形\n");
	else
		printf("不是等边三角形\n");

	return 0;
}