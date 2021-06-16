#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//fseek函数的使用---文件的随机读取

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1 定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	//2 读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1 定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	//2 读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1 定位文件指针
	fseek(pf, -4, SEEK_END);
	//2 读取文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}
