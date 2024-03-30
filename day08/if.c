#include <stdio.h>

int main(void){
    printf("请输入一个整数:");
    int a;
    scanf("%d", &a);

    //1.if结构演示
    if(a >= 5){
        printf("a大于等于5\n");
    }
    printf("a = %d\n", a);
    //2.if-else结构演示
    if(a >= 5){
        printf("a大于等于5\n");
    }else{
        printf("a小于5\n");
    }
    //3.if-else if-else if 可以写n多个else if 
    if(a > 0){
        printf("a > 0\n");
    }else if(0 == a){
        printf("a = 0\n");
    }else if(a < 0){
        printf("a < 0\n");
    }
    //4.if-else if-else
    if(a > 0){
        printf("a > 0\n");
    }else if(0 == a){
        printf("a = 0\n");
    }else{
        printf("a < 0\n");
    }

    return 0;
}

