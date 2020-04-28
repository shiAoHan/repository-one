#include<stdio.h>
#include<stdlib.h>
void fun(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    printf("开始进行交换!\n");
}
void main()
{
    int a,b;
    printf("请输入两个整数:");
    scanf("%d%d",&a,&b);
    printf("交换前a和b的值分别是%d,%d\n",a,b);
    fun(&a,&b);
    printf("交换后a和b的值分别是%d,%d\n",a,b);
    printf("hello world");
    system("pause");
}