#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//���ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//#include <assert.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);//����ָ�룬��ָ֤�����Ч��
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

#include <assert.h>

int my_strlen(const char* str)//���ַ����ĳ��ȣ���ϣ���ַ������ı䣬������ǰ���const
{
	int count = 0;
	assert(str != NULL);//����ָ�룬��ָ֤�����Ч��

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}