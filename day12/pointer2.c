#include <stdio.h>

int main(void){
    /*
    int* p = NULL;//定义初始化指针变量p保存空指针 - 0地址
    printf("%#x\n", *p);//程序崩溃
    *p = 100;//程序崩溃
    */

    int* p1;//只定义指针变量p1, 没有初始化 - p1就是野指针 
    printf("%#x\n", *p1);//程序崩溃
    *p1 = 101;//程序崩溃
    return 0;
}

