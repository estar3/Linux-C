#include <stdio.h>

int main(void){
    int a[9] = {1,2,3,4,5};//定义初始化数组 
    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof((a[0]) = %lu\n", sizeof(a[0]));
    printf("sizeof(a)/sizeof(a[0]) = %lu\n", sizeof(a) / sizeof(a[0]));

    //垃圾代码:代码的可维护性很差
    for(int i = 0; i < 5; i++)//修改元素的值
        a[i] *= 100;
    for(int i = 0; i < 5; i++)//打印元素的值
        printf("%d ", a[i]);//0 1 2 3 4
    printf("\n");

    //size - 数组a的元素个数
    //优秀代码
    int size = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < size; i++)
        a[i] += 200;
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}



