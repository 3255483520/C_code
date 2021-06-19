#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认（Y/N）:>");
//
//	int ch = getchar();//这个程序有点问题
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//}


//修改成功后的程序
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认（Y/N）:>");
//
//	getchar();//处理缓冲区的\n
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);

	getchar();//处理缓冲区的\n，getchar();放在这里也可以

	printf("请确认（Y/N）:>");

	int ch = getchar();
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");

	return 0;
}