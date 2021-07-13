#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//strstr����-�����ַ���
//��str1���ҵ�str2,����str2�ĵ�ַ����str1���Ҳ���str2�����ؿ�ָ��NULL
//    char * strstr ( const char *, const char * );
// Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//strstr�������ص���һ����ַ������ret��������char*
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//defg
//	}
//
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);//defabcdef
//	}
//
//	return 0;
//}


//strstr�������Զ���ʵ��
//strstr�������Զ���ʵ��̫�����ˣ��������ˣ���Ҫ�࿴�����������˼��

//#include <assert.h>
//
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')//�ַ���p2λ���ַ���ʱ�������ֻ��һ����\0��
//	{
//		return p1;//����a�ĵ�ַ����p1����a�ĵ�ַ��
//	}
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�������cur
//		}
//		cur++;	
//	}
//	return NULL;//�Ҳ����Ӵ������ؿ�ָ��NULL
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//������һ�������ϸ�ڵ��޸�
//#include <assert.h>
//
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;//д��char* s1 = NULL;��û�о�����
//	char* s2 = p2;//д��char* s2 = NULL;��û�о�����
//	char* cur = (char*)p1;
//	if (*p2 == '\0')//�ַ���p2λ���ַ���ʱ�������ֻ��һ����\0��
//	{
//		return (char*)p1;//����a�ĵ�ַ����p1����a�ĵ�ַ��
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�������cur
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ������ؿ�ָ��NULL
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";//abbbcdef
//	char* p2 = "def";//bbc���Ҳ�����ҵ�
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//�����������Ż�
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;//д��char* s1 = NULL;��û�о�����
	char* s2 = p2;//д��char* s2 = NULL;��û�о�����
	char* cur = (char*)p1;
	if (*p2 == '\0')//�ַ���p2λ���ַ���ʱ�������ֻ��һ����\0��
	{
		return (char*)p1;//����a�ĵ�ַ����p1����a�ĵ�ַ��
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��Ӵ�������cur
		}
		if (*s1 == '\0')
		{
			return NULL;//p1�ĳ���С��p2���Ӵ��϶������ڣ����ؿ�ָ��NULL
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ������ؿ�ָ��NULL
}

int main()
{
	char* p1 = "abcdefabcdef";//abbbcdef
	char* p2 = "def";//bbc���Ҳ�����ҵ�
	char* ret = my_strstr(p1, p2);

	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}