#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	//�ϰ벿��
	for (i = 0; i < 6; i++)
	{
		//�ȴ�ӡ�ո�
		for (j = 0; j <6-i; j++)
		{
			printf(" ");
		}
		//�ٴ�ӡ*
		for (j = 0; j < 2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 0; i <= 6; i++)
	{
		//�ȴ�ӡ�ո�
		for (j = 0; j <i; j++)
		{
			printf(" ");
		}
		//�ٴ�ӡ*
		for (j = 0; j < 13-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}