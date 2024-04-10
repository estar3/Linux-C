//结构体数组
#include <stdio.h>
//声明描述学生信息的结构体类型
typedef struct student{
    char name[32];
    int age;
}stu_t;
int main(void){
    //定义结构体数组
    stu_t stu_info[3] = {
        {"zhangfei", 19},
        {"zhaoyun", 18},
        {"liubei", 23}
    };
    int size = sizeof(stu_info) / sizeof(stu_info[0]);
    for(int i = 0; i < size; i++)
        printf("%s, %d\n", stu_info[i].name, stu_info[i].age);
    for(int i = 0; i < size; i++)
        stu_info[i].age++;
    for(int i = 0; i < size; i++)
        printf("%s, %d\n", stu_info[i].name, stu_info[i].age);

    return 0;
}

