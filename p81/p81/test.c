#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);//�����ⲿ����
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//Ԥ�������

//int main()
//{
//	printf("%s\n", __FILE__);//��ȡ�ļ���λ�ã�����λ��
//	printf("%d\n", __LINE__);//��ȡ�к�
//	printf("%s\n", __DATE__);//��ȡ����
//	printf("%s\n", __TIME__);//��ȡʱ��
//
//	return 0;
//}

//int main()
//{
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = {0};
//	FILE* pf = fopen("log.txt", "w");
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//Ԥ����ָ��

//#define MAX 100
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//
//	return 0;
//}


//#define STR "hehe"
//int main()
//{
//	printf("%s\n", STR);
//
//	return 0;
//}


#define do_forever for(;;)
int main()
{
	do_forever;//����������ѭ��

	return 0;
}