#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
////qsort--quick sort��������
////void qsort(void *base,
////	       size_t num, 
////		   size_t width, 
////		   int(__cdecl *compare)(const void *elem1, const void *elem2));
////
////void qsort(void *base, 
////	       size_t num, 
////		   size_t width, 
////		   int(*cmp)(const void *e1, const void *e2));//qsort�����ĵ��ĸ������Ǻ���ָ�����͵�
//
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//cmp((char*)base + j*width��(char*)base + (j + 1)*width������Ԫ�صĵ�ַ
			{
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
				//(char*)base + j*width��(char*)base + (j + 1)*width��char*��ָ�룬����Swap��������char*��ָ�룬��������8���ֽڵ�Ԫ�ؽ��н���
				//char*��ָ�벻֪����ô������һ��һ�Խ��н���������Ҫ�������ԾͲ�����ˣ���Ҫ������Ԫ��ָ��ĵ�ַ���н�������ôһ���ַ�һ����
				//�����н�����ʱ����Ҫ֪���������ַ����Ǽ����ֽڣ��Ӷ�������֪��Ҫ�������Բ��ܸ㶨������Ҫ��Ԫ�صĿ��Ҳ����ȥ������Swap�����ڲ�û��
				//�������е��ֽ�
			}
		}
	}
}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�����ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}



//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]),);
//}
//
//int main()
//{
//	test4();
//
//	return 0;
//}


//�������͵�����

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//int main()
//{
//	test4();
//
//	return 0;
//}


//����ṹ�壨���������ţ�
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test5();
//
//	return 0;
//}


//����ṹ�壨���������ţ�
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test5();
//
//	return 0;
//}
