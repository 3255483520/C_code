#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>//offsetof的头文件，offsetof是一个宏，不是函数

//offsetof的使用，offsetof是一个宏，不是函数

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
//	printf("%d\n", sizeof(s));//12
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
//	printf("%d\n", sizeof(struct S));//12
//	printf("%d\n", offsetof(struct S, c1));//0   offsetof是一个宏，不是函数，offsetof的头文件是stddef.h
//	printf("%d\n", offsetof(struct S, a));//4
//	printf("%d\n", offsetof(struct S, c2));//8
//
//	return 0;
//}


//自定义实现宏offsetof       offsetof是一个宏，不是函数，offsetof的头文件是stddef.h
struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)//(struct_name*)0:把0强制类型转换为结构体指针（地址）
                            //从0地址处找结构体成员（这个成员是个变量）：((struct_name*)0)->member_name
                            //找到成员后，取这个成员的地址：&(((struct_name*)0)->member_name)
                            //因为OFFSET返回的是偏移量，把地址强制类型转换为int型：(int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));//0    (int)&(((struct S*)0)->c1)
	printf("%d\n", OFFSETOF(struct S, a));//4     (int)&(((struct S*)0)->a)
	printf("%d\n", OFFSETOF(struct S, c2));//8    (int)&(((struct S*)0)->c2)

	return 0;
}