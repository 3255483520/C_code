#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Test()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;

	return u.c;
}

int main()
{
	int ret = Test();

	if (ret == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}

	return 0;
}