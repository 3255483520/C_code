#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���ϴ�С�ļ��� 
//���ϵĴ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������

union Un
{
	int a;
	char arr[5];
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}