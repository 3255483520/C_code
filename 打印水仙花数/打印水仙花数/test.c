#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作业3  打印水仙花数

//求出100～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1^3＋5^3＋3^3 ，则153是一个“水仙花数”。

//int main() 
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//
//	for (i = 100; i < 1000; i++)
//	{		
//			int ge = i % 10;
//			int shi = (i / 10) % 10;
//			int bai = i / 100;
//
//			if (i==ge*ge*ge+shi*shi*shi+bai*bai*bai)
//			{
//				printf("%d ", i);
//			}
//	}
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//
//	for (i = 100; i < 1000; i++)
//	{
//		int ge = i % 10;
//		int shi = (i / 10) % 10;
//		int bai = i / 100;
//
//		if (i == pow(ge,3) + pow(shi,3) + pow(bai,3))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int ge = 0;
//	int shi = 0;
//	int bai = 0;
//	int n = 0;
//
//	for (i = 100; i < 1000; i++)
//	{
//		int ge = i % 10;
//		int shi = (i / 10) % 10;
//		int bai = i / 100;
//		n = pow(ge, 3) + pow(shi, 3) + pow(bai, 3);
//
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}









/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/


#include <math.h>//pow函数的头文件
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数,需要3步
		//1 计算i的位数---n位数
		//2 计算i的每一位的n次方之和---sum
		//3 比较i==sum

		//1 计算i的位数---n位数
		int n = 1;//n位数   任意写一个数，至少是1位数
		//
		int tmp = i;
		int sum = 0;

		while (tmp/=10)
		{
			n++;
		}
		//2 计算i的每一位的n次方之和---sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);//这里会有一个警告，因为pow函数返回值是一个double类型的，而sum是int型的，所以会有警告出现
			tmp /= 10;
		}
		//3 比较i==sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}