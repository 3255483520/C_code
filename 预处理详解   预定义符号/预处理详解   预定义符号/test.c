#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//Ԥ�������

//Ԥ�������
//          __FILE__ //���б����Դ�ļ�
//          __LINE__ //�ļ���ǰ���к�
//          __DATE__ //�ļ������������
//          __TIME__ //�ļ��������ʱ��
//          __STDC__ //�����������ѭANSI C����ֵΪ1������δ����

//��ЩԤ������Ŷ����������õ�

//int main()
//{
//	printf("%s\n", __FILE__);//��ȡ�ļ���λ�ã�����λ��      �ļ�λ�����ַ�������%s��ӡ
//	printf("%d\n", __LINE__);//��ȡ�к�                      �к������ͣ���%d��ӡ
//	printf("%s\n", __DATE__);//��ȡ����                      �������ַ�������%s��ӡ
//	printf("%s\n", __TIME__);//��ȡʱ��                      ʱ�����ַ�������%s��ӡ
//
//	return 0;
//}


int main()
{
	//д��־�ļ�
	int i = 0;
	int arr[10] = {0};
	FILE* pf = fopen("log.txt", "w");

	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
			__FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	fclose(pf);
	pf = NULL;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}