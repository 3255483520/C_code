#define _CRT_SECURE_NO_WARNINGS 1
//让程序停下来的方法-用system函数
#include <stdio.h>
#include <stdlib.h>//system函数的头文件
int main()
{
	int a = 5;

	printf("%d\n", a);

	system("pause");
	return 0;
}
//上面这个程序没有通过设置项目属性让程序停下来显示到桌面上，
//是通过用system函数让它停下来显示在桌面上的
//这两种方法都是对的，设置项目属性停下来的方法用的更多一点