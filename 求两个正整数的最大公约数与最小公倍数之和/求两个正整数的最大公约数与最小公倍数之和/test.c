#define _CRT_SECURE_NO_WARNINGS 1

//����
//	С��������ڿ���ѧϰ����������������������Լ������С����������������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣
//����������
//	ÿ�������������������n��m��(1 �� n �� 109��1 �� m �� 109)
//���������
//	����ÿ�����룬���һ����������Ϊn��m�����Լ������С������֮�͡�
//ʾ��1
//	���룺
//		10 20
//	�����
//		30
//ʾ��2
//	���룺
//		15 20
//	�����
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
    //��С������=n*m/max
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