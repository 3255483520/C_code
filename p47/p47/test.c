#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ1  ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�
#include <stdio.h>

//int main()
//{
//	int money = 0;//��Ǯ��
//	int total = 0;//��ˮ����
//	int empty = 0;//��ƿ����
//
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = total;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//
//	return 0;
//}


//int main()
//{
//	int money = 0;//��Ǯ��
//	int total = 0;//��ˮ����
//	int empty = 0;//��ƿ����
//
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	total =2*money-1;//��������е����⣬������money=0ʱ��total=-1
//
//	printf("total=%d\n", total);
//
//	return 0;
//}



//int main()
//{
//	int money = 0;//��Ǯ��
//	int total = 0;//��ˮ����
//	int empty = 0;//��ƿ����
//
//	scanf("%d", &money);
//	//���������ˮ�ȵ�
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//
//	printf("total=%d\n", total);
//
//	return 0;
//}


//��ҵ2 ��������ʹ����ȫ����λ��ż��ǰ�档

//��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//���ұ�������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);

	return 0;
}
