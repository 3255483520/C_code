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



int main()
{
	int money = 0;//��Ǯ��
	int total = 0;//��ˮ����
	int empty = 0;//��ƿ����

	scanf("%d", &money);
	//���������ˮ�ȵ�
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	printf("total=%d\n", total);

	return 0;
}