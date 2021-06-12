#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//位段--二进制位

//总结：跟结构相比，位段可以达到相同的效果，但是可以很好的节省空间，但是有跨平台的问题存在

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8个字节
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//
//{
//	struct S s = {0};
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(s));//3个字节
//
//	return 0;
//}