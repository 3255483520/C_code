#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ð������

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{4
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	bubble_sort(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



#include <stdlib.h>//qsort������ͷ�ļ�
//qsort--quick sort��������
//void qsort(void *base,
//	       size_t num, 
//		   size_t width, 
//		   int(__cdecl *compare)(const void *elem1, const void *elem2));
//
//void qsort(void *base, 
//	       size_t num, 
//		   size_t width, 
//		   int(*cmp)(const void *e1, const void *e2));//qsort�����ĵ��ĸ������Ǻ���ָ�����͵�

//����void* ��ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;//a�ĵ�ַ��int*���͵ģ���pc��char*���͵ģ����Իᷢ������
//
//	char ch = 'w';
//	void* p = &a;//û�о���
//	void* pp = &ch;//û�о���
//	//void* ���͵�ָ�룬���Խ����������͵ĵ�ַ���Ҳ��ᷢ�����棩
//	p = &ch;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	void* p = &a;// 
//
//	*p = 0;//void* ���͵�ָ�룬���ܽ��н����ò�������Ϊvoid* û�о�����������ͣ������ò���ʱ�����ʼ����ֽڲ���ȷ��
//	p++;//p++����Ҳ���У�void*���͵�ָ��Ҳ���ܽ��мӼ������Ĳ�������Ϊ��֪��void*�����ͣ��޷�ȷ����һ����ǰ���������ֽ�
//
//	return 0;
//}





//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//e1,e2��void*��ָ�루e1��e2����ָ�룩������ֱ�ӽ����ò�������Ϊ���ǱȽϵ�����������Ԫ�أ�
//	                             //����ǿ������ת��Ϊint*�ͣ���int*��e1,�����һ�����͵ĵ�ַ�����͵�ַ�����ã�*(int*)e1���ͷ�����һ����������
//}                                //�ҵ��������Ԫ��
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


#include <stdlib.h>//qsort������ͷ�ļ�
//qsort--quick sort��������
//��qsort������������

//������һ�������װΪһ��������ʵ�֣�Ϊ���ô��뿴�ĸ�����һ�㣬д�ɺ�����ʵ��Ҳ����C���Ե����ƣ�
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}


////��qsort���򸡵�������
//#include <stdlib.h>//qsort������ͷ�ļ�
////qsort--quick sort��������
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;//�������һ�����棬��Ϊ*(float*)e1��*(float*)e2���Ǹ���������������ȥ������������Ǹ�������˵��return���ص���
//}                                    //����������int cmp_float(const void* e1, const void* e2)��������ķ���������int�ͣ����Իᷢ������
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}

////��qsort���򸡵�������
#include <stdlib.h>//qsort������ͷ�ļ�
//qsort--quick sort��������

//int cmp_float(const void* e1, const void* e2)
//{
//	//��elem1>elem2ʱ������1
//	//��elem1=elem2ʱ������0	
//	//��elem1<elem2ʱ������-1
//	if (*(float*)e1 == *(float*)e2)//��ôд��û�о����ˣ���Ϊreturn���ص�0 1 -1����int�͵�
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}


////��qsort���򸡵�������
//#include <stdlib.h>//qsort������ͷ�ļ�
////qsort--quick sort��������
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));//ǿ������ת������Ϊ*(float*)e1��*(float*)e2���Ǹ���������������ȥ������������Ǹ�������
//                                              //��(*(float*)e1 - *(float*)e2)�Ľ���Ǹ�������ǿ������ת��Ϊint�͵ģ��Ͳ��ᷢ��������
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}

//int main()
//{
//	test2();
//
//	return 0;
//}


//#include <stdlib.h>//qsort������ͷ�ļ�
////qsort--quick sort��������
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//e1��void*���͵�ָ�룬��Ҫǿ������ת��Ϊ�ṹ��ָ��struct Stu*,ת��Ϊ
//}                                                          //�ṹ��ָ����á�->�������ҵ�age(�ṹ��ָ����á�->���ҵ���age��int�͵�,
//                                                           //int cmp_stu_by_age(const void* e1, const void* e2)�ķ�������Ҳ��int�͵ģ����Բ��ᷢ�����棩
//                                                           //��e2��˵Ҳ��������
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//   //����Ͳ����д�ӡ�ˣ��Լ�ȥ�������濴���Լ�������ͺ���
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}


#include <stdlib.h>//qsort������ͷ�ļ�
#include <string.h>//strcmp������ͷ�ļ�
//qsort--quick sort��������

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//strcmp(M1,M2)�������÷���
	//M1>M2,����1
	//M1=M2,����0
	//M1<M2������-1
}

void test4()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
	
	//����Ͳ����д�ӡ�ˣ��Լ�ȥ�������濴���Լ�������ͺ���
}

int main()
{
	test4();

	return 0;
}






//void* ���͵�ָ��

//void* ���͵�ָ�룬���Խ����������͵ĵ�ַ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;//�о��棬˵�����Ͳ�ƥ��
//
//	char ch = 'w';
//	void* p = &a;
//	p = &ch;
//	//void* ���͵�ָ�룬���Խ����������͵ĵ�ַ
//	return 0;
//}

//void* ���͵�ָ�룬���ܽ��н����ò���,Ҳ���ܽ��� + - �����Ĳ���
//int main()
//{
//	int a = 10;
//	
//	
//
//	void* p = &a;
//	*p = 0; // void* ���͵�ָ�룬���ܽ��н����ò���
//	p++;// void* ���͵�ָ�룬���ܽ��� + - �����Ĳ���
//	
//	return 0;
//}