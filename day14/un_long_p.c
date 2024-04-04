//unsigned long 看做 void*
#include <stdio.h>

int main(void){
    int a = 100;
    //unsigned long的变量p来存储变量a的地址
    unsigned long p = (unsigned long)&a;
    *(int *)p = 521;
    printf("a = %d\n", a);
    printf("*(int *)p = %d\n", *(int *)p);
    return 0;
}

