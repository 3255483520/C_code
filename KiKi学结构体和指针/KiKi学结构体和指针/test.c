#define _CRT_SECURE_NO_WARNINGS 1

//描述
//	KiKi学习了结构体和指针，他了解了结构体类型可以定义包含多个不同类型成员，而指针本质是内存地址，是引用数据的
//	另外一种方式。现在他想将多个输入的数据通过结构体和指针的方式连接在一起，形成一个单向链表，即：每个结点是结
//	构体类型，包括整型数据成员（data）和结构体指针类型成员（next），每个结点的指针部分指向下一个输入的结点。具
//	体建立过程如下：先输入n个整数，按照数据输入的顺序建立一个带头结点的单链表，再输入一个数据m, 将单链表中的值
//	为m的结点全部删除。输出删除后的单链表信息。
//输入描述：
//	包括三行：
//	第一行输入数据个数n(3≤n≤100);
//	第二行依次输入n个整数，用空格分隔;
//	第三行输入欲删除数据m。
//输出描述：
//	包括两行：
//	第一行输出完成删除后的单链表长度；
//	第二行依次输出完成删除后的单链表数据。
//示例1
//	输入：
//		5
//		1 2 2 3 4
//		2
//	输出：
//		3
//		1 3 4


#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;//数据域
	struct Node* next;//指针域
};
int main()
{
	struct Node* list = NULL;//指向链表的指针
	struct Node* tail = NULL;//指向链表尾部元素的指针
	//输入n
	int n = 0;
	//输入结点
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	int d = 0;//要删除的元素
	for (i = 0; i<n; i++)
	{
		scanf("%d", &m);
		struct Node *pn = (struct Node*)malloc(sizeof(struct Node));
		pn->data = m;
		pn->next = NULL;
		if (list == NULL)
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = pn;
		}
	}
	//接收要删除的元素
	scanf("%d", &d);
	//删除链表中指定的元素
	struct Node *cur = list;
	struct Node *prev = NULL;
	while (cur)
	{
		//找到了要删除的元素
		if (cur->data == d)
		{
			//删除
			struct Node* pd = cur;
			//如果删除的是第一个结点
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				//删除的不是第一个结点
				prev->next = cur->next;
				cur = prev->next;
			}
			free(pd);
			n--;
		}
		else//找不到
		{
			prev = cur;
			cur = cur->next;
		}
	}
	//输出
	printf("%d\n", n);
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	//释放链表
	cur = list;
	struct Node* del = NULL;
	while (cur)
	{
		del = cur;
		cur = cur->next;
		free(del);
	}
	list = NULL;

	return 0;
}