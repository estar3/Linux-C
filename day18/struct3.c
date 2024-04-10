//结构体和函数的关系
#include <stdio.h>
typedef struct student{
    char name[32];
    int age;
}stu_t;

void show(stu_t st){//st=s1
    printf("%s, %d\n", st.name, st.age);
}
void grow(stu_t st){//st=s1
    st.age++;//修改的是形参st的值,和变量s1没有关系
}
void show_p(const stu_t* pst){
    //pst->age++;
    printf("%s, %d\n", pst->name, pst->age);
    //print(...);
}
void grow_p(stu_t* pst){//pst = &s1
    pst->age++;//直接修改了实参s1的age的值
}

stu_t get_stu_info(void){
    stu_t s = {"zhangsan", 19};
    return s;
}
/*
stu_t* get_stu_info_p(void){
    stu_t s = {"lisa", 39};//结构体类型的变量,局部变量
    return &s;//不可以返回局部变量地址
}
*/

int main(void){
    stu_t s1 = {"xiaobai", 19};
    show(s1);
    grow(s1);
    show(s1);
    printf("------------\n");
    grow_p(&s1);
    show_p(&s1);//s1的age是否会加１呢
    show(s1);
    stu_t stu = get_stu_info();//使用stu保存该函数的返回值
    printf("%s, %d\n", stu.name, stu.age);
    //stu_t* pst = get_stu_info_p();
    //printf("%s, %d\n", pst->name, pst->age);
    return 0;
}

