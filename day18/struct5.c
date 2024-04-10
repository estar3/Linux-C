#include <stdio.h>

//结构体成员为结构体指针类型变量
//描述学生出生日期的结构体
typedef struct birthday{
    int year;
    int month;
    int day;
}birth_t;
//描述学生信息的结构体
typedef struct student{
    char name[32];
    int age;
    birth_t* pbirth;//结构体指针类型的成员
}stu_t;
int main(void){
    //定义结构体类型变量
    stu_t s1 = {"james", 29, NULL};
    //定义birth_t类型变量
    birth_t birth = {1993, 9, 28};
    //给james同学关联对应的出生日期,此时pbirth就会指向一个有效内存
    s1.pbirth = &birth;
    //birth_t* pbirth;
    //pbirth->year, pbirth->month, pbirth->day
    printf("%s,%d,(%d,%d,%d)\n",
                s1.name, s1.age, s1.pbirth->year, s1.pbirth->month, s1.pbirth->day);
    s1.age = 52;
    s1.pbirth->year = 1970;
    printf("%s,%d,(%d,%d,%d)\n",
                s1.name, s1.age, s1.pbirth->year, s1.pbirth->month, s1.pbirth->day);
    return 0;
}




