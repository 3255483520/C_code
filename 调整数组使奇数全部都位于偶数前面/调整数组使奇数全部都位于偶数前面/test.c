#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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
	//1 ����߿�ʼ��һ��ż��
	//2 ���ұ߿�ʼ��һ������
	//3 �����ǽ���
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;//���while�������ж������ģ������whileֹͣʱ���ҵ�ż����
		}
		//������while ((left < right) && (arr[left] % 2 == 1))ֹͣ����������ҵ�ż����

		//���ұ�������
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;//���while�������ж�ż���ģ������whileֹͣʱ���ҵ�������
		}
		//������while ((left < right) && (arr[right] % 2 == 0))ֹͣ����������ҵ�������
		if (left < right)//Ҫ������������left<right
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);

	return 0;
}