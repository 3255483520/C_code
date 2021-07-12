#define _CRT_SECURE_NO_WARNINGS 1

//作业1  喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
#include <stdio.h>

//int main()
//{
//	int money = 0;//总钱数
//	int total = 0;//汽水总数
//	int empty = 0;//空瓶总数
//
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total = money;
//	empty = total;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//
//	return 0;
//}


//int main()
//{
//	int money = 0;//总钱数
//	int total = 0;//汽水总数
//	int empty = 0;//空瓶总数
//
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	total =2*money-1;//这个代码有点问题，当输入money=0时，total=-1
//
//	printf("total=%d\n", total);
//
//	return 0;
//}



int main()
{
	int money = 0;//总钱数
	int total = 0;//汽水总数
	int empty = 0;//空瓶总数

	scanf("%d", &money);
	//买回来的汽水喝掉
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;

	printf("total=%d\n", total);

	return 0;
}