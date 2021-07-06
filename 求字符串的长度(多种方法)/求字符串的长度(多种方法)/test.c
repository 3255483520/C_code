#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//求字符串的长度
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
//	assert(str != NULL);//断言指针，保证指针的有效性
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

int my_strlen(const char* str)//求字符串的长度，不希望字符串被改变，所以在前面加const
{
	int count = 0;
	assert(str != NULL);//断言指针，保证指针的有效性

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