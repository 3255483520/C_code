#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a == b && a == c && b == c)
//		printf("�ǵȱ�������\n");
//	else
//		printf("���ǵȱ�������\n");
//
//	return 0;
//}

//���Զ�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//
//	if (a == b && a == c && b == c)
//		printf("�ǵȱ�������\n");
//	else
//		printf("���ǵȱ�������\n");
//
//	return 0;
//}

//���Զ�������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (~scanf("%d %d %d", &a, &b, &c))

	if (a == b && a == c && b == c)
		printf("�ǵȱ�������\n");
	else
		printf("���ǵȱ�������\n");

	return 0;
}