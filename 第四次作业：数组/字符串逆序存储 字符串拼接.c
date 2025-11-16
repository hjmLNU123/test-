/*下面程序的功能是先将在字符串s中的字符按逆序存放到t串中，
然后把s中的字符按正序连接到t串的后面。
例如，当s中的字符串为:"ABCDE"时,则t中的字符串应为:'EDCBAABCDE”*/
#include <stdio.h>
#include <string.h>
int main()
{
    //定义数组和变量
    char s[80],t[200];
    int i, sl;
    //gets函数获取数组内容
    gets(s);
    //strlen函数获取s数组的元素个数并赋值给s1
    sl=strlen(s);
    //循环s1的次数让数组倒序处理
    for(i=0;i<sl; i++ )
    {
        t[i]= s[sl - i-1];
    }
    //头尾相接后的长度为2*s1，然后输出终止符结束程序
    for(i=0;i<sl;i++ )
    {
        t[sl + i]= '\0';
    }
    //输出字符串内容
    puts(t );
    return(0);

}
