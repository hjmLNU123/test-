//定义一个结构体表示游戏人物
// 属性有:姓名、攻击力、防御力、血量
// 要求:把三个游戏人物放入到数组当中，并遍历数组
#include<studio.h>
#include<string.h>
typedef struct hero
{
    char name[100];
    int attack;
    int defense;
    int blood;
}h;
// h作为别名 省去了后续定义或是赋值时再次使用struct的步骤，使得操作更加方便高效
int main()
{
    h taro = {"泰罗",100,90,500};
    h rem = {"雷欧",90,80,450};
    h eddie = {"艾迪",120,70,600}; 

    h arr[3] = {taro,rem,eddie};
    for (int i=0;i<3;i++)
    {
        h temp=arr[i];
        printf("奥特曼的名字为%s,攻击力为%d,防御力为%d,血量为%d,temp.name,temp.attack,temp.defense,temp.blood");
    }
    return 0;
}