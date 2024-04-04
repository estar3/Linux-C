#include <stdio.h>
int main(void){
    int a[] = {1,2,3,4};
    //a++;
    int* pa = a;//pa保存a的首地址，pa指向a
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
    printf("%d %d %d %d\n", *(a+0), *(a+1), *(a+2), *(a+3));
    printf("%d %d %d %d\n", *(pa+0), *(pa+1), *(pa+2), *(pa+3));
    printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);

    pa[0] = 100;
    *(pa + 1) = 200;
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    //不可以使用指针变量来解决
    printf("%lu\n", sizeof(a) / sizeof(a[0]));//16
    printf("%lu\n", sizeof(pa)/ sizeof(a[0]));//8
    return 0;
}

