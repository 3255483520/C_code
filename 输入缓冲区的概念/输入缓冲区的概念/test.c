#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N��:>");
//
//	int ch = getchar();//��������е�����
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	return 0;
//}


//�޸ĳɹ���ĳ���
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N��:>");
//
//	getchar();//����������\n
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);

	getchar();//����������\n��getchar();��������Ҳ����

	printf("��ȷ�ϣ�Y/N��:>");

	int ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");

	return 0;
}