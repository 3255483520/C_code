#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);//声明外部函数
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//预定义符号

//int main()
//{
//	printf("%s\n", __FILE__);//获取文件的位置，绝对位置
//	printf("%d\n", __LINE__);//获取行号
//	printf("%s\n", __DATE__);//获取日期
//	printf("%s\n", __TIME__);//获取时间
//
//	return 0;
//}

//int main()
//{
//	//写日志文件
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//预处理指令

//#define MAX 100
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//
//	return 0;
//}


//#define STR "hehe"
//int main()
//{
//	printf("%s\n", STR);
//
//	return 0;
//}


#define do_forever for(;;)
int main()
{
	do_forever;//这个程序会死循环

	return 0;
}