#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;
//
//int main()
//{
//	Stu s1 = { "����", 20, "18856859652", "��" };
//	struct Stu s2 = { "����", 30, "19810011", "����" };
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = {"hehe", { 100, 'w', "hello world", 3.14}, arr};
//
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;
//void Print(Stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//int main()
//{
//	Stu s = { "����", 20, "18856859652", "��" };
//	Print(s);
//
//	return 0;
//}

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//
//}Stu;
//void Print(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 20, "18856859652", "��" };
//	Print(&s);
//
//	return 0;
//}