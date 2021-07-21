#define _CRT_SECURE_NO_WARNINGS 1
//##可以把位于它两边的符号合并成一个符号，它允许宏定义从分离的文本片段创建标识符
#include <stdio.h>

#define CAT(AA,BB) AA##BB
int main()
{
	int AABB = 2019;
	printf("%d\n",AABB);
	printf("%d\n", CAT(AA, BB));
	//printf("%d\n", AA##BB);
	//printf("%d\n", AABB);

	return 0;
}