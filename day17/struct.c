//定义结构体变量玩法１：直接定义结构体变量
#include <stdio.h>
#include <string.h>
int main(void){
    //直接定义结构体数据类型的变量s1并且初始化
    struct{
        char name[32];//存储名字
        int age;//存储年龄
    }s1 = {"james", 33};
    //打印学生信息
    //通过变量名访问其中的成员语法:变量名.成员名
    printf("%s, %d\n", s1.name, s1.age);

    s1.age = 39;
    strcpy(s1.name, "James");

    printf("%s, %d\n", s1.name, s1.age);
    return 0;
}

