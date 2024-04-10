#include <stdio.h>

//结构体成员为结构体类型变量
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
    birth_t birth;//结构体类型的成员
}stu_t;
int main(void){
    //定义结构体类型变量
    stu_t s1 = {"james", 29, {1993,9,28}};
    stu_t* ps1 = &s1;
    //ps1->name ps1->age ps1->birth
    //成员的访问
    //s1
    //s1.name s1.age s1.birth
    //birth_t birth
    //birth.year birth.month birth.day
    printf("%s, %d, (%d, %d, %d)\n", 
                s1.name, s1.age, s1.birth.year, s1.birth.month, s1.birth.day);
    printf("%s, %d, (%d, %d, %d)\n",
                ps1->name, ps1->age, ps1->birth.year, ps1->birth.month, ps1->birth.day); 
    s1.age = 30;
    s1.birth.year = 1992;
    printf("%s, %d, (%d, %d, %d)\n", 
                s1.name, s1.age, s1.birth.year, s1.birth.month, s1.birth.day);
    printf("%s, %d, (%d, %d, %d)\n",
                ps1->name, ps1->age, ps1->birth.year, ps1->birth.month, ps1->birth.day); 
    return 0;
}




