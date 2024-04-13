#include <stdio.h>
#include <stdlib.h>

#define NUM (4)
//想要存储NUM个员工的信息, 分配NUM个emp_t类型的存储区

//声明描述员工信息的结构体类型
typedef struct employee{
    char name[32];
    int age;
}emp_t;

emp_t* get_employee_info(void){
    emp_t* p = (emp_t *)malloc(sizeof(emp_t)*NUM);    
    emp_t* ptmp = p;//临时备份分配的内存首地址, 将来用于返回
    //完成员工信息的初始化
    for(int i = 0; i < NUM; i++){
        printf("请输入员工姓名:");
        scanf("%s", p->name);//讲输入的姓名直接放到name成员中
        printf("请输入员工年龄:");
        scanf("%d", &p->age);//将输入的年龄直接放到age成员中
        p++;
    }
    //返回分配的内存的首地址
    return ptmp;
}

int main(void){
    //定义函数分配初始化员工信息的内存
    emp_t* p = get_employee_info();
    //打印员工信息
    for(int i = 0; i < NUM; i++){
        printf("%s, %d\n", p[i].name, p[i].age);
    }
    //释放内存
    free(p);
    return 0;
}

