#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>

//文件的打开和关闭

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;//打开失败的话，程序就结束了
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;//打开失败的话，程序就结束了
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//文件的顺序读写

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");//TEST.txt的大写和小写是一样的，在生成的文件里面都是小写的test.txt
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("TEST.txt", "r");//TEST.txt的大写和小写是一样的，在生成的文件里面都是小写的test.txt
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c", fgetc(pfRead));//b
	printf("%c", fgetc(pfRead));//i
	printf("%c", fgetc(pfRead));//t
	//关闭文件
	fclose(pfRead);
	pfRead = NULL;

	return 0;
}