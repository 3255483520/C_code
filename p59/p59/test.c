#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ���ڴ����

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


//����Ĭ�ϵĶ�����
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


//#pragma pack(4)//����Ĭ�ϵĶ�������4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//#pragma pack(1)//����Ĭ�ϵĶ�������1
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


//����ƫ�ƵĶ���

#include <stddef.h>//offsetof()��ͷ�ļ�

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