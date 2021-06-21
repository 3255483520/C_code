#define _CRT_SECURE_NO_WARNINGS 1


//描述
//       假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述：
//     一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：
//     一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
//示例1
//      输入：
//           ABBABBAAB0
//      输出：
//           B



#include <stdio.h>
//方法一：一个字符一个字符进行打印（读取）
int main()
{
    int ch=0;
    int count_a=0;
    int count_b=0;
    while(((ch=getchar())!='0') && (ch!=EOF))
    {
        if(ch=='A')
            count_a++;
        if(ch=='B')
            count_b++;
    }
    if(count_a>count_b)
        printf("A\n");
    else if(count_a<count_b)
        printf("B\n");
    else
        printf("E\n");
    
    return 0;
}
/*int main()
{
    int ch=0;
    int count=0;
    while(((ch=getchar())!='0') && (ch!=EOF))
    {
        if(ch=='A')
            count++;
        if(ch=='B')
            count--;
    }
    if(count>0)
        printf("A\n");
    else if(count<0)
        printf("B\n");
    else
        printf("E\n");
    
    return 0;
}*/

//方法二：一次一行进行打印（读取）
//这个程序在VS2013上面运行没有问题，但在牛客网上面运行提示gets函数没有定义
/*int main()
{
    char str[100]={0};//ABBABBAAB0
    //读取一行
    gets(str);
    int i=0;
    int count=0;
    while(str[i]!='0')
    {
        if(str[i]=='A')
            count++;
        else if(str[i]=='B')
            count--;
        
        i++;
    }
    if(count>0)
        printf("A\n");
    else if(count<0)
        printf("B\n");
    else
        printf("E\n");
    
    return 0;
}*/


