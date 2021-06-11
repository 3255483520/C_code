#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体传参

//结论：结构体传参的时候，要传结构体的地址

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//int main()
//{
//	struct S s;
//
//	s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(s);//这个程序有问题，是不对的
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(&s);//这个程序有问题，是不对的
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)//传值打印
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//这个程序有问题，是不对的
//	Print1(s);
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print2(struct S* ps)//传址打印
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//这个程序有问题，是不对的
//	Print2(&s);
//
//	return 0;
//}



struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
void Print2(const struct S* ps)//传址打印
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);//这个程序有问题，是不对的
	Print2(&s);

	return 0;
}