#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//fseek������ʹ��---�ļ��������ȡ

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1 ��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_CUR);
//	//2 ��ȡ�ļ�
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
//	//1 ��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_SET);
//	//2 ��ȡ�ļ�
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
	//1 ��λ�ļ�ָ��
	fseek(pf, -4, SEEK_END);
	//2 ��ȡ�ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;

	return 0;
}
