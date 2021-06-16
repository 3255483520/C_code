#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//
//	FILE* pf=fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b',pf);
//	fputc('i',pf);
//	fputc('t',pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	////写文件
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//fgets函数

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s\n", buf);//打印出来多一个空行，是因为buf里面包含了一个换行符
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);//不加换行符也会出现换行，是因为buf里面包含了一个换行符
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);//这个打印出来没有换行，是因为buf里面没有换行符，具体原因打开test.txt这个文件就可以知道了
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	puts(buf);//puts函数天生会把信息打印完后换行
//	fgets(buf, 1024, pf);
//	puts(buf);//puts函数天生会把信息打印完后换行
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fputs函数

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//
//	return 0;
//}

//这个程序和上面的一个程序的功能是一样的
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}


//fprintf函数的使用

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fscanf函数的使用
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout,"%d %f %s", s.n, s.score, s.arr);
//
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//	return 0;
//}



//sprintf函数的使用
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//
//int main()
//{
//	struct S s = { 100, 3.14, "abcdef" };
//	char buf[1024] = { 0 };
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//
//	return 0;
//}

//对比一组函数
//scanf /fscanf /sscanf
//printf/fprintf/sprintf
//scanf/printf      是针对标准输入流/标准输出流的 格式化输入/输出语句
//fscanf/fprintf    是针对所有输入流/所有输出流的 格式化输入/输出语句
//sscanf/sprintf    sscanf是从字符串中读取格式化的数据
//                  sprintf是把格式化数据输出成（储存到）字符串
struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100, 3.14, "abcdef" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//把格式化的数据转换成字符串储存到buf
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n),&(tmp.score),tmp.arr);
	printf("%d %f %s", tmp.n,tmp.score, tmp.arr);

	return 0;
}





