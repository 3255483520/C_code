#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>

//�ļ��Ĵ򿪺͹ر�

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;//��ʧ�ܵĻ�������ͽ�����
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
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
//		return 0;//��ʧ�ܵĻ�������ͽ�����
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ļ���˳���д

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");//TEST.txt�Ĵ�д��Сд��һ���ģ������ɵ��ļ����涼��Сд��test.txt
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("TEST.txt", "r");//TEST.txt�Ĵ�д��Сд��һ���ģ������ɵ��ļ����涼��Сд��test.txt
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	printf("%c", fgetc(pfRead));//b
	printf("%c", fgetc(pfRead));//i
	printf("%c", fgetc(pfRead));//t
	//�ر��ļ�
	fclose(pfRead);
	pfRead = NULL;

	return 0;
}