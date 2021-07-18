#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//预处理详解

//预定义符号
//          __FILE__ //进行编译的源文件
//          __LINE__ //文件当前的行号
//          __DATE__ //文件被编译的日期
//          __TIME__ //文件被编译的时间
//          __STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义

//这些预定义符号都是语言内置的

//int main()
//{
//	printf("%s\n", __FILE__);//获取文件的位置，绝对位置      文件位置是字符串，用%s打印
//	printf("%d\n", __LINE__);//获取行号                      行号是整型，用%d打印
//	printf("%s\n", __DATE__);//获取日期                      日期是字符串，用%s打印
//	printf("%s\n", __TIME__);//获取时间                      时间是字符串，用%s打印
//
//	return 0;
//}


int main()
{
	//写日志文件
	int i = 0;
	int arr[10] = {0};
	FILE* pf = fopen("log.txt", "w");

	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
			__FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	fclose(pf);
	pf = NULL;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}