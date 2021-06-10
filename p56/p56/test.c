#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//memcpy函数---内存拷贝函数

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}


//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr3[] = { { "张三",20 }, { "李四",30 } };
//	struct S arr4[3] = { 0 };
//
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}


//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	
//
//	return 0;
//}


//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
//	int i=0;
//	
//	my_memcpy(arr+2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//memmove函数
//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int i = 0;
//
//	memmove(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



#include <assert.h>
struct S
{
	char name[20];
	int age;
};

void* my_memmove(void* dest, const void* src, size_t num)
{

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;

	my_memmove(arr + 2, arr, 20);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}