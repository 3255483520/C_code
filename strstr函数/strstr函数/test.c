#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//strstr函数-查找字符串
//在str1里找到str2,返回str2的地址；在str1里找不到str2，返回空指针NULL
//    char * strstr ( const char *, const char * );
// Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//strstr函数返回的是一个地址，所以ret的类型是char*
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//defg
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
//		printf("%s\n", ret);//defabcdef
//	}
//
//	return 0;
//}


//strstr函数的自定义实现
//strstr函数的自定义实现太繁琐了，听明白了，需要多看看，体会这种思想

//#include <assert.h>
//
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')//字符串p2位空字符串时，里面就只有一个‘\0’
//	{
//		return p1;//返回a的地址，（p1就是a的地址）
//	}
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串，返回cur
//		}
//		cur++;	
//	}
//	return NULL;//找不到子串，返回空指针NULL
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
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


//对上面一个程序的细节的修改
//#include <assert.h>
//
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;//写成char* s1 = NULL;就没有警告了
//	char* s2 = p2;//写成char* s2 = NULL;就没有警告了
//	char* cur = (char*)p1;
//	if (*p2 == '\0')//字符串p2位空字符串时，里面就只有一个‘\0’
//	{
//		return (char*)p1;//返回a的地址，（p1就是a的地址）
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串，返回cur
//		}
//		cur++;
//	}
//	return NULL;//找不到子串，返回空指针NULL
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";//abbbcdef
//	char* p2 = "def";//bbc这个也可以找到
//	char* ret = my_strstr(p1, p2);
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


//对上面程序的优化
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;//写成char* s1 = NULL;就没有警告了
	char* s2 = p2;//写成char* s2 = NULL;就没有警告了
	char* cur = (char*)p1;
	if (*p2 == '\0')//字符串p2位空字符串时，里面就只有一个‘\0’
	{
		return (char*)p1;//返回a的地址，（p1就是a的地址）
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串，返回cur
		}
		if (*s1 == '\0')
		{
			return NULL;//p1的长度小于p2，子串肯定不存在，返回空指针NULL
		}
		cur++;
	}
	return NULL;//找不到子串，返回空指针NULL
}

int main()
{
	char* p1 = "abcdefabcdef";//abbbcdef
	char* p2 = "def";//bbc这个也可以找到
	char* ret = my_strstr(p1, p2);

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