#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ftell函数的使用---返回文件指针相对于起始位置的偏移量

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, -2, SEEK_END);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
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
//	int pos = ftell(pf);
//	printf("%d\n", pos);
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
//	fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//rewind函数的使用---让文件指针的位置回到文件的起始位置
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//perror函数的使用
//int main()
//{
//	//strerror---把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n",strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//feof函数的使用---文件结束判定

//被错误使用的 feof
//牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
//1. 文本文件读取是否结束，判断返回值是否为EOF （fgetc），或者NULL（fgets）
//例如：
//     fgetc判断是否为EOF.
//     fgets判断返回值是否为NULL.
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如：
//     fread判断返回值是否小于实际要读的个数
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;

	return 0;
}


