#include <stdio.h>
int main()
{
    char str1[]="hello world";
    printf("%s\n",str1);
    //1.字符串名就是字符串首地址
    //2.在底层中实际存储的时候，字符串会转换成字符数组进行保存，并且末尾还有加上'\0'
    //3.数组的长度要么不写要么预留出'\0'的位置
    //4.字符数组+双引号的方式定义字符串，内容可以改变
    char str1[0]="w";
    printf("%s\n",str1);
    //则会输出wello world

    char* str2="hello world";
    printf("%s\n",str2);
    //利用指针+双引号的方式定义字符串，会把底层的字符数组放在只读常量区
    //内容不可以改变，字符串可以复用的
    return 0;
}