#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//枚举类型

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = BLUE;
//
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//
//	return 0;
//}



//联合-联合体-共用体---共用同一块空间

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//这3个地址打印出来是一样的
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	//低地址--------------------->高地址
//	//...[][][][][][][][11][22][33][44][][][][][][][][][][][][]...    大端字节序储存模式
//	//...[][][][][][][][44][33][22][11][][][][][][][][][][][][]...    小端字节序储存模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}



//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int check_sys()
//{
//	union   //省去Un是匿名联合体类型
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}