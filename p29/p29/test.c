#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}

//int main()
//{
//	{ 
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//
//	scanf("%d", &n);//3!�ĺ�    1��+2��+3��=1+2+6=9
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//�������Ǵ�ӡ'\0'��
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++= *src++;
//	}
//	*dest = *src;//�������Ǵ�ӡ'\0'��
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	
//	*p = 20;//err   const����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* const p = &num;//��������
//
//	*p = 20;
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;
//	int n = 20;
//	p = &n;// const����ָ�������*�ұ�ʱ�����ε���ָ�����p����,p���ܱ��ı���
//
//	printf("%d\n", num);
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}
//���ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//#include <assert.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}



