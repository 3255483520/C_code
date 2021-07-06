#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//strcpy--字符串拷贝
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
//	*dest = *src;//这句代码是打印'\0'的
//}
//int main()
//{
//	//strcpy--字符串拷贝
//	char arr1[] = "##########";//# # # # # # # # # # \0
//	char arr2[] = "bit";//b i t \0
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//对上面一个程序的优化
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++= *src++;
//	}
//	*dest = *src;//这句代码是打印'\0'的
//}
//int main()
//{
//	//strcpy--字符串拷贝
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
//	while (*dest++ = *src++)//'\0'的ASCII码值是0
//	{
//		;//空语句，循环进来上面都不干，又上去再次进入while后面括号里的代码
//	}
//}
//int main()
//{
//	//strcpy--字符串拷贝
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
//	if (dest != NULL && src != NULL)//是NULL，就不进行拷贝
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	//strcpy--字符串拷贝
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, NULL);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <assert.h>//assert函数的头文件
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--字符串拷贝
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
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--字符串拷贝
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
//	*p = 20;//err   const放在指针变量得*左边时，修饰的是*p,也就是说：不能通过p来改变*p(num)的值
//
//	printf("%d\n", num);
//}

//int main()
//{
//	const int num = 10;
//	int* const p = &num;//这样可以
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
//	p = &n;// const放在指针变量得*右边时，修饰的是指针变量p本身,p不能被改变了
//
//	printf("%d\n", num);
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	//strcpy--字符串拷贝
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
	char* ret = dest;//在开始时就把dest的起始地址保存起来
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含‘\0’字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回dest的起始地址
}
int main()
{
	//strcpy--字符串拷贝
	char arr1[] = "##########";
	char arr2[] = "bit";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}