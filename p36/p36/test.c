#define _CRT_SECURE_NO_WARNINGS 1


//int arr[5]           �Ǹ����飬��������5��Ԫ�أ�ÿ��Ԫ�ص�������int��
//int* parr[10]        �Ǹ����飨ָ�����飩����������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��
//int (*parr2)[10]     �Ǹ�ָ�루����ָ�룩��ָ��ָ�����һ�����飬��������10��Ԫ�أ�ÿ��Ԫ�ص�������int��
//int (*parr3[10][5])  parr3[10]�Ǹ����飬��10��Ԫ�أ�ÿ��Ԫ���Ǹ�����ָ��

#include <stdio.h>
//һά���鴫��

//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//
//void test2(int *arr[])
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//
//int main()
//{
//	int arr1[10] = {0};
//	int *arr2[20] = { 0 };
//
//	test(arr1);
//	test2(arr2);
//
//	return 0;
//}

//��ά���鴫��

//void test(int arr[3][5])
//{}
//void test(int arr[][3])
//{}
////void test(int arr[3][])
////{}                       ������д�����ԣ���������ʡ��
////void test(int arr[][])
////{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	return 0;
//}


//void test3(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//
//	test3(arr);
//
//	return 0;
//}


//һ��ָ�봫��
//void test1(int* p)
//{}
//void test2(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int p1 = &a;
//	test1(&a);
//	test1(p1);
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//
//	return 0;
//}

//����ָ�봫��
//void test(int **p)
//{}
//
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//
//}

//����ָ��-��ָ�������ָ��
//����ָ��-��ָ������ָ��-��ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d\n", Add(a, b));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%p\n", Add);//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void(*p)(char*) = Print;
	(*p)("hello bit");
}


