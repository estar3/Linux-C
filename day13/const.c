#include <stdio.h>

int main(void){
    //修饰普通变量
    const int a = 520;//a以后就是一个常量了,只能查看不能修改
    //a = 100;
    printf("a = %d\n", a);//ok 

    //常量指针
    int b = 520;
    const int* p = &b;//定义初始化常量指针p,p保存b的首地址,p指向b
    //*p = 521;//error
    printf("%d\n", *p);
    int c = 521;
    p = &c;//ok
    printf("%d\n", *p);

    //指针常量
    int d = 520;
    int* const p1 = &d;//定义初始化指针常量永远指向ｄ
    *p1 = 1024;//ok
    //p1 = &c;//error
    printf("%d\n", *p1);
    
    //常量指针常量
    int e = 100;
    const int* const p2 = &e;
    printf("%d\n", *p2);
    //p2 = &d;//error
    //*p2 = 102;//error

    return 0;
}




