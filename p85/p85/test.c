#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>//offsetof函数的头文件

//offsetof函数的使用

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}


//自定义实现offsetof函数
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

//作业1
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//作业2
int main()
{
	union
	{
		short k;
		char i[2];
	}*s,a;
	s = &a;
	s->i[0]=0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}