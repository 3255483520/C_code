#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 作业1   写一个函数，可以逆序一个字符串的内容
//void reverse(char* str)
//{
//	int len = strlen(str);strlen函数的参数是地址（指针）
//
//	char* left = str;
//	char* right = str + len - 1;//好好想一下，不要写成char* right = len - 1，因为len - 1是整型的，而char* right是指针类型的
//
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
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//abcdef-----fedcba
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//
//	return 0;
//}


#include <assert.h>//assert函数的头文件

void reverse(char* str)
{
	assert(str);//断言    要使用str指针，在使用前要保证指针str的有效性

	int len = strlen(str);

	char* left = str;
	char* right = str + len - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	scanf("%s", arr);//abcdef-----fedcba  scanf函数，遇到空格，就停止打印，空格后面的不会打印出来
	//	          //如输入：hello bit，会输出：olleh

	//逆序函数
	reverse(arr);

	printf("逆序后的字符串：%s\n", arr);

	return 0;
}


//#include <assert.h>
//
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//
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
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);//abcdef-----fedcba  gets函数是读取一行，不关注空格(遇到空格，空格后面的也会打印出来，因为打印的是一整行)，
//	          //如输入：hello bit，会输出：tib olleh
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//
//	return 0;
//}