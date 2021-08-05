#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//指针数组的知识点

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;

	int* p[3] = { pa, pb, pc };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *p[i]);//10 20 30  p[i]是先找到这个数的地址，然后解引用这个数*p[i]
	}


	return 0;
}

