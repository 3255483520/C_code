#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#define�����

//#define SQUART(X) X*X
//
//int main()
//{
//	int ret = SQUART(5);
//	//int ret=5*5;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define SQUART(X) X*X
//
//int main()
//{
//	int ret = SQUART(5+1);
//	//int ret=5+1*5+1;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//#define SQUART(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUART(5 + 1);
//	//int ret=(5+1)*(5+1);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//int ret=10*a+a=10*5+5;
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


//#define DOUBLE(X) (X+X)
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//int ret=10*(a+a)=10*(5+5);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//#define �滻����
//�ڳ�������չ#define������źͺ�ʱ����Ҫ�漰�������衣
//    1. �ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ���#define����ķ��š�����ǣ��������ȱ��滻��
//    2. �滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
//    3. ����ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ���#define����ķ��š�����ǣ����ظ�����������̡�
//ע�⣺
//    1. �������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//    2. ��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������


//#��##��ʹ��

//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo " "world\n");
//
//	return 0;
//}



//#define PRINT(X) printf("the value of X is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
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
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n",X)   #X�滻��"a" 
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n",X)   #X�滻��"b"
//
//	return 0;
//}


//##���԰�λ�������ߵķ��źϳ�һ�����š� ������궨��ӷ�����ı�Ƭ�δ�����ʶ��

#define CAT(X,Y) X##Y
int main()
{
	int Class84 = 2019;

	printf("%d\n", Class84);

	printf("%d\n", CAT(Class, 84));
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}



