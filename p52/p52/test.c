#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// strlen����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}


//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str)// '\0'��ASCII��ֵ����0
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	if (strlen("abc") - strlen("abcdef"))//strlen�ķ���ֵ���޷������͵ģ�����3��6�Ľ��Ҳ���޷������͵ģ��Ǵ���0 ��
//	{
//		printf("hehe\n");
//	}
//	else
//	{		printf("haha\n");
//	}
//	return 0;
//}




//strcpy����

#include <assert.h>

//my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ����ʼλ��
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ����ʼλ��
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strcat����

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//
//	strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


my_strcat(char* dest, char* src)
{
	assert(dest);//assert(dest != NULL);Ҳ����
	assert(src);//assert(src != NULL);Ҳ����

	char* ret = dest;

	//1. �ҵ�Ŀ���ַ����ġ�\0��
	while (*dest != '\0')
	{
		dest++;
	}
	//2. ׷��
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";

	my_strcat(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}