#define _CRT_SECURE_NO_WARNINGS 1


//����
//       ������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//����������
//     һ�У��ַ����У�����A��B���������ַ�0������
//���������
//     һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
//ʾ��1
//      ���룺
//           ABBABBAAB0
//      �����
//           B



#include <stdio.h>
//����һ��һ���ַ�һ���ַ����д�ӡ����ȡ��
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

//��������һ��һ�н��д�ӡ����ȡ��
//���������VS2013��������û�����⣬����ţ��������������ʾgets����û�ж���
/*int main()
{
    char str[100]={0};//ABBABBAAB0
    //��ȡһ��
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


