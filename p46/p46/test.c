#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
// ��ҵ1   дһ����������������һ���ַ���������
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
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
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
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
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
//	//������
//	reverse(arr);
//
//	printf("�������ַ�����%s\n", arr);
//
//	return 0;
//}

//��ҵ2  ��Sn=a+aa+aaa+aaaa+aaaaa,����a��һ������
//���磺2+22+222+2222+22222

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

//��ҵ3  ��ӡˮ�ɻ���

//���100��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1^3��5^3��3^3 ����153��һ����ˮ�ɻ�������
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
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/


//#include <math.h>//pow������ͷ�ļ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���,��Ҫ3��
//		//1 ����i��λ��---nλ��
//		//2 ����i��ÿһλ��n�η�֮��---sum
//		//3 �Ƚ�i==sum
//
//		//1 ����i��λ��---nλ��
//		int n = 1;//����дһ������������1λ��
//		int tmp = i;
//		int sum = 0;
//
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//2 ����i��ÿһλ��n�η�֮��---sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3 �Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//��ҵ4  ��ӡ����
/*1.����Ļ���������ͼ����
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 *(line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
