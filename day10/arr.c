#include <stdio.h>

int main(void){
    int a[5] = {1,2,3,4,5};//定义初始化数组 

    for(int i = 0; i < 5; i++)//打印元素的值
        printf("%d ", a[i]);//0 1 2 3 4
    printf("\n");

    for(int i = 0; i < 5; i++)//修改元素的值
        a[i] *= 100;

    for(int i = 0; i < 5; i++)//打印元素的值
        printf("%d ", a[i]);//0 1 2 3 4
    printf("\n");

    for(int i = 0; i < 5; i++)//打印元素地址
        printf("%p ", &a[i]);
    printf("\n");

    printf("a = %p\n", a);

    for(int i = 0; i < 5; i++)//通过地址修改元素值
        *&a[i] += 20;

    for(int i = 0; i < 5; i++)//通过地址打印元素值
        printf("%d ", *&a[i]);
    printf("\n");
    return 0;
}



