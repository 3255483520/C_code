#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ftell������ʹ��---�����ļ�ָ���������ʼλ�õ�ƫ����

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




//rewind������ʹ��---���ļ�ָ���λ�ûص��ļ�����ʼλ��
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

//perror������ʹ��
//int main()
//{
//	//strerror---�Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n",strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//feof������ʹ��---�ļ������ж�

//������ʹ�õ� feof
//�μǣ����ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β������
//1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF ��fgetc��������NULL��fgets��
//���磺
//     fgetc�ж��Ƿ�ΪEOF.
//     fgets�жϷ���ֵ�Ƿ�ΪNULL.
//2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//���磺
//     fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	//���ļ�
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


