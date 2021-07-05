#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//方法1：库函数的方法

//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);//求字符串长度,strlen不会计算字符串bit后面隐藏的'\0'，遇到'\0'就停止计算了
//
//	printf("%d\n", len);
//
//	return 0;
//}

//sizeof与strlen函数的对比
//int main()
//{
//	char arr[] = "bit";
//	int len = sizeof(arr);//求字符串长度,sizeof会计算字符串bit后面隐藏的'\0'
//
//	printf("%d\n", len);
//
//	return 0;
//}

//方法2：计数器的方法

//int my_strlen(char* str)//这个有点难懂，去看看视频
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	printf("len=%d\n", len);
//
//	return 0;
//}


//方法3：递归的方法

//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)//这个有点难懂，去看看视频
//{
//	//把大事化小
//	//my_strlen（"bit"）
//	//1+my_strlen("it")
//	//1+1+my_strlen("t")
//	//1+1+1+my_strlen("")
//	//1+1+1+0
//	//3
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	printf("len=%d\n", len);
//
//	return 0;
//}


//方法4：利用指针减指针的方法（在P24这一课视频里面）
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	//strlen-求字符串长度
	//递归-模拟实现了strlen-计数器的方式1，递归的方式2
	char arr[] = "bit";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}