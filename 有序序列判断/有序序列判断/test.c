#define _CRT_SECURE_NO_WARNINGS 1

//����
//	����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����
//����������
//	��һ������һ������N(3��N��50)��
//	�ڶ�������N���������ÿո�ָ�N��������
//���������
//	���Ϊһ�У���������������sorted���������unsorted��
//ʾ��1
//���룺
//	5
//	1 6 9 22 30
//�����
//	sorted
//ʾ��2
//���룺
//	5
//	3 4 7 2 10
//�����
//	unsorted


#include <stdio.h>

/*int main()
{
int n=0;
int arr[50]={0};
scanf("%d",&n);
int flag1=0;//����
int flag2=0;//����
int i=0;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(i>0)
{
if(arr[i]>arr[i-1])
{
flag1=1;
}
else
{
flag2=1;
}
}
}
if(flag1+flag2==1)
{
printf("sorted\n");
}
else
{
printf("unsorted\n");
}

return 0;
}*/

int main()
{
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int flag1 = 0;//����
	int flag2 = 0;//����
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i<n; i++)
	{
		if (i>0)
		{
			if (arr[i]>arr[i - 1])
			{
				flag1 = 1;
			}
			else
			{
				flag2 = 1;
			}
		}
	}

	if (flag1 + flag2 == 1)
	{
		printf("sorted\n");
	}
	else
	{
		printf("unsorted\n");
	}

	return 0;
}