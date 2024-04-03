//指针编程规范 - 不知道指向谁, 初始化为NULL
#include <stdio.h>

int main(void){
    //1.安全性判断 - 安全
    int* pa = NULL;
    int a = 520;
    pa = &a;//pa指向a, pa保存合法地址
    //通过pa访问变量a之前, 进行安全判断
    if(pa == NULL){
        printf("pa没有指向有效内存\n");
        return -1;
    }
    printf("*pa = %d\n", *pa);
    *pa = 521;
    printf("*pa = %d\n", *pa);

    //2.危险
    int* pb = NULL;
    //对pb进行赋值操作 - pb指向一块内存区域
    //忘记对pb赋值
    //int b = 100
    //pb = &b;
    if(pb == NULL){
        printf("pb没有指向有效内存\n");
        return -1;
    }
    printf("*pb = %d\n", *pb);
    *pb = 521;
    printf("*pb = %d\n", *pb);


    return 0;
}









