#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };// (3, 4)���Ƕ��ű��ʽ
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//
//	return 0;
//}
//
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Init(arr, sz);//�������ʼ��
//	Print(arr, sz);//��ӡ
//
//	return 0;
//}


//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);//��ӡ
//
//	return 0;
//}
//ʹ�ú���ʵ���������Ľ���
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//		printf("%d ", arr1[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}

//int main()//�����Ŀ�úÿ�����Ƶ
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()//�����Ŀ�úÿ�����Ƶ
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//(char*)��ʾǿ������ת��
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//int i;//ȫ�ֱ���--����ʼ��--Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000 00000000 00000000 00000001--  -1��ԭ��
//	//11111111 11111111 11111111 11111110--  -1�ķ���
//	//11111111 11111111 11111111 11111111--  -1�Ĳ���
//
//	if (i > sizeof(i))//sizeof()--�������/������ռ�Ĵ�С����>=0���޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//		
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//	return 0;
//}
