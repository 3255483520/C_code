#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

//�����Ķ�̬�ڴ����

//1 �Կ�ָ��NULL���н����ò���
//int main()
//{
//	int* p =(int*) malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//  //malloc���ٿռ�ʧ��-��NULLָ�������
//	*p = 0;//error
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//error
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//2 �Զ�̬���ٵ��ڴ�ռ��Խ�����
//int main()
//{
//	int* p =(int*) malloc(5*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3 �ԷǶ�̬�����ڴ��free
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//4 ʹ��free�ͷŶ�̬�����ڴ��һ����

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	//ʹ��free�ͷŶ�̬�����ڴ��һ����
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//5 ��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ�ÿռ�
//	//�ͷſռ�
//	free(p);
//	//......
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ�ÿռ�
//	//�ͷſռ�
//	free(p);
//	p = NULL; //����д�ǿ��Եģ�������Ǹ����򲻿���
//	free(p);
//
//
//	return 0;
//}

//6 ��̬�����ڴ������ͷţ��ڴ�й©��
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	
//	return 0;
//}


//��������ı�����

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//�����������������
//	printf(str);
//}
//
//int main()
//{
//	Test();//�����������
//
//	return 0;
//}
//1 ���д������ֱ���������
//2 ��������ڴ�й©������
// p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
// �����޷��ҵ������Ի�����ڴ�й©

//��ô������ĳ������ȷ(���ö���ָ�뷽ʽ)
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//�����������������
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();//�����������
//
//	return 0;
//}

//����һ�ָ�����ʽ�����÷���ֵ�ķ�ʽ��

char* GetMemory(char *p)
{
	p = (char *)malloc(100);
	return p;
}
void Test(void)
{
	char *str = NULL;
	str=GetMemory(str);
	strcpy(str, "hello world");//�����������������
	printf(str);

	free(str);
	str = NULL;
}

int main()
{
	Test();//�����������

	return 0;
}