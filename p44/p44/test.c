#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//笔试题3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);//这个题目听明白了，但是需要多看看视频
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//笔试题4

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//逗号表达式，上面的数组其实就是 int  a[3][2]={1,3,5};
//	//这个二维数组是
//	//1 3
//	//5 0
//	//0 0
//	int *p;
//	p = a[0];//a[0]是第一行的数组名，，没有sizeof(a[0]),也没有&a[0],所以代表的是首元素的地址，也就是第一行第一个元素的地址，也就是1的地址
//	printf("%d", p[0]);//p[0]=*(p+0)  这个表达式转换一定要搞明白，记住它就行了，一定要记住
//	return 0;
//}



//笔试题5
int main()
{
	int a[5][5];//这个题目太难了，没有弄明白，去看看视频吧
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}