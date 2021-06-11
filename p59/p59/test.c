#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体内存对齐

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//
//	return 0;
//}


//设置默认的对齐数
//struct S
//{
//	char c1;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


//#pragma pack(4)//设置默认的对齐数是4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//#pragma pack(1)//设置默认的对齐数是1
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


//计算偏移的多少

#include <stddef.h>//offsetof()的头文件

struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	printf("%d\n",offsetof(struct S,c));
	printf("%d\n", offsetof(struct S,i));
	printf("%d\n", offsetof(struct S,d));

	return 0;
		
}