#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();//��ӡ���ֵ
//
//	return 0;
//}


//int* test()
//{
//	int a = 10;//�ֲ�������a��ջ������
//
//	return &a;
//}
//
//int main()//�������������
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//int* test()
//{
//	static int a = 10;//ǰ���static��a�ھ�̬��������
//
//	return &a;
//}
//
//int main()//�������û������
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}

//#include <stdlib.h>
//int* test()
//{
//	int* ptr = malloc(100);//����
//
//	return ptr;
//}
//
//int main()//�������û������
//{
//	int* p = test();
//
//	return 0;
//}


//��ҵ1
//�����������hello���������ڴ�й©�������ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©��
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

//�޸���ȷ��ĳ���
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//��ҵ2
//void Test(void)
//{
//	char* str = (char*)malloc(100);//�����Ŀ���������
//	strcpy(str, "hello");//�����Ŀ�Ŀ��㣺free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	free(str);
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//�޸���ȷ��ĳ���
//void Test(void)
//{
//	char* str = (char*)malloc(100);//�����Ŀ���������
//	strcpy(str, "hello");//�����Ŀ�Ŀ��㣺free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//C/C++�ڴ�Ŀ��ٷ�ʽ

//���֪ʶ���Ѿ�������ˣ��Լ�ȥ��������һЩ�����ԵĶ���