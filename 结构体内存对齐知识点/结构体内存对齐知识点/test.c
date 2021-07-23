#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体内存对齐

//首先得掌握结构体的对齐规则：
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//     对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//         VS中默认的值为8
//         Linux中的默认值为4
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
//   有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//为什么存在内存对齐 ?
//   大部分的参考资料都是如是说的：
//1. 平台原因(移植原因)： 不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址
//   处取某些特定类型的数据，否则抛出硬件异常。
//2. 性能原因： 数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 原因在于，为了访问未对齐的内存，处理器
//   需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总体来说：
//  结构体的内存对齐是拿空间来换取时间的做法。

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
//	printf("%d\n", sizeof(s1));//12
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
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
//	printf("%d\n", sizeof(s3));//16
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
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s3));//16
//	printf("%d\n", sizeof(s4));//32
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
//	printf("%d\n", sizeof(s));//16
//
//	return 0;
//}

//修改默认对齐数
//      之前我们见过了 #pragma 这个预处理指令，这里我们再次使用，可以改变我们的默认对齐数。

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
//	printf("%d\n", sizeof(s));//12
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
//	printf("%d\n", sizeof(s));//9
//
//	return 0;
//}
//作业1

//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));//12
//
//	return 0;
//}


//作业2
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//16
//	printf("%d\n", sizeof(struct B));//12
//
//	return 0;
//}


//作业3
#pragma pack(4)  //编译选项，表示4字节对齐   平台：VS2013   语言：C语言
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a;
		char d;
		long b;
		long c;
	};
	struct tagTest2
	{
		long b;
		short c;
		char d;
		long a;
	};
	struct tagTest3
	{
		short c;
		long b;
		char d;
		long a;
	};
	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12  12  16

	return 0;
}
