#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*p[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������--������ź����ĵ�ַ
//	                                              //���ں�����˵�������� �� &������ ����ʾ�����ĵ�ַ
//
//	int i = 0;
//	for(i = 0; i < 4; i++)
//	{
//		 
//		printf("%d\n", (*(p + i))(5, 2));
//	}
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int(*p[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������--������ź����ĵ�ַ
//	//���ں�����˵�������� �� &������ ����ʾ�����ĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*(p + i))(a, b));
//	}
//
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d%d", &a, &b) != EOF)//������Ҳ����дΪ��while (~scanf("%d%d", &a, &b))
	{
		int(*p[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������--������ź����ĵ�ַ
		//���ں�����˵�������� �� &������ ����ʾ�����ĵ�ַ
		int i = 0;
		for (i = 0; i < 4; i++)
		{
			printf("%d\n", (*(p + i))(a, b));
		}
	}
	
	return 0;
}
