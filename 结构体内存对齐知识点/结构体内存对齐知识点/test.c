#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ���ڴ����

//���ȵ����սṹ��Ķ������
//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//     ������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//         VS��Ĭ�ϵ�ֵΪ8
//         Linux�е�Ĭ��ֵΪ4
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������
//   ��������������Ƕ�׽ṹ��Ķ�����������������

//Ϊʲô�����ڴ���� ?
//   �󲿷ֵĲο����϶�������˵�ģ�
//1. ƽ̨ԭ��(��ֲԭ��)�� �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ
//   ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2. ����ԭ�� ���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣 ԭ�����ڣ�Ϊ�˷���δ������ڴ棬������
//   ��Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�
//������˵��
//  �ṹ����ڴ�������ÿռ�����ȡʱ���������

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
//	printf("%d\n", sizeof(s));//16
//
//	return 0;
//}

//�޸�Ĭ�϶�����
//      ֮ǰ���Ǽ����� #pragma ���Ԥ����ָ����������ٴ�ʹ�ã����Ըı����ǵ�Ĭ�϶�������

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
//	printf("%d\n", sizeof(s));//12
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
//	printf("%d\n", sizeof(s));//9
//
//	return 0;
//}
//��ҵ1

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


//��ҵ2
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


//��ҵ3
#pragma pack(4)  //����ѡ���ʾ4�ֽڶ���   ƽ̨��VS2013   ���ԣ�C����
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
