//定义结构体变量玩法3:
//typedef给数据类型其别名
#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[32];
    int age;
}stu_t;
//typedef struct student stu_t;
int main(void){
    //使用stu_t数据类型定义变量
    stu_t s1 = {"zhangsan", 18};
    //标记初始化
    stu_t s2 = {.name = "lisi", .age = 19};
    printf("%s, %d\n", s2.name, s2.age);
    s2.age = 20;
    strcpy(s2.name, "wangwu");
    printf("%s, %d\n", s2.name, s2.age);
    return 0;
}

