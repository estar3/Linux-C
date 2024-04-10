#include <stdio.h>

int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}

//什么数据类型
//int (*pfunc)(int, int) - 什么数据类型 - 讲变量名去掉 - 变量的数据类型
//int (*)(int, int) - 函数指针变量的数据类型 - 不存在 - 自定义数据类型 - 其别名
//typedef int (*pfunc_t)(int, int); - 后续可以直接以pfunc_t定义函数指针变量
//注意:将新的数据类型名字写在*的后面
typedef int (*pfunc_t)(int, int);
int main(void){
    printf("main:%p\n", main);
    printf("add :%p\n", add);
    printf("sub :%p\n", sub);
    int ret = 0;
    //定义函数指针变量pfunc指向add函数
    pfunc_t pfunc = add;
    ret = pfunc(100, 200);
    printf("add函数返回值:%d\n", ret);//300
    //定义函数指针变量pfunc2指向sub函数
    pfunc_t pfunc2 = sub;
    ret = pfunc2(100, 200);
    printf("sub函数返回值:%d\n", ret);//-100
    return 0;
}

