#include <stdio.h>

int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}

int main(void){
    printf("main:%p\n", main);
    printf("add :%p\n", add);
    printf("sub :%p\n", sub);
    int ret = 0;
    //如何来定义一个指针变量存储函数的首地址
    //函数指针变量 - 指向哪个函数 - add - 函数指针变量 + 参数 + 返回值 -
    //初始化 - 函数名
    //定义函数指针变量pfunc保存了add函数的首地址
    int (*pfunc)(int,int) = add; 
    //ret = add(100, 200);
    ret = pfunc(100, 200);
    printf("add函数的返回值为%d\n", ret);//300
    printf("pfunc:%p\n", pfunc);
    //让pfunc指向sub函数 - ok
    //pfunc存储了sub函数的首地址
    pfunc = sub;
    printf("pfunc:%p\n", pfunc);
    ret = pfunc(300, 50);//== sub(300, 50); == 250 
    printf("sub函数的返回值为%d\n", ret);

    return 0;
}

