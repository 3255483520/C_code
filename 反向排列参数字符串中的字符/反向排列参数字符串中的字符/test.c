#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作业：编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include<string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;//这里是求字符串的，用strlen，求数组的大小用sizeof，这两种情况不要弄错了
//	
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

#include<string.h>//这个程序听明白了，可这个太难理解了，多看看视频吧
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}
