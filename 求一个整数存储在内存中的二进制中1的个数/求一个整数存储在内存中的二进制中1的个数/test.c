#define _CRT_SECURE_NO_WARNINGS 1

//求一个整数存储在内存中的二进制中1的个数

#include <stdio.h>
//int main()//这个程序有缺陷，当输入-1时会出错
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	//统计num的补码中有几个1
//	while (num)
//	{
//		//这种算法与十进制1234%10和1234/10做对比，很容易理解
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


int main()//这个程序输入-1时，结果是32（因为-1的补码是32个1）
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);//假设num为3
	//32bit
	//num&1
	//3的二进制：00000000 00000000 00000000 00000011
	//1的二进制：00000000 00000000 00000000 00000001
	//3&1的结果：00000000 00000000 00000000 00000001
	int i = 0;
	for(i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		count++;
	}
	printf("%d\n", count);

	return 0;
}