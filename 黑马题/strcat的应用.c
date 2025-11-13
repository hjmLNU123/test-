#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="hello";
    char str2[10];
    printf("请输入一个字符串：");
    gets(str2);
    strcat(str1,str2);
    printf("连接后的字符串是：%s\n",str1);
    return 0;
}