#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//��������
//Ҳ�������û����˵���������飨flexible array��������������ȷʵ�Ǵ��ڵġ� C99 �У��ṹ�е���
//��һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��

////���磺
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//
//	return 0;
//}
////��Щ�������ᱨ���޷�������Ըĳɣ�
//struct S
//{
//	int n;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//
//	return 0;
//}


//����������ص㣺
//1 �ṹ�е����������Աǰ���������һ��������Ա��
//2 sizeof ���ص����ֽṹ��С����������������ڴ档
//3 �������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С


//struct S
//{
//	int n;//4���ֽ�
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct S));//sizeof ���ص����ֽṹ��С����������������ڴ档
//
//	return 0;
//}

//struct S
//{
//	int n;//4���ֽ�
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	struct S s;//���д��������һ�������д��������˼��һ����
//	printf("%d\n", sizeof(s));//sizeof ���ص����ֽṹ��С����������������ڴ档
//
//	return 0;
//}



//struct S
//{
//	int n;//4���ֽ�
//	int arr[];//���������Ա//40���ֽ�
//};
//
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	//�����鸳ֵ0 1 2 3 4 5 6 7 8 9
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;//�����鸳ֵ0 1 2 3 4 5 6 7 8 9
//	}
//	//��ӡ������
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);//��ӡ������
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//����һ�����������һ��д��
struct S
{
	int n;//4���ֽ�
	int* arr;//���������Ա//40���ֽ�
};

int main()
{
	int i = 0;
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	//�����鸳ֵ0 1 2 3 4 5 6 7 8 9
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;//�����鸳ֵ0 1 2 3 4 5 6 7 8 9
	}
	//��ӡ������
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);//��ӡ������
	}
	//�ͷ��ڴ�
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;

	return 0;
}

