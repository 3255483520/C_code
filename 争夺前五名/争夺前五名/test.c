#define _CRT_SECURE_NO_WARNINGS 1

//����
//    ���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ�������Ӽ�������n��ѧ���ɼ���������40���������ÿ������ǰ��ߵĳɼ���
//
//����������
//    ���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
//���������
//    һ�У�����ɼ���ߵ�ǰ������ÿո�ָ���
//ʾ��1
//   ���룺6
//         99 45 78 67 72 88
//   �����
//         99 88 78 72 67

#include <stdio.h>

/*int main()
{
int n=0;
int arr[40]={0};
//��ȡ����
scanf("%d",&n);
int i=0;
//��ȡ�ɼ�������
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//��n��ѧ���ĳɼ���������--����
//ð������
//ð�����������
for(i=0;i<n-1;i++)
{
//һ��ð������
int j=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]<arr[j+1])
{
int tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
}
}
}
//����ɼ���ߵ�5��
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}

return 0;
}*/


/*int main()
{
int n=0;
int arr[40]={0};
//��ȡ����
scanf("%d",&n);
int i=0;
//��ȡ�ɼ�������
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//��n��ѧ���ĳɼ���������--����
//ð������
//ð�����������
for(i=0;i<n-1;i++)
{
int flag=1;
//һ��ð������
int j=0;
for(j=0;j<n-1-i;j++)
{
if(arr[j]<arr[j+1])
{
int tmp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tmp;
flag=0;
}
}
if(flag==1)
{
break;
}
}
//����ɼ���ߵ�5��
for(i=0;i<5;i++)
{
printf("%d ",arr[i]);
}

return 0;
}*/



/*#include <stdlib.h>
int cmp_int(const void* e1,const void* e2)
{
return (*(int*)e1-*(int*)e2);
}

int main()
{
int n=0;
int arr[40]={0};
//��ȡ����
scanf("%d",&n);
int i=0;
//��ȡ�ɼ�������
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//qsort--C���Կ⺯��--��������
qsort(arr,n,4,cmp_int);
//����ɼ���ߵ�5��
for(i=n-1;i>=n-5;i--)
{
printf("%d ",arr[i]);
}

return 0;
}*/

#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int n = 0;
	int arr[40] = { 0 };
	//��ȡ����
	scanf("%d", &n);
	int i = 0;
	//��ȡ�ɼ�������
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//qsort--C���Կ⺯��--��������
	qsort(arr, n, 4, cmp_int);
	//����ɼ���ߵ�5��
	for (i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}