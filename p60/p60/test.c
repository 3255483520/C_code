#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ�崫��

//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ

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
//	Init(s);//������������⣬�ǲ��Ե�
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
//	Init(&s);//������������⣬�ǲ��Ե�
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
//void Print1(struct S tmp)//��ֵ��ӡ
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//������������⣬�ǲ��Ե�
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
//void Print2(struct S* ps)//��ַ��ӡ
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//������������⣬�ǲ��Ե�
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
void Print2(const struct S* ps)//��ַ��ӡ
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);//������������⣬�ǲ��Ե�
	Print2(&s);

	return 0;
}