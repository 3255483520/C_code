#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>//offsetof��ͷ�ļ���offsetof��һ���꣬���Ǻ���

//offsetof��ʹ�ã�offsetof��һ���꣬���Ǻ���

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//12
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12
//	printf("%d\n", offsetof(struct S, c1));//0   offsetof��һ���꣬���Ǻ�����offsetof��ͷ�ļ���stddef.h
//	printf("%d\n", offsetof(struct S, a));//4
//	printf("%d\n", offsetof(struct S, c2));//8
//
//	return 0;
//}


//�Զ���ʵ�ֺ�offsetof       offsetof��һ���꣬���Ǻ�����offsetof��ͷ�ļ���stddef.h
struct S
{
	char c1;
	int a;
	char c2;
};

#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)//(struct_name*)0:��0ǿ������ת��Ϊ�ṹ��ָ�루��ַ��
                            //��0��ַ���ҽṹ���Ա�������Ա�Ǹ���������((struct_name*)0)->member_name
                            //�ҵ���Ա��ȡ�����Ա�ĵ�ַ��&(((struct_name*)0)->member_name)
                            //��ΪOFFSET���ص���ƫ�������ѵ�ַǿ������ת��Ϊint�ͣ�(int)&(((struct_name*)0)->member_name)
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));//0    (int)&(((struct S*)0)->c1)
	printf("%d\n", OFFSETOF(struct S, a));//4     (int)&(((struct S*)0)->a)
	printf("%d\n", OFFSETOF(struct S, c2));//8    (int)&(((struct S*)0)->c2)

	return 0;
}