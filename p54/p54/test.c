#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strncmp函数

//int main()
//{
////strncmp-字符串比较
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwr";
//
//	int ret = strcmp(p1, p2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr函数-查找字符串

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

#include <string.h>

int main()
{
	char* p1 = "abcdefabcdef";
	char* p2 = "def";
	char* ret = strstr(p1, p2);

	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}

//strstr函数的自定义实现太繁琐了，这一部分的视频没有听明白，下次看的时候要弄明白



