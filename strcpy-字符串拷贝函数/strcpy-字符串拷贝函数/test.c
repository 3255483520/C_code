#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//�������Ǵ�ӡ'\0'��
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";//# # # # # # # # # # \0
//	char arr2[] = "bit";//b i t \0
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//������һ��������Ż�
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++= *src++;
//	}
//	*dest = *src;//�������Ǵ�ӡ'\0'��
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//'\0'��ASCII��ֵ��0
//	{
//		;//����䣬ѭ���������涼���ɣ�����ȥ�ٴν���while����������Ĵ���
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//��NULL���Ͳ����п���
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>//assert������ͷ�ļ�
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	
//	*p = 20;//err   const����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* const p = &num;//��������
//
//	*p = 20;
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* const p = &num;
//	*p = 20;
//	int n = 20;
//	p = &n;// const����ָ�������*�ұ�ʱ�����ε���ָ�����p����,p���ܱ��ı���
//
//	printf("%d\n", num);
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--�ַ�������
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;//�ڿ�ʼʱ�Ͱ�dest����ʼ��ַ��������
	assert(dest != NULL);//����
	assert(src != NULL);//����
	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//����dest����ʼ��ַ
}
int main()
{
	//strcpy--�ַ�������
	char arr1[] = "##########";
	char arr2[] = "bit";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}