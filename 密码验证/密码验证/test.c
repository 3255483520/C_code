#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>//strcmp�⺯����ͷ�ļ�

//int main()
//{
//	char ch1[100] = { 0 };
//	char ch2[100] = { 0 };
//	scanf("%s %s", &ch1, &ch2);
//	//�Ƚ����������Ƿ���ͬ---�Ƚ������ַ���
//	//����ʹ��һ���⺯����strcmp
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
//		//�Ƚ����������Ƿ���ͬ---�Ƚ������ַ���
//		//����ʹ��һ���⺯����strcmp
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
		//�Ƚ����������Ƿ���ͬ---�Ƚ������ַ���
		//����ʹ��һ���⺯����strcmp
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