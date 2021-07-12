#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符
//例如：ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//暴力求解法
//#include <string.h>
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		//1 把第一个元素a幅值给tmp
//		char tmp = *arr;
//		//2 把bcdef依次往左移
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3 把a幅值给f所在的位置
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
//		//左旋转一个字符
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
//		//左旋转一个字符
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


//另外一种方法：三步翻转法
//abcdef    ab逆序得到ba，cdef逆序得到fedc
//ba fedc   ba fedc整体逆序得到cdef ab 即cdefab
//cdefab
//#include <string.h>
//#include <assert.h>
//
////逆序字符串函数
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr+k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
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

//逆序字符串函数
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr+k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
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


//作业：判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC


//#include <string.h>
//#include <assert.h>
//
////逆序字符串函数
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
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
//	strcat(arr1, arr2);//abcdef    在abc后面追加def
//	printf("%s\n", arr1);//abcdef
//
//	return 0;
//}



//作业：判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC


//#include <stdio.h>
//#include <string.h>
//
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	//1 在str字符串中追加一个str字符串
//  //strcat与strncat
//	//strcat(str1,str1);//err 这种写法是错误的   strcat不能自己给自己追加
//	strncat(str1, str1,6);//abcdefabcdef    strncat可以自己给自己追加
//	//2 判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr  找子串的
//	char* ret = strstr(str1, str2);//strstr返回的是一个字符的地址（指针）
//	int i = 0;
//	if(ret = NULL)//没找到，返回空指针NULL
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
	//1 在str字符串中追加一个str字符串
	//strcat(str1,str1);//err 这种写法是错误的
	strncat(str1, str1, 6);//abcdefabcdef
	//2 判断str2指向的字符串是否是str1指向的字符串的子串
	//strstr  找子串的
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