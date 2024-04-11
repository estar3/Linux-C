//回调函数
#include <stdio.h>

//声明函数指针类型并且取别名
typedef int (*pfunc_t)(int, int);

//定义回调函数add和sub, 意思是可以将这些函数作为函数的参数传递给其他函数
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
//定义cal函数,想要使用cal函数来调用add函数和sub函数
//将来需要通过函数指针变量来间接调用回调函数
//如果在某个调用函数中,将形参设置为另一个函数的首地址,间接调用对应的函数
//第三个参数pfunc为函数指针类型,函数首地址
//cal(100, 200, add) -> pfunc = add
int cal(int a, int b, pfunc_t pfunc){
    if(pfunc == NULL)
        return a*b;//如果没有给cal函数传递回调函数,设置一个默认功能, 计算乘法功能
    return pfunc(a, b);
}

int main(void){
    //第三个参数传递的是add, 为add函数的首地址, 此时的cal函数可以间接的调用add函数
    printf("%d\n", cal(100, 200, add));
    printf("%d\n", cal(100, 200, sub));
    printf("%d\n", cal(100, 200, NULL));//使用cal函数默认的功能,计算乘法的结果

    return 0;
}




