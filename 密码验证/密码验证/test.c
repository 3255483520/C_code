#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>//strcmp库函数的头文件

//int main()
//{
//	char ch1[100] = { 0 };
//	char ch2[100] = { 0 };
//	scanf("%s %s", &ch1, &ch2);
//	//比较两个密码是否相同---比较两个字符串
//	//这里使用一个库函数：strcmp
//	if (strcmp(ch1, ch2) == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch1[100] = { 0 };
//	char ch2[100] = { 0 };
//	while (scanf("%s %s", &ch1, &ch2)!=EOF)
//	{
//		//比较两个密码是否相同---比较两个字符串
//		//这里使用一个库函数：strcmp
//		if (strcmp(ch1, ch2) == 0)
//		{
//			printf("same\n");
//		}
//		else
//		{
//			printf("different\n");
//		}
//	}
//
//	return 0;
//}



int main()
{
	char ch1[100] = { 0 };
	char ch2[100] = { 0 };
	while (~scanf("%s %s", &ch1, &ch2))
	{
		//比较两个密码是否相同---比较两个字符串
		//这里使用一个库函数：strcmp
		if (strcmp(ch1, ch2) == 0)
		{
			printf("same\n");
		}
		else
		{
			printf("different\n");
		}
	}

	return 0;
}