#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//����1���⺯���ķ���

//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);//���ַ�������,strlen��������ַ���bit�������ص�'\0'������'\0'��ֹͣ������
//
//	printf("%d\n", len);
//
//	return 0;
//}

//sizeof��strlen�����ĶԱ�
//int main()
//{
//	char arr[] = "bit";
//	int len = sizeof(arr);//���ַ�������,sizeof������ַ���bit�������ص�'\0'
//
//	printf("%d\n", len);
//
//	return 0;
//}

//����2���������ķ���

//int my_strlen(char* str)//����е��Ѷ���ȥ������Ƶ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	printf("len=%d\n", len);
//
//	return 0;
//}


//����3���ݹ�ķ���

//��д��������������ʱ���������ַ����ĳ���
//int my_strlen(char* str)//����е��Ѷ���ȥ������Ƶ
//{
//	//�Ѵ��»�С
//	//my_strlen��"bit"��
//	//1+my_strlen("it")
//	//1+1+my_strlen("t")
//	//1+1+1+my_strlen("")
//	//1+1+1+0
//	//3
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	printf("len=%d\n", len);
//
//	return 0;
//}


//����4������ָ���ָ��ķ�������P24��һ����Ƶ���棩
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	//strlen-���ַ�������
	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
	char arr[] = "bit";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}