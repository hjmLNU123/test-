#include <stdio.h>
//结构体可以理解为自定义的数据类型
//它是由一批数据组合而成的结构型数据
struct student
{
    char name[100];
    int age;
};

int main()
{
    //定义三个学生，同时赋值
    struct  student stu1 = {"张三",23};
    struct  student stu2 = {"李四",21};
    struct  student stu3 = {"王五",22};
    //把三个学生放入数组
    struct student stuArr[3]={stu1,stu2,stu3};
    for(int i = 0;i<3;i++)
    {
        struct student temp = stuArr[i];
        printf("学生的信息为：姓名%s,年龄%d\n",temp.name,temp.age);
    }
    return 0;
}
