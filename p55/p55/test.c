#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//stetok��---��������е��ѣ��������Ϳ����ˣ�����Ҫѧϰд�����Զ��庯����

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
//	                 //�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//
//	char* ret = strtok(arr, p);//�и�buf�е��ַ���
//	printf("%s\n", ret);
//		
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
//	//�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//
//	char* ret = NULL;
//	
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//���д���õĺ�����
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "192.168.1.1";//192.168.1.1  ��IP��ַ�ĵ��ʮ���Ƶı�ʾ��ʽ
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok�������
//	//�䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//���д���õĺ�����
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror����--����������þ�����

//int main()
//{
//	//������       ������Ϣ
//	//0            No eerror
//	//1            Operation not permitted
//	//2            No such file or directory
//	//...
//	char* str = strerror(0);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//int main()
//{
//	char* str = strerror(1);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//int main()
//{
//	char* str = strerror(2);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������ʴ��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//
//	return 0;
//}

//�ַ����ຯ�����кܶ࣬�Լ����ԣ�


//#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//�ַ�ת������

//int main()
//{
//	char ch = tolower('Q');//��дתСд
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	char ch = toupper('q');//Сдת��д
//	putchar(ch);
//
//	return 0;
//}

int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);

	return 0;
}