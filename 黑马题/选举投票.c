#include <time.h>
#include <stdlib.h>
#include <stdio.h>
//某班级组织野外郊游，想要在ABCD四个景点选择其中一个，现在班上有80名同学进行投票，找出投票数最多的景点
//Ps:
//1，学生投票，用随机数模拟
//2，如果多个景点投票一样的话，A优先B，B优先于C，C优先于D

struct spot
{
    char name[100];
    int count;
};

int main()
{
    //定义一个数组，存储着景点名和投票数
    struct spot arr[4]={{"A",0},{"B",0},{"C",0},{"D",0}}
    srand(time(NULL));
    for (int i=0;i<80;i++)
    {
        //choose的含义
        //表示用户的投票
        //表示arr中的索引,通过这个索引获取景点的名字和投票数量
        int choose=rand()%4;
        arr[choose].count++;
    }
    //找最大值
    int max=arr[0].count;
    for (int i=1;i<4;i++)
    {
        struct spot temp = arr[i];
        if(temp.count<max)
        {
            max = temp.count;
        }
    }
    //遍历数组，看谁的票数刚好是最大值
    for (int i=0;i<4;i++)
    {
        struct spot temp = arr[i];
        if(temp.count==max)
        {
            printf("投票最多的景点为：%s,共计：%d张票\n",temp.name,temp.count);
            break;
        }
    }
    for (int i=0;i<4,i++)
    {
        struct spot temp = arr[i];
        printf("%s %d\n",temp.name,temp.count);
    }
    return 0;
}                 