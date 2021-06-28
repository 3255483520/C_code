#define _CRT_SECURE_NO_WARNINGS 1

//描述
//	小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
//输入描述：
//	每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
//输出描述：
//	对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。
//示例1
//	输入：
//		10 20
//	输出：
//		30
//示例2
//	输入：
//		15 20
//	输出：
//		65

#include <stdio.h>

/*int main()
{
    long long n=0;
    long long m=0;
    scanf("%lld %lld",&n,&m);
    long long n2=n;
    long long m2=m;
    //18 24
    long long tmp=0;
    long long max=0;
    long long min=0;
    
    while(tmp=n%m)
    {
        n=m;
        m=tmp;
    }
    max=m;
    //最小公倍数=n*m/max
    min=n2*m2/max;
    printf("%lld\n",max+min);
    
    return 0;
}*/



int main()
{
	long long n = 0;
	long long m = 0;
	scanf("%lld %lld", &n, &m);
	//18 24
	long long max = n>m ? m : n;
	long long min = n>m ? n : m;

	while (1)
	{
		if (n%max == 0 && m%max == 0)
		{
			break;
		}
		max--;
	}
	while (1)
	{
		if (min%n == 0 && min%m == 0)
		{
			break;
		}
		min++;
	}

	printf("%lld\n", max + min);

	return 0;
}