#define _CRT_SECURE_NO_WARNINGS 1
//##���԰�λ�������ߵķ��źϲ���һ�����ţ�������궨��ӷ�����ı�Ƭ�δ�����ʶ��
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