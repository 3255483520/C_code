#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//strncmp����

//int main()
//{
////strncmp-�ַ����Ƚ�
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwr";
//
//	int ret = strcmp(p1, p2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr����-�����ַ���

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

#include <string.h>

int main()
{
	char* p1 = "abcdefabcdef";
	char* p2 = "def";
	char* ret = strstr(p1, p2);

	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}

//strstr�������Զ���ʵ��̫�����ˣ���һ���ֵ���Ƶû�������ף��´ο���ʱ��ҪŪ����



