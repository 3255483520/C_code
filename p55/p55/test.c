#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//stetok函---这个函数有点难，会用它就可以了，不需要学习写它的自定义函数了

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
//	                 //变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//
//	char* ret = strtok(arr, p);//切割buf中的字符串
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
//	strcpy(buf, arr);//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
//	//变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//
//	char* ret = NULL;
//	
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//这个写法用的很巧妙
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "192.168.1.1";//192.168.1.1  是IP地址的点分十进制的表示方式
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改
//	//变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))//这个写法用的很巧妙
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror函数--这个函数会用就行了

//int main()
//{
//	//错误码       错误信息
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
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生率错误，就会把对应的错误码，赋值到errno中
//	//打开文件
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

//字符分类函数（有很多，自己试试）


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


//字符转换函数

//int main()
//{
//	char ch = tolower('Q');//大写转小写
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	char ch = toupper('q');//小写转大写
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