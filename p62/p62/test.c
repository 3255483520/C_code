#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ö������

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = BLUE;
//
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//
//	return 0;
//}



//����-������-������---����ͬһ��ռ�

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//��3����ַ��ӡ������һ����
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	//�͵�ַ--------------------->�ߵ�ַ
//	//...[][][][][][][][11][22][33][44][][][][][][][][][][][][]...    ����ֽ��򴢴�ģʽ
//	//...[][][][][][][][44][33][22][11][][][][][][][][][][][][]...    С���ֽ��򴢴�ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}



//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

//int check_sys()
//{
//	union   //ʡȥUn����������������
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}