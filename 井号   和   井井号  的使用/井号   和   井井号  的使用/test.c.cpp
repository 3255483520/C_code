#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#��##��ʹ��

//int main()
//{
//	printf("hello world\n");//hello world
//	printf("hello " "world\n");//hello world
//	printf("hel""lo " "world\n");//hello world
//
//	return 0;
//}



//#define PRINT(X) printf("the value of X is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//the value of X is 10
//	PRINT(b);//the value of X is 20
//
//	return 0;
//}

//ʹ�� # ����һ���������ɶ�Ӧ���ַ���
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()//�������Ҫ�ú���ĥ��ĥ
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);//the value of a is 10
//	//printf("the value of ""a"" is %d\n",X)   #X�滻��"a" 
//	PRINT(b);//the value of b is 20
//	//printf("the value of ""b"" is %d\n",X)   #X�滻��"b"
//
//	return 0;
//}


//##���԰�λ�������ߵķ��źϳ�һ�����š� ������궨��ӷ�����ı�Ƭ�δ�����ʶ��

#define CAT(X,Y) X##Y
int main()
{
	int Class84 = 2019;

	printf("%d\n", Class84);//2019

	printf("%d\n", CAT(Class, 84));//2019
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}