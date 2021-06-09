#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// strlen函数
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
//	while (*str)// '\0'的ASCII码值就是0
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
//	if (strlen("abc") - strlen("abcdef"))//strlen的返回值是无符号类型的，所以3减6的结果也是无符号类型的，是大于0 的
//	{
//		printf("hehe\n");
//	}
//	else
//	{		printf("haha\n");
//	}
//	return 0;
//}




//strcpy函数

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
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目的空间的起始位置
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
//	//拷贝src指向的字符串到dest指向的空间，包含‘\0’
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目的空间的起始位置
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


//strcat函数

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
	assert(dest);//assert(dest != NULL);也可以
	assert(src);//assert(src != NULL);也可以

	char* ret = dest;

	//1. 找到目的字符串的‘\0’
	while (*dest != '\0')
	{
		dest++;
	}
	//2. 追加
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