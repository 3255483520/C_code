#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�Զ���ʵ�ֺ�offsetof    offsetof��һ���꣬���Ǻ���
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
//	printf("%d\n", OFFSETOF(struct S,c1)); //0
//	printf("%d\n", OFFSETOF(struct S,a));//4
//	printf("%d\n", OFFSETOF(struct S,c2));//8
//
//	return 0;
//}


//ʹ��C���Կ�����ĺ�offsetof
#include <stddef.h>
struct S
{
	char c1;
	int a;
	char c2;
};

int main()
{
	printf("%d\n", offsetof(struct S,c1)); //0
	printf("%d\n", offsetof(struct S, a));//4
	printf("%d\n", offsetof(struct S, c2));//8

	return 0;
}