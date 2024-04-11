//二级指针演示
#include <stdio.h>

int main(void){
    int a = 100;
    int* p = &a;//一级指针p
    int** pp = &p;//二级指针pp

    printf("a = %d, &a = %p\n", a, &a);
    printf("p = %p, &p = %p, *p = %d\n", p, &p, *p);
    //重点
    printf("&pp = %p, pp = %p, *pp = %p, **pp = %d\n", &pp, pp, *pp, **pp);

    printf("**pp = %d\n", **pp);
    **pp = 200;//修改a的值
    printf("**pp = %d\n", **pp);

    return 0;
}

