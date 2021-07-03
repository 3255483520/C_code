#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", j, i, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//作业：输出乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//9*1=9
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印1行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");//打印完1行后换行
//	
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印1行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");//打印完1行后换行
//
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++)
	{
		//打印1行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");//打印完1行后换行

	}
	return 0;
}