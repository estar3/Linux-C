//main.c
#include "cal.h"
#include "arr.h"
//数组运算相关内容

int main(void){
    printf("%d\n",
        add(100,10));
    printf("%d\n",
        sub(100,20));
    int a[] = {5,6,7,8,9};
    print(a, ASIZE(a));
    return 0;
}
//gcc main.c cal.c arr.c
//  -o main
//运行:./main

