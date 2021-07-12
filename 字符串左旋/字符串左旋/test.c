#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//������ⷨ
//#include <string.h>
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1 �ѵ�һ��Ԫ��a��ֵ��tmp
//		char tmp = *arr;
//		//2 ��bcdef����������
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3 ��a��ֵ��f���ڵ�λ��
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr);
//
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr!=NULL);
//
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//����һ�ַ�����������ת��
//abcdef    ab����õ�ba��cdef����õ�fedc
//ba fedc   ba fedc��������õ�cdef ab ��cdefab
//cdefab
//#include <string.h>
//#include <assert.h>
//
////�����ַ�������
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr+k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


#include <string.h>
#include <assert.h>

//�����ַ�������
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr+k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 14);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//��ҵ���ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC


//#include <string.h>
//#include <assert.h>
//
////�����ַ�������
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);//abcdef    ��abc����׷��def
//	printf("%s\n", arr1);//abcdef
//
//	return 0;
//}



//��ҵ���ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC


//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	//1 ��str�ַ�����׷��һ��str�ַ���
//  //strcat��strncat
//	//strcat(str1,str1);//err ����д���Ǵ����   strcat�����Լ����Լ�׷��
//	strncat(str1, str1,6);//abcdefabcdef    strncat�����Լ����Լ�׷��
//	//2 �ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr  ���Ӵ���
//	char* ret = strstr(str1, str2);//strstr���ص���һ���ַ��ĵ�ַ��ָ�룩
//	int i = 0;
//	if(ret = NULL)//û�ҵ������ؿ�ָ��NULL
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}



int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1 ��str�ַ�����׷��һ��str�ַ���
	//strcat(str1,str1);//err ����д���Ǵ����
	strncat(str1, str1, 6);//abcdefabcdef
	//2 �ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	//strstr  ���Ӵ���
	char* ret = strstr(str1, str2);
	int i = 0;
	if (ret = NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}