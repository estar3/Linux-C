//结构体变量玩法２
//先声明数据类型，然后再定义变量
#include <stdio.h>
#include <string.h>
//声明结构体数据类型
struct student{
    char name[32];
    int age;
};
int main(void){
    //定义结构体类型变量
    struct student s1 = {"james", 33};
    //定义结构体指针变量
    struct student* ps1 = &s1;
    //通过指针变量访问结构体成员语法:指针变量->成员名
    printf("%s, %d\n", ps1->name, ps1->age);
    
    ps1->age = 40;
    strcpy(ps1->name, "wukong");

    printf("%s, %d\n", ps1->name, ps1->age);
    printf("%s,%d\n", s1.name, s1.age);
    return 0;
}

