#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// ��ҵ1   дһ����������������һ���ַ���������
//void reverse(char* str)
//{
//	int len = strlen(str);strlen�����Ĳ����ǵ�ַ��ָ�룩
//
//	char* left = str;
//	char* right = str + len - 1;//�ú���һ�£���Ҫд��char* right = len - 1����Ϊlen - 1�����͵ģ���char* right��ָ�����͵�
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//abcdef-----fedcba
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
//
//	return 0;
//}


#include <assert.h>//assert������ͷ�ļ�

void reverse(char* str)
{
	assert(str);//����    Ҫʹ��strָ�룬��ʹ��ǰҪ��ָ֤��str����Ч��

	int len = strlen(str);

	char* left = str;
	char* right = str + len - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	scanf("%s", arr);//abcdef-----fedcba  scanf�����������ո񣬾�ֹͣ��ӡ���ո����Ĳ����ӡ����
	//	          //�����룺hello bit���������olleh

	//������
	reverse(arr);

	printf("�������ַ�����%s\n", arr);

	return 0;
}


//#include <assert.h>
//
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	gets(arr);//abcdef-----fedcba  gets�����Ƕ�ȡһ�У�����ע�ո�(�����ո񣬿ո�����Ҳ���ӡ��������Ϊ��ӡ����һ����)��
//	          //�����룺hello bit���������tib olleh
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
//
//	return 0;
//}