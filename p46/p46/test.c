#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
// 作业1   写一个函数，可以逆序一个字符串的内容
//void reverse(char* str)
//{
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
//	scanf("%s", arr);//abcdef-----fedcba
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//
//	return 0;
//}


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
//	scanf("%s", arr);//abcdef-----fedcba
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//
//	return 0;
//}


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
//	gets(arr);//abcdef-----fedcba
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);
//
//	return 0;
//}

//作业2  求Sn=a+aa+aaa+aaaa+aaaaa,其中a是一个数字
//例如：2+22+222+2222+22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//作业3  打印水仙花数

//求出100～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1^3＋5^3＋3^3 ，则153是一个“水仙花数”。
#include <math.h>
int main() 
{
	int i = 0;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	for (i = 0; i < 1000; i++)
	{		
			int ge = i % 10;
			int shi = (i / 10) % 10;
			int bai = i / 100;

			if (i==ge*ge*ge+shi*shi*shi+bai*bai*bai)
			{
				printf("%d ", i);
			}
	}

	return 0;
}










/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/


//#include <math.h>//pow函数的头文件
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为水仙花数,需要3步
//		//1 计算i的位数---n位数
//		//2 计算i的每一位的n次方之和---sum
//		//3 比较i==sum
//
//		//1 计算i的位数---n位数
//		int n = 1;//任意写一个数，至少是1位数
//		int tmp = i;
//		int sum = 0;
//
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//2 计算i的每一位的n次方之和---sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3 比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//作业4  打印菱形
/*1.在屏幕上输出以下图案：
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 *(line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
