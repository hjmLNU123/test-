#include<stdio.h>
#include<string.h>
//定义一个结构体表示学生student
// student成员如下:名字、年龄、性别、身高、联系方式
//联系方式 Message也是一个结构体,成员如下:手机号、电子邮箱
struct Message
{
    char phone[12];
    char mail[100];
};
typedef struct student
{
    char name[100];
    int age;
    char gender;
    double height;
    struct Message msg;
    //结构体里的成员用到了其他结构体：先写struct+数据类型+变量名
} S;
int main()
{
    S stu;
    strcpy(stu.name,"zhangsan");
    stu.age=23;
    stu.gender='F';
    stu.height=1.85;

    strcpy(stu.msg.phone,"132432432532")
    strcpy(stu.msg.mail,"1234567@qq.com")
    printf("学生的信息为")//省略
//批量赋值
//赋值结构体面有嵌套也得嵌套
    S stu2={......{}.}

    printf("......")//再次打印（省略）
    return 0;

}