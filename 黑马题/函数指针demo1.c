#include <stdio.h>
int main()
//声明函数
int add(int a,int b);
int substract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
{
    //定义函数指针数组
    int(*arr[4])(int,int)={add,substract,multiply,divide};
    printf("请输入两个数进行运算操作(1:加法 2:减法 3:乘法 4:除法):");
    //定义两个操作数
    int a;
    int b;
    //输入两个操作数
    scanf("%d %d",&a,&b);
    printf("请输入操作符(1:加法 2:减法 3:乘法 4:除法):");
    //定义操作符
    int choose;
    scanf("%d",&choose);
    int result=arr[choose-1](a,b);
    printf("结果是：%d\n",result);
    return 0;
}
//定义函数
int add(int a,int b)
{
    return a+b;
}

int substract(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}   
