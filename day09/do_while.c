#include <stdio.h>

int main(void){
    int i = 0;
    do{
        printf("i = %d\n", i);
        i++;
    }while(i < 5);

    do{
        printf("hello,world\n");
    }while(0);

    //实现:0+1+2+...+100
    int m = 0;
    int sum = 0;

    do{
        m++;
        sum = sum + m;
    }while(m < 100);
    printf("sum = %d\n", sum);

    //死循环
    while(1){
        printf("hello,world\n");
    }
    return 0;
}

