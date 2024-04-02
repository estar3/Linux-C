#include <stdio.h>

void A(void){
    static int a = 520;//静态局部变量
                       //使用范围 - 和普通的局部变量一致
                       //生命周期 - 程序运行(./var)的时候分配好内存了
                       //直到程序结束, 内存被释放 
    printf("A : a = %d\n", a);
    a = 100;
    //printf("A : g_a = %d\n", g_a);//error
}

int g_a = 520;//定义初始化全局变量g_a, "g_" = global = 全局
              //全局变量 - 不初始化 - 0 
              //使用范围 - 从定义的地方开始向下所有的代码都可以访问
              //生命周期 - 从程序运行的时候分配号内存了, 直到程序结束

int main(void){
    A();//520
    A();
    printf("main : g_a = %d\n", g_a);
    return 0;
}







