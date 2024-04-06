//gcc -D选项使用:通过-D选项给程序传递一个常量红
//gcc -DSIZE=5 -DPRINT=\"hello\" define3.c -o define3
#include <stdio.h>
//#define SIZE (5)
int main(void){
    int arr[SIZE] = {0};

    //初始化数组元素
    for(int i = 0; i < SIZE; i++)
        arr[i] = i + 100;
    //打印数组元素
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("%s\n", PRINT);
    return 0;
}

