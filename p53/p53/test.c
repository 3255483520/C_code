#define _CRT_SECURE_NO_WARNINGS 1



//����strcmp
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

#include <stdio.h>

//int main()
//{
//	char* p1 = "qbc";
//	char* p2 = "abc";
//
//	int ret = strcmp(p1, p2);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char* p1 = "qbc";
//	char* p2 = "abc";
//
//	if (strcmp(p1, p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//
//	return 0;
//}


//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//strncpy����

//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 4);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefghi";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 6);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncat����

//int main()
//{
//	char arr1[30] = "hello bit";
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

int main()
{
	char arr1[30] = "hello bit";
	char arr2[] = "world";

	strncat(arr1, arr2, 8);

	printf("%s\n", arr1);

	return 0;
}