#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//֪ʶ��1 ����ָ������--������ź�����ַ������

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
//	while (scanf("%d%d", &a, &b) != EOF)//������Ҳ����дΪ��while (~scanf("%d%d", &a, &b))
//	{
//		int(*p[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������--������ź����ĵ�ַ
//		//���ں�����˵�������� �� &������ ����ʾ�����ĵ�ַ
//		int i = 0;
//		for (i = 0; i < 4; i++)
//		{
//			printf("%d\n", (*(p + i))(a, b));
//		}
//	}
//	
//	return 0;
//}




//֪ʶ��2 ����ָ��--������ź�����ַ��ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);//30
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;//pa�������Ǻ����ĵ�ַ��*pa�ҵ��������
//	                         //pa��ָ�룬ָ����Ǻ����������Ĳ���������int�ͣ�ָ�����������ķ���������int��
//	                         //pa�������Ǻ����ĵ�ַ��*pa�ҵ������������ȥ����������������Σ�10��20������(*pa)(10, 20)���Ǽ���10+20��ֵ
//
//	printf("%d\n", (*pa)(a,b));//30
//
//	return 0;
//}


//֪ʶ��3  ����ָ��--������������ַ��ָ��

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
//	//��������һ���������д����
//
//	return 0;
//}

//��������������
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10 };
//	int(*pa)[10] = &arr;//pa����������ĵ�ַ��������������Ԫ�صĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);//1 2 3 4 5 6 7 8 9 10   (*pa)�Ƕ�������������ã���*pa��[i]���������������е�ÿһ��Ԫ��
//	}
//
//	return 0;
//}

//Ҳ����д����������
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;//pa����������ĵ�ַ��������������Ԫ�صĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));//1 2 3 4 5 6 7 8 9 10
//		                        //*pa==arr  ��arr����������Ҳ����������Ԫ�صĵ�ַ *pa+i�����������i��Ԫ�أ�*(*pa+1)���ǽ������������ÿһ��Ԫ��
//	}
//
//	return 0;
//}

//�������ַ������Ƚϸ��ӣ�����ķ�����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p=arr;//arr��������Ԫ�صĵ�ַ
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));//1 2 3 4 5 6 7 8 9 10
//	}
//
//	return 0;
//}







