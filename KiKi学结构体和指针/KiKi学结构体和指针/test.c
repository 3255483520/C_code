#define _CRT_SECURE_NO_WARNINGS 1

//����
//	KiKiѧϰ�˽ṹ���ָ�룬���˽��˽ṹ�����Ϳ��Զ�����������ͬ���ͳ�Ա����ָ�뱾�����ڴ��ַ�����������ݵ�
//	����һ�ַ�ʽ���������뽫������������ͨ���ṹ���ָ��ķ�ʽ������һ���γ�һ��������������ÿ������ǽ�
//	�������ͣ������������ݳ�Ա��data���ͽṹ��ָ�����ͳ�Ա��next����ÿ������ָ�벿��ָ����һ������Ľ�㡣��
//	�彨���������£�������n���������������������˳����һ����ͷ���ĵ�����������һ������m, ���������е�ֵ
//	Ϊm�Ľ��ȫ��ɾ�������ɾ����ĵ�������Ϣ��
//����������
//	�������У�
//	��һ���������ݸ���n(3��n��100);
//	�ڶ�����������n���������ÿո�ָ�;
//	������������ɾ������m��
//���������
//	�������У�
//	��һ��������ɾ����ĵ������ȣ�
//	�ڶ�������������ɾ����ĵ��������ݡ�
//ʾ��1
//	���룺
//		5
//		1 2 2 3 4
//		2
//	�����
//		3
//		1 3 4


#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;//������
	struct Node* next;//ָ����
};
int main()
{
	struct Node* list = NULL;//ָ�������ָ��
	struct Node* tail = NULL;//ָ������β��Ԫ�ص�ָ��
	//����n
	int n = 0;
	//������
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	int d = 0;//Ҫɾ����Ԫ��
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
	//����Ҫɾ����Ԫ��
	scanf("%d", &d);
	//ɾ��������ָ����Ԫ��
	struct Node *cur = list;
	struct Node *prev = NULL;
	while (cur)
	{
		//�ҵ���Ҫɾ����Ԫ��
		if (cur->data == d)
		{
			//ɾ��
			struct Node* pd = cur;
			//���ɾ�����ǵ�һ�����
			if (cur == list)
			{
				list = list->next;
				cur = list;
			}
			else
			{
				//ɾ���Ĳ��ǵ�һ�����
				prev->next = cur->next;
				cur = prev->next;
			}
			free(pd);
			n--;
		}
		else//�Ҳ���
		{
			prev = cur;
			cur = cur->next;
		}
	}
	//���
	printf("%d\n", n);
	cur = list;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	//�ͷ�����
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